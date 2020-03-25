#include "jetTreeReaderPbPbMCGSP.C"
#include "hltTreeReaderPbPbMC.C"
#include "globalTreeReaderPbPbMC.C"
#include "hiEvtTreeReaderPbPbMC.C"

#define jetTreeReaderPbPb jetTreeReaderPbPbMCGSP
#define hltTreeReaderPbPb   hltTreeReaderPbPbMC
#define globalTreeReaderPbPb globalTreeReaderPbPbMC
#define hiEvtTreeReaderPbPb hiEvtTreeReaderPbPbMC

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

float findNcoll(int hiBin) {
  const int nbins = 200;
  const float Ncoll[nbins] = {1976.95, 1944.02, 1927.29, 1891.9, 1845.3, 1807.2, 1760.45, 1729.18, 1674.8, 1630.3, 1590.52, 1561.72, 1516.1, 1486.5, 1444.68, 1410.88, 1376.4, 1347.32, 1309.71, 1279.98, 1255.31, 1219.89, 1195.13, 1165.96, 1138.92, 1113.37, 1082.26, 1062.42, 1030.6, 1009.96, 980.229, 955.443, 936.501, 915.97, 892.063, 871.289, 847.364, 825.127, 806.584, 789.163, 765.42, 751.187, 733.001, 708.31, 690.972, 677.711, 660.682, 640.431, 623.839, 607.456, 593.307, 576.364, 560.967, 548.909, 530.475, 519.575, 505.105, 490.027, 478.133, 462.372, 451.115, 442.642, 425.76, 416.364, 405.154, 392.688, 380.565, 371.167, 360.28, 348.239, 340.587, 328.746, 320.268, 311.752, 300.742, 292.172, 281.361, 274.249, 267.025, 258.625, 249.931, 240.497, 235.423, 228.63, 219.854, 214.004, 205.425, 199.114, 193.018, 185.644, 180.923, 174.289, 169.641, 161.016, 157.398, 152.151, 147.425, 140.933, 135.924, 132.365, 127.017, 122.127, 117.817, 113.076, 109.055, 105.16, 101.323, 98.098, 95.0548, 90.729, 87.6495, 84.0899, 80.2237, 77.2201, 74.8848, 71.3554, 68.7745, 65.9911, 63.4136, 61.3859, 58.1903, 56.4155, 53.8486, 52.0196, 49.2921, 47.0735, 45.4345, 43.8434, 41.7181, 39.8988, 38.2262, 36.4435, 34.8984, 33.4664, 31.8056, 30.351, 29.2074, 27.6924, 26.7754, 25.4965, 24.2802, 22.9651, 22.0059, 21.0915, 19.9129, 19.1041, 18.1487, 17.3218, 16.5957, 15.5323, 14.8035, 14.2514, 13.3782, 12.8667, 12.2891, 11.61, 11.0026,10.3747, 9.90294, 9.42648, 8.85324, 8.50121, 7.89834, 7.65197, 7.22768, 6.7755, 6.34855, 5.98336, 5.76555, 5.38056, 5.11024, 4.7748, 4.59117, 4.23247, 4.00814, 3.79607, 3.68702, 3.3767, 3.16309, 2.98282, 2.8095, 2.65875, 2.50561, 2.32516, 2.16357, 2.03235, 1.84061, 1.72628, 1.62305, 1.48916, 1.38784, 1.28366, 1.24693, 1.18552, 1.16085, 1.12596, 1.09298, 1.07402, 1.06105, 1.02954};
  return Ncoll[hiBin];
}


float getDeltaR(float eta1,float phi1,float eta2,float phi2)
{
  float deltaPhi = TMath::Abs(phi1-phi2);
  float deltaEta = eta1-eta2;
  if(deltaPhi > TMath::Pi())
    deltaPhi = TMath::TwoPi() - deltaPhi;
  return TMath::Sqrt(deltaEta*deltaEta + deltaPhi*deltaPhi);
}

void fillTree_JP_MC() {

  TChain *tchGlob = new TChain("skimanalysis/HltTree");
  TChain *tchHLT = new TChain("hltanalysis/HltTree");
  TChain *tchJet = new TChain("akFlowPuCs4PFJetAnalyzer/t");
  TChain *tchHiEvt = new TChain("hiEvtAnalyzer/HiTree");

  ifstream myReadFileMC;
  myReadFileMC.open("DiJet_MuJetfilter_GSP.txt");
  //myReadFileMC.open("BJet_MuJetfilter_GSP.txt");
  // myReadFileMC.open("CJet_MuJetfilter_GSP.txt");
  string path_mc = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/";
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
      tchHLT->Add(finalPath_mc.c_str());
      tchJet->Add(finalPath_mc.c_str());
      tchGlob->Add(finalPath_mc.c_str());
      tchHiEvt->Add(finalPath_mc.c_str());
    }
  }
  
  myReadFileMC.close();
  
  globalTreeReaderPbPb globR(tchGlob);
  hltTreeReaderPbPb hltR(tchHLT);
  jetTreeReaderPbPb jetR(tchJet);
  hiEvtTreeReaderPbPb hiEvtR(tchHiEvt);
  
  //set branch status
  hltR.fChain->SetBranchStatus("*",0);
  jetR.fChain->SetBranchStatus("*",0);
  hiEvtR.fChain->SetBranchStatus("*",0);
  globR.fChain->SetBranchStatus("*",0);  

  jetR.fChain->SetBranchStatus("GSP_evt",1);
  jetR.fChain->SetBranchStatus("run",1);
  jetR.fChain->SetBranchStatus("evt",1);
  jetR.fChain->SetBranchStatus("lumi",1);
  jetR.fChain->SetBranchStatus("nref",1);
  jetR.fChain->SetBranchStatus("rawpt",1);
  jetR.fChain->SetBranchStatus("jtpt",1);
  jetR.fChain->SetBranchStatus("jteta",1);
  jetR.fChain->SetBranchStatus("jtphi",1);
  jetR.fChain->SetBranchStatus("refpt",1);
  jetR.fChain->SetBranchStatus("refeta",1);
  jetR.fChain->SetBranchStatus("refphi",1);
  jetR.fChain->SetBranchStatus("discr_csvV2",1);
  jetR.fChain->SetBranchStatus("pdiscr_csvV2",1);
  jetR.fChain->SetBranchStatus("ndiscr_csvV2",1);
  jetR.fChain->SetBranchStatus("matchedHadronFlavor",1);
  jetR.fChain->SetBranchStatus("matchedPartonFlavor",1);
  jetR.fChain->SetBranchStatus("discr_prob",1);
  jetR.fChain->SetBranchStatus("pthat",1);
  jetR.fChain->SetBranchStatus("mupt",1);

  hltR.fChain->SetBranchStatus("HLT_HIPuAK4CaloJet80Eta5p1_v1",1);

  globR.fChain->SetBranchStatus("phfCoincFilter2Th4",1);
  globR.fChain->SetBranchStatus("pclusterCompatibilityFilter",1);
  globR.fChain->SetBranchStatus("pprimaryVertexFilter",1);
  globR.fChain->SetBranchStatus("pBeamScrapingFilter",1);
  globR.fChain->SetBranchStatus("collisionEventSelectionAODv2",1);
  globR.fChain->SetBranchStatus("HBHENoiseFilterResultRun2Loose",1);

  hiEvtR.fChain->SetBranchStatus("hiBin",1);
  hiEvtR.fChain->SetBranchStatus("vz",1);
  hiEvtR.fChain->SetBranchStatus("weight",1);

  hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1",1);

  cout << "before chain return" << endl;     

  if (jetR.fChain == 0) return;
  if (hltR.fChain == 0) return;
  if (globR.fChain == 0) return;
  if (hiEvtR.fChain == 0) return;

  Long64_t nentries = jetR.fChain->GetEntries();
  Long64_t nentries2 = hltR.fChain->GetEntries();
  Long64_t nentries3 = globR.fChain->GetEntries();

  if (nentries != nentries2 || nentries != nentries3 || nentries3 != nentries2) return;

  cout << "nentries = " << nentries << endl;

  //TFile *fout = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_JP_PbPb_MC_DiJet_MuonJetsOnly_GSP.root","RECREATE");
  TFile *fout = new TFile("/tmp/mnguyen/jetTree_JP_PbPb_MC_DiJet_MuonJetsOnly_GSP.root","RECREATE");
  //TFile *fout = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_JP_PbPb_MC_BJet_MuonJetsOnly_GSP.root","RECREATE");
  //TFile *fout = new TFile("/tmp/mnguyen//jetTree_JP_PbPb_MC_BJet_MuonJetsOnly_GSP.root","RECREATE");
  //TFile *fout = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_JP_PbPb_MC_CJet_MuonJetsOnly_GSP.root","RECREATE");

  // flat jet tree
  TDirectory *tdir = fout->mkdir("jetTree");
  tdir->cd();
  TTree *tr = new TTree("tree","jet tree with JP tagger");

  //general jet vars

  Int_t           GSP_evt;
  Int_t           nref;
  Int_t           run;
  Int_t           evt;
  Int_t           lumi;
  Float_t         rawpt;
  Float_t         jtpt;
  Float_t         jteta;
  Float_t         jtphi;
  Float_t         refpt;
  Float_t         refeta;
  Float_t         refphi;
  Int_t           matchedHadronFlavor;
  Int_t           matchedPartonFlavor;
  Float_t         discr_csvV2;
  Float_t         pdiscr_csvV2;
  Float_t         ndiscr_csvV2;
  Float_t         discr_prob;

  //event vars 

  Float_t         nColl;
  Float_t         pthat;
  Int_t           hiBin;
  Float_t         weight;
  Float_t         vz;

  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1;
  Int_t HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;

  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1;
  Int_t HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;

  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1;
  Int_t HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;

  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1;
  Int_t HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;

   
  // book variables
  tr->Branch("GSP_evt",&GSP_evt,"GSP_evt/I");
  tr->Branch("nref",&nref,"nref/I");
  tr->Branch("run",&run,"run/I");
  tr->Branch("evt",&evt,"evt/I");
  tr->Branch("lumi",&lumi,"lumi/I");

  tr->Branch("pthat",&pthat,"pthat/F");
  tr->Branch("hiBin",&hiBin,"hiBin/I");
  tr->Branch("nColl",&nColl,"nColl/F");
  tr->Branch("weight",&weight,"weight/F");
  tr->Branch("vz",&vz,"vz/F");

  tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1/I");
  tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1/I");
  tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1/I");
  tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1/I");
  tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1/I");
  tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1/I");
  tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1/I");
  tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1/I");

  tr->Branch("rawpt",&rawpt,"rawpt/F");
  tr->Branch("jtpt",&jtpt,"jtpt/F");
  tr->Branch("jteta",&jteta,"jteta/F");
  tr->Branch("jtphi",&jtphi,"jtphi/F");
  tr->Branch("refpt",&refpt,"refpt/F");
  tr->Branch("refeta",&refeta,"refeta/F");
  tr->Branch("refphi",&refphi,"refphi/F");
  tr->Branch("matchedHadronFlavor",&matchedHadronFlavor,"matchedHadronFlavor/I");
  tr->Branch("matchedPartonFlavor",&matchedPartonFlavor,"matchedPartonFlavor/I");
  tr->Branch("discr_csvV2",&discr_csvV2,"discr_csvV2/F");
  tr->Branch("pdiscr_csvV2",&pdiscr_csvV2,"pdiscr_csvV2/F");
  tr->Branch("ndiscr_csvV2",&ndiscr_csvV2,"ndiscr_csvV2/F");
  tr->Branch("discr_prob",&discr_prob,"discr_prob/F");

  Long64_t nbytes = 0, nb = 0;

  cout << "before the event loop" << endl;

  //for (Long64_t jentry=0; jentry<10000;jentry++) {
  for (Long64_t jentry=0; jentry<nentries;jentry++) {

    if (jentry%10000==0) cout << "--> " << jentry << "/" << nentries << " , " << jentry*100/nentries << " % done" << endl;
    //cout << "--> " << jentry << "/" << nentries << endl;

    Long64_t ientry_jet = jetR.LoadTree(jentry);
    if (ientry_jet < 0) break;

    Long64_t ientry_hlt = hltR.LoadTree(jentry);
    if (ientry_hlt < 0) break;

    Long64_t ientry_glob = globR.LoadTree(jentry);
    if (ientry_glob < 0) break;

    Long64_t ientry_hievt = hiEvtR.LoadTree(jentry);
    if (ientry_hievt < 0) break;
    
    // basic cuts
    jetR.b_nref->GetEntry(ientry_jet);
    
    //don't remove this! 
    nb = jetR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = hltR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = globR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = hiEvtR.fChain->GetEntry(jentry);  nbytes += nb;

    HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;
    HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1;
    HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;
    HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1;
    HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;
    HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1;
    HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;
    HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1;    

    //noise filters
    bool noiseFiltOk = (globR.collisionEventSelectionAODv2 && globR.phfCoincFilter2Th4 && globR.pclusterCompatibilityFilter && globR.pprimaryVertexFilter && globR.pBeamScrapingFilter && globR.HBHENoiseFilterResultRun2Loose);
    if(!noiseFiltOk) continue;
        
    //bool single_hltOk = hltR.HLT_HIPuAK4CaloJet80Eta5p1_v1;
    //bool hltOk = single_hltOk;
    //if(!hltOk) continue;
    
    bool vZReq = abs(hiEvtR.vz)<15;
    if(!vZReq) continue;

    hiBin = hiEvtR.hiBin;    
    nColl = findNcoll(hiEvtR.hiBin);    
    weight = hiEvtR.weight;
    vz = hiEvtR.vz;

    GSP_evt = jetR.GSP_evt;
    run = jetR.run;
    evt = jetR.evt;
    lumi = jetR.lumi;    
    nref=jetR.nref;
    pthat = jetR.pthat;
        
    for(int iJet = 0; iJet < nref; iJet++){

      if(jetR.mupt[iJet]==0.) continue;
      if(fabs(jetR.jteta[iJet])>2.0) continue;
      if(jetR.jteta[iJet]< -1.39 && jetR.jtphi[iJet] > -1.6 && jetR.jtphi[iJet] < -0.9) continue;

      //cout << "iJet = "<< iJet<< endl;     

      rawpt = jetR.rawpt[iJet];
      jtpt = jetR.jtpt[iJet];
      jteta = jetR.jteta[iJet];
      jtphi = jetR.jtphi[iJet];
      refpt = jetR.refpt[iJet];
      refeta = jetR.refeta[iJet];
      refphi = jetR.refphi[iJet];
      matchedHadronFlavor = jetR.matchedHadronFlavor[iJet];
      matchedPartonFlavor = jetR.matchedPartonFlavor[iJet];
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

