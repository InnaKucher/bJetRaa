#include "jetTreeReaderPPDataInclusive.C"
#include "globalTreeReaderPPData.C"
#include "hiEvtTreeReaderPPData.C"

#define jetTreeReaderPP jetTreeReaderPPDataInclusive
#define globalTreeReaderPP globalTreeReaderPPData
#define hiEvtTreeReaderPP hiEvtTreeReaderPPData

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

void fillTree_JP_DATA() {

  TChain *tchGlob = new TChain("skimanalysis/HltTree");
  TChain *tchJet = new TChain("ak4PFJetAnalyzer/t");
  TChain *tchHiEvt = new TChain("hiEvtAnalyzer/HiTree");

  ifstream myReadFileMC;
  myReadFileMC.open("HighEG_JetFilter_part4.txt");
  string path_mc = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HighEGJet_Run2017G-17Nov2017-v2_merged/";
  //string path_mc = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HighEGJet_Run2017G-17Nov2017-v2/HighEGJet/HighEGJet_Run2017G-17Nov2017-v2/200211_123624/0000/";
  char output_mc[800];
  
  if(myReadFileMC.is_open()) {
    while (!myReadFileMC.eof()) {
      myReadFileMC >> output_mc;
      if (myReadFileMC.eof()) break;
      
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
    }
  }
  
  myReadFileMC.close();
  
  globalTreeReaderPP globR(tchGlob);
  jetTreeReaderPP jetR(tchJet);
  hiEvtTreeReaderPP hiEvtR(tchHiEvt);
  
  //set branch status
  jetR.fChain->SetBranchStatus("*",0);
  hiEvtR.fChain->SetBranchStatus("*",0);
  globR.fChain->SetBranchStatus("*",0);  

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
     
  if (jetR.fChain == 0) return;
  if (globR.fChain == 0) return;
  if (hiEvtR.fChain == 0) return;

  Long64_t nentries = jetR.fChain->GetEntries();
  Long64_t nentries3 = globR.fChain->GetEntries();

  if (nentries != nentries3) return;

  cout << "nentries = " << nentries << endl;

  TFile *fout = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_CSVv2_PP_DATA_JetFilter_part4.root","RECREATE");

  // flat jet tree
  TDirectory *tdir = fout->mkdir("jetTree");
  tdir->cd();
  TTree *tr = new TTree("tree","jet tree");

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
    
    // basic cuts
    //if(!jetR.b_nref) continue;
    jetR.b_nref->GetEntry(ientry_jet);

    //cout << "after get entry" << endl;
    
    //don't remove this! 
    nb = jetR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = globR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = hiEvtR.fChain->GetEntry(jentry);  nbytes += nb;
    

    //noise filters
    bool noiseFiltOk = (globR.pPAprimaryVertexFilter && globR.pBeamScrapingFilter);
    if(!noiseFiltOk) continue;
        
    bool vZReq = abs(hiEvtR.vz)<15;
    if(!vZReq) continue;

    vz = hiEvtR.vz;

    run = hiEvtR.run;
    evt = hiEvtR.evt;
    lumi = hiEvtR.lumi;    
    nref=jetR.nref;

    //cout << "before the jet" << endl;
            
    for(int iJet = 0; iJet < nref; iJet++){

      //if(jetR.mupt[iJet]==0.) continue;
      if(fabs(jetR.jteta[iJet])>2.0) continue;
      //if(jetR.jteta[iJet]< -1.39 && jetR.jtphi[iJet] > -1.6 && jetR.jtphi[iJet] < -0.9) continue;
      //cout << "iJet = "<< iJet<< endl;     

      rawpt = jetR.rawpt[iJet];
      jtpt = jetR.jtpt[iJet];
      jteta = jetR.jteta[iJet];
      jtphi = jetR.jtphi[iJet];
      discr_csvV2 = jetR.discr_csvV2[iJet];
      pdiscr_csvV2 = jetR.pdiscr_csvV2[iJet];
      ndiscr_csvV2 = jetR.ndiscr_csvV2[iJet];
      discr_prob = jetR.discr_prob[iJet];

      //      cout << "nref = " << nref << " , iJet = " << iJet << endl;

      tr->Fill();
    
    } // jet loop
    
  } // event loop

   fout->Write();
   fout->Close();

}

