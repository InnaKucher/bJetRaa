#include "jetTreeReaderPPData.C"
#include "globalTreeReaderPPData.C"
#include "hiEvtTreeReaderPPData.C"
#include "hltTreeReaderPPData.C"

#define jetTreeReaderPP jetTreeReaderPPData
#define globalTreeReaderPP globalTreeReaderPPData
#define hiEvtTreeReaderPP hiEvtTreeReaderPPData
#define hltTreeReaderPP hltTreeReaderPPData

#include "TH1F.h"
#include "TLorentzVector.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <string>
#include <algorithm>
#include "TRandom3.h"

using namespace std;


float getDeltaR(float eta1,float phi1,float eta2,float phi2)
{
  float deltaPhi = TMath::Abs(phi1-phi2);
  float deltaEta = eta1-eta2;
  if(deltaPhi > TMath::Pi())
    deltaPhi = TMath::TwoPi() - deltaPhi;
  return TMath::Sqrt(deltaEta*deltaEta + deltaPhi*deltaPhi);
}

void fillTree_PP_DATA(int doJPTagger_=0, int doLowerPD_=0) {

  if(doJPTagger_){
    doLowerPD_ = 0;
  }

  TChain *tchGlob = new TChain("skimanalysis/HltTree");
  TChain *tchJet = new TChain("ak4PFJetAnalyzer/t");
  TChain *tchHiEvt = new TChain("hiEvtAnalyzer/HiTree");
  TChain *tchHlt = new TChain("hltanalysis/HltTree");

  string inputFileName = "";

  if(doJPTagger_){
    inputFileName = "HighEG_MuJetfilter.txt";
  }
  else{
    inputFileName = "HighEG_JetFilter_origin.txt";
    if(doLowerPD_) inputFileName = "LowEG_JetFilter_origin.txt";
  }

  ifstream myReadFileData;
  myReadFileData.open(inputFileName.c_str());
  string path_mc = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/";
  char output_mc[800];
  
  if(myReadFileData.is_open()) {
    while (!myReadFileData.eof()) {
      myReadFileData >> output_mc;
      if (myReadFileData.eof()) break;
      
      stringstream ss_mc;
      string s_output_mc = "";
      string finalPath_mc = "";
      ss_mc << output_mc;
      ss_mc >> s_output_mc;
      
      finalPath_mc += path_mc;
      finalPath_mc += s_output_mc;
      cout << "path = " << finalPath_mc << endl;
      tchJet->Add(finalPath_mc.c_str());
      tchGlob->Add(finalPath_mc.c_str());
      tchHiEvt->Add(finalPath_mc.c_str());
      tchHlt->Add(finalPath_mc.c_str());
    }
  }
  
  myReadFileData.close();
  
  globalTreeReaderPP globR(tchGlob);
  jetTreeReaderPP jetR(tchJet);
  hiEvtTreeReaderPP hiEvtR(tchHiEvt);
  hltTreeReaderPP hltR(tchHlt);  

  //set branch status
  jetR.fChain->SetBranchStatus("*",0);
  hiEvtR.fChain->SetBranchStatus("*",0);
  globR.fChain->SetBranchStatus("*",0);  
  hltR.fChain->SetBranchStatus("*",0);

  hiEvtR.fChain->SetBranchStatus("run",1);
  hiEvtR.fChain->SetBranchStatus("evt",1);
  hiEvtR.fChain->SetBranchStatus("lumi",1);
  jetR.fChain->SetBranchStatus("nref",1);
  jetR.fChain->SetBranchStatus("rawpt",1);
  jetR.fChain->SetBranchStatus("jtpt",1);
  jetR.fChain->SetBranchStatus("jteta",1);
  jetR.fChain->SetBranchStatus("jtphi",1);
  jetR.fChain->SetBranchStatus("discr_csvV2",1);
  jetR.fChain->SetBranchStatus("pdiscr_csvV2",1);
  jetR.fChain->SetBranchStatus("ndiscr_csvV2",1);
  jetR.fChain->SetBranchStatus("discr_prob",1);
  jetR.fChain->SetBranchStatus("mupt",1);

  globR.fChain->SetBranchStatus("pPAprimaryVertexFilter",1);
  globR.fChain->SetBranchStatus("pBeamScrapingFilter",1);

  hiEvtR.fChain->SetBranchStatus("vz",1);

  if(doJPTagger_){
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu5_AK4PFJet30_v1",1);
  }
  else{
    if(doLowerPD_){
      hltR.fChain->SetBranchStatus("HLT_HIAK4PFJet30_v1",1);
      hltR.fChain->SetBranchStatus("HLT_HIAK4PFJet40_v1",1);
      hltR.fChain->SetBranchStatus("HLT_HIAK4PFJet60_v1",1);
    }
    else{
      hltR.fChain->SetBranchStatus("HLT_HIAK4PFJet80_v1",1);
      hltR.fChain->SetBranchStatus("HLT_HIAK4PFJet100_v1",1);
      hltR.fChain->SetBranchStatus("HLT_HIAK4PFJet120_v1",1);
    }
  }     

  if (jetR.fChain == 0) return;
  if (globR.fChain == 0) return;
  if (hiEvtR.fChain == 0) return;
  if (hltR.fChain == 0) return;

  Long64_t nentries = jetR.fChain->GetEntries();
  Long64_t nentries3 = globR.fChain->GetEntries();

  if (nentries != nentries3) return;

  cout << "nentries = " << nentries << endl;

  string outputFileName = "";
  if(doJPTagger_){
    outputFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_JP_PP_DATA_HighEG_MuonJetsOnly.root";
  }
  else{
    outputFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_CSVv2_PP_DATA_HighEG_V3.root";
    if(doLowerPD_) outputFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_CSVv2_PP_DATA_LowEG.root";
  }

  TFile *fout = new TFile(outputFileName.c_str(),"RECREATE");

  // flat jet tree
  TDirectory *tdir = fout->mkdir("jetTree");
  tdir->cd();
  TTree *tr = new TTree("tree","jet tree with JP tagger");

  //general jet vars

  Int_t           nref;
  Int_t           run;
  Int_t           evt;
  Int_t           lumi;
  Float_t         rawpt;
  Float_t         jtpt;
  Float_t         jteta;
  Float_t         jtphi;
  Float_t         discr_csvV2;
  Float_t         pdiscr_csvV2;
  Float_t         ndiscr_csvV2;
  Float_t         discr_prob;

  //event vars 

  Float_t         vz;

  //online

  Int_t HLT_HIAK4PFJet30_v1;
  Int_t HLT_HIAK4PFJet40_v1;
  Int_t HLT_HIAK4PFJet60_v1;

  Int_t HLT_HIAK4PFJet80_v1;
  Int_t HLT_HIAK4PFJet100_v1;
  Int_t HLT_HIAK4PFJet120_v1;

  Int_t HLT_HIL3Mu5_AK4PFJet30_v1;   

  // book variables
  tr->Branch("nref",&nref,"nref/I");
  tr->Branch("run",&run,"run/I");
  tr->Branch("evt",&evt,"evt/I");
  tr->Branch("lumi",&lumi,"lumi/I");

  tr->Branch("vz",&vz,"vz/F");

  tr->Branch("rawpt",&rawpt,"rawpt/F");
  tr->Branch("jtpt",&jtpt,"jtpt/F");
  tr->Branch("jteta",&jteta,"jteta/F");
  tr->Branch("jtphi",&jtphi,"jtphi/F");
  tr->Branch("discr_csvV2",&discr_csvV2,"discr_csvV2/F");
  tr->Branch("pdiscr_csvV2",&pdiscr_csvV2,"pdiscr_csvV2/F");
  tr->Branch("ndiscr_csvV2",&ndiscr_csvV2,"ndiscr_csvV2/F");
  tr->Branch("discr_prob",&discr_prob,"discr_prob/F");

  if(doJPTagger_){
    tr->Branch("HLT_HIL3Mu5_AK4PFJet30_v1",&HLT_HIL3Mu5_AK4PFJet30_v1,"HLT_HIL3Mu5_AK4PFJet30_v1/I");
  }
  else{
    if(doLowerPD_){
      tr->Branch("HLT_HIAK4PFJet30_v1",&HLT_HIAK4PFJet30_v1,"HLT_HIAK4PFJet30_v1/I");
      tr->Branch("HLT_HIAK4PFJet40_v1",&HLT_HIAK4PFJet40_v1,"HLT_HIAK4PFJet40_v1/I");
      tr->Branch("HLT_HIAK4PFJet60_v1",&HLT_HIAK4PFJet60_v1,"HLT_HIAK4PFJet60_v1/I");
    }
    else{
      tr->Branch("HLT_HIAK4PFJet80_v1",&HLT_HIAK4PFJet80_v1,"HLT_HIAK4PFJet80_v1/I");
      tr->Branch("HLT_HIAK4PFJet100_v1",&HLT_HIAK4PFJet100_v1,"HLT_HIAK4PFJet100_v1/I");
      tr->Branch("HLT_HIAK4PFJet120_v1",&HLT_HIAK4PFJet120_v1,"HLT_HIAK4PFJet120_v1/I");
    }
  }

  Long64_t nbytes = 0, nb = 0;

  //for (Long64_t jentry=0; jentry<10000;jentry++) {
  for (Long64_t jentry=0; jentry<nentries;jentry++) {

    if (jentry%10000==0) cout << "--> " << jentry << "/" << nentries << " , " << jentry*100/nentries << " % done" << endl;
    //cout << "--> " << jentry << "/" << nentries << endl;

    Long64_t ientry_jet = jetR.LoadTree(jentry);
    if (ientry_jet < 0) break;

    Long64_t ientry_glob = globR.LoadTree(jentry);
    if (ientry_glob < 0) break;

    Long64_t ientry_hievt = hiEvtR.LoadTree(jentry);
    if (ientry_hievt < 0) break;

    Long64_t ientry_hlt = hltR.LoadTree(jentry);
    if(ientry_hlt < 0 ) break;    

    // basic cuts
    jetR.b_nref->GetEntry(ientry_jet);
    
    //don't remove this! 
    nb = jetR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = globR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = hiEvtR.fChain->GetEntry(jentry);  nbytes += nb;
    nb = hltR.fChain->GetEntry(jentry);  nbytes += nb;    

    //noise filters
    bool noiseFiltOk = (globR.pPAprimaryVertexFilter && globR.pBeamScrapingFilter);
    if(!noiseFiltOk) continue;
        
    bool vZReq = abs(hiEvtR.vz)<15;
    if(!vZReq) continue;

    if(doJPTagger_){
      if(hltR.HLT_HIL3Mu5_AK4PFJet30_v1==0) continue;
      HLT_HIL3Mu5_AK4PFJet30_v1 = hltR.HLT_HIL3Mu5_AK4PFJet30_v1;
    }
    else{

      if(!doLowerPD_ && hltR.HLT_HIAK4PFJet80_v1==0 && hltR.HLT_HIAK4PFJet100_v1==0 && hltR.HLT_HIAK4PFJet120_v1==0) continue;
      if(doLowerPD_ && hltR.HLT_HIAK4PFJet30_v1==0 && hltR.HLT_HIAK4PFJet40_v1==0 && hltR.HLT_HIAK4PFJet60_v1==0) continue;

      if(doLowerPD_){
        HLT_HIAK4PFJet30_v1 = hltR.HLT_HIAK4PFJet30_v1;
        HLT_HIAK4PFJet40_v1 = hltR.HLT_HIAK4PFJet40_v1;
        HLT_HIAK4PFJet60_v1 = hltR.HLT_HIAK4PFJet60_v1;
      }
      else{
	HLT_HIAK4PFJet80_v1 = hltR.HLT_HIAK4PFJet80_v1;
	HLT_HIAK4PFJet100_v1 = hltR.HLT_HIAK4PFJet100_v1;
	HLT_HIAK4PFJet120_v1 = hltR.HLT_HIAK4PFJet120_v1;
      }
    }

    vz = hiEvtR.vz;

    run = hiEvtR.run;
    evt = hiEvtR.evt;
    lumi = hiEvtR.lumi;    
    nref=jetR.nref;
            
    for(int iJet = 0; iJet < nref; iJet++){

      if(doJPTagger_){
	if(jetR.mupt[iJet]==0.) continue;
      }
      if(fabs(jetR.jteta[iJet])>1.34) continue;

      rawpt = jetR.rawpt[iJet];
      jtpt = jetR.jtpt[iJet];
      jteta = jetR.jteta[iJet];
      jtphi = jetR.jtphi[iJet];
      discr_csvV2 = jetR.discr_csvV2[iJet];
      pdiscr_csvV2 = jetR.pdiscr_csvV2[iJet];
      ndiscr_csvV2 = jetR.ndiscr_csvV2[iJet];
      discr_prob = jetR.discr_prob[iJet];

      tr->Fill();
    
    } // jet loop
    
  } // event loop

   fout->Write();
   fout->Close();

}

