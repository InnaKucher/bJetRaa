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

void fillTree_PbPb_MC(int doJPTagger_=0, int JPSample=0, int doTagVars_=0) {

  if(doJPTagger_) doTagVars_=0;

  TChain *tchGlob = new TChain("skimanalysis/HltTree");
  TChain *tchHLT = new TChain("hltanalysis/HltTree");
  TChain *tchJet = new TChain("akFlowPuCs4PFJetAnalyzer/t");
  TChain *tchHiEvt = new TChain("hiEvtAnalyzer/HiTree");

  ifstream myReadFileMC;
  if(doJPTagger_){
    if(JPSample==0){
      myReadFileMC.open("DiJet_MuJetfilter.txt");
    }
    if(JPSample==1){
      myReadFileMC.open("BJet_MuJetfilter.txt");
    }
    if(JPSample==2){
      myReadFileMC.open("CJet_MuJetfilter.txt");
    }
  }
  else{
    myReadFileMC.open("DiJet_Jet80filter.txt");
  }
  
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
  jetR.fChain->SetBranchStatus("discr_prob",1);
  jetR.fChain->SetBranchStatus("matchedHadronFlavor",1);
  jetR.fChain->SetBranchStatus("matchedPartonFlavor",1);
  jetR.fChain->SetBranchStatus("nIPtrk",1);
  jetR.fChain->SetBranchStatus("nselIPtrk",1);
  
  jetR.fChain->SetBranchStatus("TagVarCSV_trackJetPt",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexCategory",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_jetNSecondaryVertices",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSumJetEtRatio",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSumJetDeltaR",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip2dValAboveCharm",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip2dSigAboveCharm",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip3dValAboveCharm",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip3dSigAboveCharm",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexMass",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexNTracks",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexEnergyRatio",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexJetDeltaR",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_flightDistance2dVal",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_flightDistance2dSig",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_flightDistance3dVal",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_flightDistance3dSig",1);
  jetR.fChain->SetBranchStatus("nTrkTagVarCSV",1);
  jetR.fChain->SetBranchStatus("nTrkEtaRelTagVarCSV",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_jetNTracksEtaRel",1);
  jetR.fChain->SetBranchStatus("Jet_nFirstTrkTagVarCSV",1);
  jetR.fChain->SetBranchStatus("Jet_nLastTrkTagVarCSV",1);
  jetR.fChain->SetBranchStatus("Jet_nFirstTrkEtaRelTagVarCSV",1);
  jetR.fChain->SetBranchStatus("Jet_nLastTrkEtaRelTagVarCSV",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_jetNTracks",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackMomentum",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackEta",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackPtRel",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackPPar",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackDeltaR",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackPtRatio",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackPParRatio",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip2dVal",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip2dSig",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip3dVal",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip3dSig",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackDecayLenVal",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackJetDistVal",1);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackEtaRel",1);
  jetR.fChain->SetBranchStatus("pthat",1);
  jetR.fChain->SetBranchStatus("mupt",1);

  hltR.fChain->SetBranchStatus("HLT_HIPuAK4CaloJet80Eta5p1_v1",1);

  hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1",1);
  hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1",1);

  globR.fChain->SetBranchStatus("phfCoincFilter2Th4",1);
  globR.fChain->SetBranchStatus("pclusterCompatibilityFilter",1);
  globR.fChain->SetBranchStatus("pprimaryVertexFilter",1);
  globR.fChain->SetBranchStatus("pBeamScrapingFilter",1);
  globR.fChain->SetBranchStatus("collisionEventSelectionAODv2",1);
  globR.fChain->SetBranchStatus("HBHENoiseFilterResultRun2Loose",1);

  hiEvtR.fChain->SetBranchStatus("hiBin",1);
  hiEvtR.fChain->SetBranchStatus("vz",1);
  hiEvtR.fChain->SetBranchStatus("weight",1);
     
  if (jetR.fChain == 0) return;
  if (hltR.fChain == 0) return;
  if (globR.fChain == 0) return;
  if (hiEvtR.fChain == 0) return;

  Long64_t nentries = jetR.fChain->GetEntries();
  Long64_t nentries2 = hltR.fChain->GetEntries();
  Long64_t nentries3 = globR.fChain->GetEntries();

  if (nentries != nentries2 || nentries != nentries3 || nentries3 != nentries2) return;

  cout << "nentries = " << nentries << endl;

  string outFileName = "";

  if(doJPTagger_){
    if(JPSample==0){
      outFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_JP_PbPb_MC_DiJet_MuJetOnly.root";
    }
    if(JPSample==1){
      outFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_JP_PbPb_MC_BJet_MuJetOnly.root";
    }
    if(JPSample==2){
      outFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_JP_PbPb_MC_CJet_MuJetOnly.root";
    }
  }
  else{
    outFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_CSVv2_PbPb_MC.root";
  }

  TFile *fout = new TFile(outFileName.c_str(),"RECREATE");

  // flat jet tree
  TDirectory *tdir = fout->mkdir("jetTree");
  tdir->cd();
  TTree *tr = new TTree("tree","jet tree with csvv2 input vars");

  //general jet vars

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
  Int_t           nIPtrk;
  Int_t           nselIPtrk;

  //jet related vars 
  Float_t         TagVarCSV_trackJetPt;
  Float_t         TagVarCSV_vertexCategory;
  Float_t         TagVarCSV_jetNSecondaryVertices;
  Float_t         TagVarCSV_trackSumJetEtRatio;
  Float_t         TagVarCSV_trackSumJetDeltaR;
  Float_t         TagVarCSV_trackSip3dValAboveCharm;
  Float_t         TagVarCSV_trackSip3dSigAboveCharm;
  Float_t         TagVarCSV_vertexMass;
  Float_t         TagVarCSV_vertexNTracks;
  Float_t         TagVarCSV_vertexEnergyRatio;
  Float_t         TagVarCSV_vertexJetDeltaR;
  Float_t         TagVarCSV_flightDistance2dVal;
  Float_t         TagVarCSV_flightDistance2dSig;

  //track related vars 
  Float_t         TagVarCSV_jetNTracksEtaRel;
  Float_t         TagVarCSV_jetNTracks;

  //per track variables
  Float_t TagVarCSV_trackSip2dSig_0;
  Float_t TagVarCSV_trackSip2dSig_1;
  Float_t TagVarCSV_trackSip2dSig_2;
  Float_t TagVarCSV_trackSip2dSig_3;

  Float_t TagVarCSV_trackSip3dSig_0;
  Float_t TagVarCSV_trackSip3dSig_1;
  Float_t TagVarCSV_trackSip3dSig_2;
  Float_t TagVarCSV_trackSip3dSig_3;

  Float_t TagVarCSV_trackPtRel_0;
  Float_t TagVarCSV_trackPtRel_1;
  Float_t TagVarCSV_trackPtRel_2;
  Float_t TagVarCSV_trackPtRel_3;

  Float_t TagVarCSV_trackEtaRel_0;
  Float_t TagVarCSV_trackEtaRel_1;
  Float_t TagVarCSV_trackEtaRel_2;
  Float_t TagVarCSV_trackEtaRel_3;

  Float_t TagVarCSV_trackDeltaR_0;
  Float_t TagVarCSV_trackDeltaR_1;
  Float_t TagVarCSV_trackDeltaR_2;
  Float_t TagVarCSV_trackDeltaR_3;

  Float_t TagVarCSV_trackPtRatio_0;
  Float_t TagVarCSV_trackPtRatio_1;
  Float_t TagVarCSV_trackPtRatio_2;
  Float_t TagVarCSV_trackPtRatio_3;

  Float_t TagVarCSV_trackJetDist_0;
  Float_t TagVarCSV_trackJetDist_1;
  Float_t TagVarCSV_trackJetDist_2;
  Float_t TagVarCSV_trackJetDist_3;

  Float_t TagVarCSV_trackDecayLenVal_0;
  Float_t TagVarCSV_trackDecayLenVal_1;
  Float_t TagVarCSV_trackDecayLenVal_2;
  Float_t TagVarCSV_trackDecayLenVal_3;

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

  Int_t HLT_HIPuAK4CaloJet80Eta5p1_v1;
   
  // book variables
  tr->Branch("nref",&nref,"nref/I");
  tr->Branch("run",&run,"run/I");
  tr->Branch("evt",&evt,"evt/I");
  tr->Branch("lumi",&lumi,"lumi/I");

  tr->Branch("pthat",&pthat,"pthat/F");
  tr->Branch("hiBin",&hiBin,"hiBin/I");
  tr->Branch("nColl",&nColl,"nColl/F");
  tr->Branch("weight",&weight,"weight/F");
  tr->Branch("vz",&vz,"vz/F");

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

  if(doJPTagger_){
    tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1/I");



  }
  else{
    //fill inclusive hlts too
    tr->Branch("HLT_HIPuAK4CaloJet80Eta5p1_v1",&HLT_HIPuAK4CaloJet80Eta5p1_v1, "HLT_HIPuAK4CaloJet80Eta5p1_v1/I");
  }

  if(doTagVars_){
    tr->Branch("nIPtrk",&nIPtrk,"nIPtrk/I");
    tr->Branch("nselIPtrk",&nselIPtrk,"nselIPtrk/I");
    tr->Branch("TagVarCSV_trackJetPt",&TagVarCSV_trackJetPt,"TagVarCSV_trackJetPt/F");
    tr->Branch("TagVarCSV_vertexCategory",&TagVarCSV_vertexCategory,"TagVarCSV_vertexCategory/F");
    tr->Branch("TagVarCSV_jetNSecondaryVertices",&TagVarCSV_jetNSecondaryVertices,"TagVarCSV_jetNSecondaryVertices/F");
    tr->Branch("TagVarCSV_trackSumJetEtRatio",&TagVarCSV_trackSumJetEtRatio,"TagVarCSV_trackSumJetEtRatio/F");
    tr->Branch("TagVarCSV_trackSumJetDeltaR",&TagVarCSV_trackSumJetDeltaR,"TagVarCSV_trackSumJetDeltaR/F");
    tr->Branch("TagVarCSV_trackSip3dValAboveCharm",&TagVarCSV_trackSip3dValAboveCharm,"TagVarCSV_trackSip3dValAboveCharm/F");
    tr->Branch("TagVarCSV_trackSip3dSigAboveCharm",&TagVarCSV_trackSip3dSigAboveCharm,"TagVarCSV_trackSip3dSigAboveCharm/F");
    tr->Branch("TagVarCSV_vertexMass",&TagVarCSV_vertexMass,"TagVarCSV_vertexMass/F");
    tr->Branch("TagVarCSV_vertexNTracks",&TagVarCSV_vertexNTracks,"TagVarCSV_vertexNTracks/F");
    tr->Branch("TagVarCSV_vertexEnergyRatio",&TagVarCSV_vertexEnergyRatio,"TagVarCSV_vertexEnergyRatio/F");
    tr->Branch("TagVarCSV_vertexJetDeltaR",&TagVarCSV_vertexJetDeltaR,"TagVarCSV_vertexJetDeltaR/F");
    tr->Branch("TagVarCSV_flightDistance2dVal",&TagVarCSV_flightDistance2dVal,"TagVarCSV_flightDistance2dVal/F");
    tr->Branch("TagVarCSV_flightDistance2dSig",&TagVarCSV_flightDistance2dSig,"TagVarCSV_flightDistance2dSig/F");  
    tr->Branch("TagVarCSV_jetNTracksEtaRel",&TagVarCSV_jetNTracksEtaRel,"TagVarCSV_jetNTracksEtaRel/F");
    tr->Branch("TagVarCSV_jetNTracks",&TagVarCSV_jetNTracks,"TagVarCSV_jetNTracks/F");
    
    tr->Branch("TagVarCSV_trackSip3dSig_0",&TagVarCSV_trackSip3dSig_0,"TagVarCSV_trackSip3dSig_0/F");
    tr->Branch("TagVarCSV_trackSip3dSig_1",&TagVarCSV_trackSip3dSig_1,"TagVarCSV_trackSip3dSig_1/F");
    tr->Branch("TagVarCSV_trackSip3dSig_2",&TagVarCSV_trackSip3dSig_2,"TagVarCSV_trackSip3dSig_2/F");
    tr->Branch("TagVarCSV_trackSip3dSig_3",&TagVarCSV_trackSip3dSig_3,"TagVarCSV_trackSip3dSig_3/F");
    
    tr->Branch("TagVarCSV_trackPtRel_0",&TagVarCSV_trackPtRel_0,"TagVarCSV_trackPtRel_0/F");
    tr->Branch("TagVarCSV_trackPtRel_1",&TagVarCSV_trackPtRel_1,"TagVarCSV_trackPtRel_1/F");
    tr->Branch("TagVarCSV_trackPtRel_2",&TagVarCSV_trackPtRel_2,"TagVarCSV_trackPtRel_2/F");
    tr->Branch("TagVarCSV_trackPtRel_3",&TagVarCSV_trackPtRel_3,"TagVarCSV_trackPtRel_3/F");
    
    tr->Branch("TagVarCSV_trackEtaRel_0",&TagVarCSV_trackEtaRel_0,"TagVarCSV_trackEtaRel_0/F");
    tr->Branch("TagVarCSV_trackEtaRel_1",&TagVarCSV_trackEtaRel_1,"TagVarCSV_trackEtaRel_1/F");
    tr->Branch("TagVarCSV_trackEtaRel_2",&TagVarCSV_trackEtaRel_2,"TagVarCSV_trackEtaRel_2/F");
    tr->Branch("TagVarCSV_trackEtaRel_3",&TagVarCSV_trackEtaRel_3,"TagVarCSV_trackEtaRel_3/F");
    
    tr->Branch("TagVarCSV_trackDeltaR_0",&TagVarCSV_trackDeltaR_0,"TagVarCSV_trackDeltaR_0/F");
    tr->Branch("TagVarCSV_trackDeltaR_1",&TagVarCSV_trackDeltaR_1,"TagVarCSV_trackDeltaR_1/F");
    tr->Branch("TagVarCSV_trackDeltaR_2",&TagVarCSV_trackDeltaR_2,"TagVarCSV_trackDeltaR_2/F");
    tr->Branch("TagVarCSV_trackDeltaR_3",&TagVarCSV_trackDeltaR_3,"TagVarCSV_trackDeltaR_3/F");
    
    tr->Branch("TagVarCSV_trackPtRatio_0",&TagVarCSV_trackPtRatio_0,"TagVarCSV_trackPtRatio_0/F");
    tr->Branch("TagVarCSV_trackPtRatio_1",&TagVarCSV_trackPtRatio_1,"TagVarCSV_trackPtRatio_1/F");
    tr->Branch("TagVarCSV_trackPtRatio_2",&TagVarCSV_trackPtRatio_2,"TagVarCSV_trackPtRatio_2/F");
    tr->Branch("TagVarCSV_trackPtRatio_3",&TagVarCSV_trackPtRatio_3,"TagVarCSV_trackPtRatio_3/F");
    
    tr->Branch("TagVarCSV_trackJetDist_0",&TagVarCSV_trackJetDist_0,"TagVarCSV_trackJetDist_0/F");
    tr->Branch("TagVarCSV_trackJetDist_1",&TagVarCSV_trackJetDist_1,"TagVarCSV_trackJetDist_1/F");
    tr->Branch("TagVarCSV_trackJetDist_2",&TagVarCSV_trackJetDist_2,"TagVarCSV_trackJetDist_2/F");
    tr->Branch("TagVarCSV_trackJetDist_3",&TagVarCSV_trackJetDist_3,"TagVarCSV_trackJetDist_3/F");
    
    tr->Branch("TagVarCSV_trackDecayLenVal_0",&TagVarCSV_trackDecayLenVal_0,"TagVarCSV_trackDecayLenVal_0/F");
    tr->Branch("TagVarCSV_trackDecayLenVal_1",&TagVarCSV_trackDecayLenVal_1,"TagVarCSV_trackDecayLenVal_1/F");
    tr->Branch("TagVarCSV_trackDecayLenVal_2",&TagVarCSV_trackDecayLenVal_2,"TagVarCSV_trackDecayLenVal_2/F");
    tr->Branch("TagVarCSV_trackDecayLenVal_3",&TagVarCSV_trackDecayLenVal_3,"TagVarCSV_trackDecayLenVal_3/F");
    
    tr->Branch("TagVarCSV_trackSip2dSig_0", &TagVarCSV_trackSip2dSig_0, "TagVarCSV_trackSip2dSig_0/F");
    tr->Branch("TagVarCSV_trackSip2dSig_1", &TagVarCSV_trackSip2dSig_1, "TagVarCSV_trackSip2dSig_1/F");
    tr->Branch("TagVarCSV_trackSip2dSig_2", &TagVarCSV_trackSip2dSig_2, "TagVarCSV_trackSip2dSig_2/F");
    tr->Branch("TagVarCSV_trackSip2dSig_3", &TagVarCSV_trackSip2dSig_3, "TagVarCSV_trackSip2dSig_3/F");
  }

  Long64_t nbytes = 0, nb = 0;

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
 
    //noise filters
    bool noiseFiltOk = (globR.collisionEventSelectionAODv2 && globR.phfCoincFilter2Th4 && globR.pclusterCompatibilityFilter && globR.pprimaryVertexFilter && globR.pBeamScrapingFilter && globR.HBHENoiseFilterResultRun2Loose);
    if(!noiseFiltOk) continue;
        
    if(!doJPTagger_){
	HLT_HIPuAK4CaloJet80Eta5p1_v1 = hltR.HLT_HIPuAK4CaloJet80Eta5p1_v1;
	if(!HLT_HIPuAK4CaloJet80Eta5p1_v1) continue;
    }

    if(doJPTagger_){
      HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;
      HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1;
      HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;
      HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1;
      HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;
      HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1;
      HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;
      HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1;

      if(HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1 == 0 && HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1 == 0 && HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1 == 0 && HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1 == 0 && HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1 == 0 && HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1 == 0 && HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1 == 0 && HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1 == 0) continue;
    }

    
    bool vZReq = abs(hiEvtR.vz)<15;
    if(!vZReq) continue;

    hiBin = hiEvtR.hiBin;    
    nColl = findNcoll(hiEvtR.hiBin);    
    weight = hiEvtR.weight;
    vz = hiEvtR.vz;

    run = jetR.run;
    evt = jetR.evt;
    lumi = jetR.lumi;    
    nref=jetR.nref;
    pthat = jetR.pthat;
        
    for(int iJet = 0; iJet < nref; iJet++){

      if(doJPTagger_){
	if(jetR.mupt[iJet]==0.) continue;
      }

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
      
      if(doTagVars_){
	nIPtrk = jetR.nIPtrk[iJet];
	nselIPtrk = jetR.nselIPtrk[iJet];
	TagVarCSV_trackJetPt              = jetR.TagVarCSV_trackJetPt[iJet];
	TagVarCSV_jetNTracks              = jetR.TagVarCSV_jetNTracks[iJet];
	TagVarCSV_jetNTracksEtaRel        = jetR.TagVarCSV_jetNTracksEtaRel[iJet];
	TagVarCSV_trackSumJetEtRatio      = (jetR.TagVarCSV_trackSumJetEtRatio[iJet] < -1000. ? -1. : jetR.TagVarCSV_trackSumJetEtRatio[iJet]);
	TagVarCSV_trackSumJetDeltaR       = (jetR.TagVarCSV_trackSumJetDeltaR[iJet] < -1000. ? -1. : jetR.TagVarCSV_trackSumJetDeltaR[iJet]);
	TagVarCSV_trackSip3dValAboveCharm = (jetR.TagVarCSV_trackSip3dValAboveCharm[iJet] < -1000. ? -99. : jetR.TagVarCSV_trackSip3dValAboveCharm[iJet]);
	TagVarCSV_trackSip3dSigAboveCharm = (jetR.TagVarCSV_trackSip3dSigAboveCharm[iJet] < -1000. ? -99. : jetR.TagVarCSV_trackSip3dSigAboveCharm[iJet]);
	TagVarCSV_vertexCategory          = (jetR.TagVarCSV_vertexCategory[iJet] < -1000. ? -1. : jetR.TagVarCSV_vertexCategory[iJet]);
	TagVarCSV_jetNSecondaryVertices   = jetR.TagVarCSV_jetNSecondaryVertices[iJet];
	TagVarCSV_vertexMass              = (jetR.TagVarCSV_vertexMass[iJet] < -1000. ? -1. : jetR.TagVarCSV_vertexMass[iJet]);
	TagVarCSV_vertexNTracks           = jetR.TagVarCSV_vertexNTracks[iJet];
	TagVarCSV_vertexEnergyRatio       = (jetR.TagVarCSV_vertexEnergyRatio[iJet] < -1000. ? -1. : jetR.TagVarCSV_vertexEnergyRatio[iJet]);
	TagVarCSV_vertexJetDeltaR         = (jetR.TagVarCSV_vertexJetDeltaR[iJet] < -1000. ? -1. : jetR.TagVarCSV_vertexJetDeltaR[iJet]);
	TagVarCSV_flightDistance2dVal     = (jetR.TagVarCSV_flightDistance2dVal[iJet] == -9999. ? -1. : jetR.TagVarCSV_flightDistance2dVal[iJet]);
	TagVarCSV_flightDistance2dSig     = (jetR.TagVarCSV_flightDistance2dSig[iJet] < -1000. ? -1. : jetR.TagVarCSV_flightDistance2dSig[iJet]);
	
	std::vector<float> IP2Ds;
	std::vector<float> IP3Ds;
	std::vector<float> PtRel;
	std::vector<float> DeltaR;
	std::vector<float> PtRatio;
	std::vector<float> JetDist;
	std::vector<float> DecayLenVal;
	
	for (int iTrk = jetR.Jet_nFirstTrkTagVarCSV[iJet]; iTrk < jetR.Jet_nLastTrkTagVarCSV[iJet]; ++iTrk){
	  IP2Ds.push_back( jetR.TagVarCSV_trackSip2dSig[iTrk] );
	  IP3Ds.push_back( jetR.TagVarCSV_trackSip3dSig[iTrk] );
	  PtRel.push_back( jetR.TagVarCSV_trackPtRel[iTrk] );
	  DeltaR.push_back( jetR.TagVarCSV_trackDeltaR[iTrk] );
	  PtRatio.push_back( jetR.TagVarCSV_trackPtRatio[iTrk] );
	  JetDist.push_back( jetR.TagVarCSV_trackJetDistVal[iTrk] );
	  DecayLenVal.push_back( jetR.TagVarCSV_trackDecayLenVal[iTrk] );
      }

	std::vector<float> etaRels;
	for (int iTrk = jetR.Jet_nFirstTrkEtaRelTagVarCSV[iJet]; iTrk < jetR.Jet_nLastTrkEtaRelTagVarCSV[iJet]; ++iTrk){
	  etaRels.push_back( fabs(jetR.TagVarCSV_trackEtaRel[iTrk]) );
	}
	
	
	float numTracks = jetR.TagVarCSV_jetNTracks[iJet];
	float numEtaRelTracks = jetR.TagVarCSV_jetNTracksEtaRel[iJet];
	
	int inumTracks = (int)numTracks;
	int inumEtaRelTracks = (int)numEtaRelTracks;
	
	if(jetR.Jet_nFirstTrkTagVarCSV[iJet] > jetR.Jet_nLastTrkTagVarCSV[iJet]) inumTracks = 0;
	if(jetR.Jet_nFirstTrkEtaRelTagVarCSV[iJet] > jetR.Jet_nLastTrkEtaRelTagVarCSV[iJet]) inumEtaRelTracks = 0;
	
	float dummyTrack = -99.;
	float dummyPtRel = -1.;
	float dummyEtaRel = -1.;
	float dummy = -0.1;
	
	switch(inumTracks){
	  
	case 0:
	  TagVarCSV_trackSip2dSig_0 = dummyTrack;
	  TagVarCSV_trackSip2dSig_1 = dummyTrack;
	  TagVarCSV_trackSip2dSig_2 = dummyTrack;
	  TagVarCSV_trackSip2dSig_3 = dummyTrack;

	  TagVarCSV_trackSip3dSig_0 = dummyTrack;
	  TagVarCSV_trackSip3dSig_1 = dummyTrack;
	  TagVarCSV_trackSip3dSig_2 = dummyTrack;
	  TagVarCSV_trackSip3dSig_3 = dummyTrack;
	  
	  TagVarCSV_trackPtRel_0 = dummyPtRel;
	  TagVarCSV_trackPtRel_1 = dummyPtRel;
	  TagVarCSV_trackPtRel_2 = dummyPtRel;
	  TagVarCSV_trackPtRel_3 = dummyPtRel;

	  TagVarCSV_trackDeltaR_0 = dummy;
	  TagVarCSV_trackDeltaR_1 = dummy;
	  TagVarCSV_trackDeltaR_2 = dummy;
	  TagVarCSV_trackDeltaR_3 = dummy;
	  
	  TagVarCSV_trackPtRatio_0 = dummy;
	  TagVarCSV_trackPtRatio_1 = dummy;
	  TagVarCSV_trackPtRatio_2 = dummy;
	  TagVarCSV_trackPtRatio_3 = dummy;
	  
	  TagVarCSV_trackJetDist_0 = dummy;
	  TagVarCSV_trackJetDist_1 = dummy;
	  TagVarCSV_trackJetDist_2 = dummy;
	  TagVarCSV_trackJetDist_3 = dummy;
	  
	  TagVarCSV_trackDecayLenVal_0 = dummy;
	  TagVarCSV_trackDecayLenVal_1 = dummy;
	  TagVarCSV_trackDecayLenVal_2 = dummy;
	  TagVarCSV_trackDecayLenVal_3 = dummy;
	  break;

	case 1:
	  TagVarCSV_trackSip2dSig_0 = IP2Ds.at(0);
	  TagVarCSV_trackSip2dSig_1 = dummyTrack;
	  TagVarCSV_trackSip2dSig_2 = dummyTrack;
	  TagVarCSV_trackSip2dSig_3 = dummyTrack;
	  
	  TagVarCSV_trackSip3dSig_0 = IP3Ds.at(0);
	  TagVarCSV_trackSip3dSig_1 = dummyTrack;
	  TagVarCSV_trackSip3dSig_2 = dummyTrack;
	  TagVarCSV_trackSip3dSig_3 = dummyTrack;
	  
	  TagVarCSV_trackPtRel_0 = PtRel.at(0);
	  TagVarCSV_trackPtRel_1 = dummyPtRel;
	  TagVarCSV_trackPtRel_2 = dummyPtRel;
	  TagVarCSV_trackPtRel_3 = dummyPtRel;
	  
	  TagVarCSV_trackDeltaR_0 = DeltaR.at(0);
	  TagVarCSV_trackDeltaR_1 = dummy;
	  TagVarCSV_trackDeltaR_2 = dummy;
	  TagVarCSV_trackDeltaR_3 = dummy;
	  
	  TagVarCSV_trackPtRatio_0 = PtRatio.at(0);
	  TagVarCSV_trackPtRatio_1 = dummy;
	  TagVarCSV_trackPtRatio_2 = dummy;
	  TagVarCSV_trackPtRatio_3 = dummy;
	  
	  TagVarCSV_trackJetDist_0 = JetDist.at(0);
	  TagVarCSV_trackJetDist_1 = dummy;
	  TagVarCSV_trackJetDist_2 = dummy;
	  TagVarCSV_trackJetDist_3 = dummy;
	  
	  TagVarCSV_trackDecayLenVal_0 = DecayLenVal.at(0);
	  TagVarCSV_trackDecayLenVal_1 = dummy;
	  TagVarCSV_trackDecayLenVal_2 = dummy;
	  TagVarCSV_trackDecayLenVal_3 = dummy;
	  break;

	case 2:
	  TagVarCSV_trackSip2dSig_0 = IP2Ds.at(0);
	  TagVarCSV_trackSip2dSig_1 = IP2Ds.at(1);
	  TagVarCSV_trackSip2dSig_2 = dummyTrack;
	  TagVarCSV_trackSip2dSig_3 = dummyTrack;

	  TagVarCSV_trackSip3dSig_0 = IP3Ds.at(0);
	  TagVarCSV_trackSip3dSig_1 = IP3Ds.at(1);
	  TagVarCSV_trackSip3dSig_2 = dummyTrack;
	  TagVarCSV_trackSip3dSig_3 = dummyTrack;
	  
	  TagVarCSV_trackPtRel_0 = PtRel.at(0);
	  TagVarCSV_trackPtRel_1 = PtRel.at(1);
	  TagVarCSV_trackPtRel_2 = dummyPtRel;
	  TagVarCSV_trackPtRel_3 = dummyPtRel;
	  
	  TagVarCSV_trackDeltaR_0 = DeltaR.at(0);
	  TagVarCSV_trackDeltaR_1 = DeltaR.at(1);
	  TagVarCSV_trackDeltaR_2 = dummy;
	  TagVarCSV_trackDeltaR_3 = dummy;
	  
	  TagVarCSV_trackPtRatio_0 = PtRatio.at(0);
	  TagVarCSV_trackPtRatio_1 = PtRatio.at(1);
	  TagVarCSV_trackPtRatio_2 = dummy;
	  TagVarCSV_trackPtRatio_3 = dummy;
	  
	  TagVarCSV_trackJetDist_0 = JetDist.at(0);
	  TagVarCSV_trackJetDist_1 = JetDist.at(1);
	  TagVarCSV_trackJetDist_2 = dummy;
	  TagVarCSV_trackJetDist_3 = dummy;
	  TagVarCSV_trackDecayLenVal_0 = DecayLenVal.at(0);
	  TagVarCSV_trackDecayLenVal_1 = DecayLenVal.at(1);
	  TagVarCSV_trackDecayLenVal_2 = dummy;
	  TagVarCSV_trackDecayLenVal_3 = dummy;
	  break;
	  
	case 3:
	  TagVarCSV_trackSip2dSig_0 = IP2Ds.at(0);
	  TagVarCSV_trackSip2dSig_1 = IP2Ds.at(1);
	  TagVarCSV_trackSip2dSig_2 = IP2Ds.at(2);
	  TagVarCSV_trackSip2dSig_3 = dummyTrack;
	  
	  TagVarCSV_trackSip3dSig_0 = IP3Ds.at(0);
	  TagVarCSV_trackSip3dSig_1 = IP3Ds.at(1);
	  TagVarCSV_trackSip3dSig_2 = IP3Ds.at(2);
	  TagVarCSV_trackSip3dSig_3 = dummyTrack;
	  
	  TagVarCSV_trackPtRel_0 = PtRel.at(0);
	  TagVarCSV_trackPtRel_1 = PtRel.at(1);
	  TagVarCSV_trackPtRel_2 = PtRel.at(2);
	  TagVarCSV_trackPtRel_3 = dummyPtRel;
	  
	  TagVarCSV_trackDeltaR_0 = DeltaR.at(0);
	  TagVarCSV_trackDeltaR_1 = DeltaR.at(1);
	  TagVarCSV_trackDeltaR_2 = DeltaR.at(2);
	  TagVarCSV_trackDeltaR_3 = dummy;
	  
	  TagVarCSV_trackPtRatio_0 = PtRatio.at(0);
	  TagVarCSV_trackPtRatio_1 = PtRatio.at(1);
	  TagVarCSV_trackPtRatio_2 = PtRatio.at(2);
	  TagVarCSV_trackPtRatio_3 = dummy;
	  
	  TagVarCSV_trackJetDist_0 = JetDist.at(0);
	  TagVarCSV_trackJetDist_1 = JetDist.at(1);
	  TagVarCSV_trackJetDist_2 = JetDist.at(2);
	  TagVarCSV_trackJetDist_3 = dummy;

	  TagVarCSV_trackDecayLenVal_0 = DecayLenVal.at(0);
	  TagVarCSV_trackDecayLenVal_1 = DecayLenVal.at(1);
	  TagVarCSV_trackDecayLenVal_2 = DecayLenVal.at(2);
	  TagVarCSV_trackDecayLenVal_3 = dummy;
	  break;
	  
	default:
	  
	  TagVarCSV_trackSip2dSig_0 = IP2Ds.at(0);
	  TagVarCSV_trackSip2dSig_1 = IP2Ds.at(1);
	  TagVarCSV_trackSip2dSig_2 = IP2Ds.at(2);
	  TagVarCSV_trackSip2dSig_3 = IP2Ds.at(3);
	  
	  TagVarCSV_trackSip3dSig_0 = IP3Ds.at(0);
	  TagVarCSV_trackSip3dSig_1 = IP3Ds.at(1);
	  TagVarCSV_trackSip3dSig_2 = IP3Ds.at(2);
	  TagVarCSV_trackSip3dSig_3 = IP3Ds.at(3);
	  
	  TagVarCSV_trackPtRel_0 = PtRel.at(0);
	  TagVarCSV_trackPtRel_1 = PtRel.at(1);
	  TagVarCSV_trackPtRel_2 = PtRel.at(2);
	  TagVarCSV_trackPtRel_3 = PtRel.at(3);
	  
	  TagVarCSV_trackDeltaR_0 = DeltaR.at(0);
	  TagVarCSV_trackDeltaR_1 = DeltaR.at(1);
	  TagVarCSV_trackDeltaR_2 = DeltaR.at(2);
	  TagVarCSV_trackDeltaR_3 = DeltaR.at(3);
	  
	  TagVarCSV_trackPtRatio_0 = PtRatio.at(0);
	  TagVarCSV_trackPtRatio_1 = PtRatio.at(1);
	  TagVarCSV_trackPtRatio_2 = PtRatio.at(2);
	  TagVarCSV_trackPtRatio_3 = PtRatio.at(3);
	  
	  TagVarCSV_trackJetDist_0 = JetDist.at(0);
	  TagVarCSV_trackJetDist_1 = JetDist.at(1);
	  TagVarCSV_trackJetDist_2 = JetDist.at(2);
	  TagVarCSV_trackJetDist_3 = JetDist.at(3);
	  
	  TagVarCSV_trackDecayLenVal_0 = DecayLenVal.at(0);
	  TagVarCSV_trackDecayLenVal_1 = DecayLenVal.at(1);
	  TagVarCSV_trackDecayLenVal_2 = DecayLenVal.at(2);
	  TagVarCSV_trackDecayLenVal_3 = DecayLenVal.at(3);

	  switch(inumEtaRelTracks){

	  case 0:
	    TagVarCSV_trackEtaRel_0 = dummyEtaRel;
	    TagVarCSV_trackEtaRel_1 = dummyEtaRel;
	    TagVarCSV_trackEtaRel_2 = dummyEtaRel;
	    TagVarCSV_trackEtaRel_3 = dummyEtaRel;
	    break;
	    
	  case 1:
	    TagVarCSV_trackEtaRel_0 = etaRels.at(0);
	    TagVarCSV_trackEtaRel_1 = dummyEtaRel;
	    TagVarCSV_trackEtaRel_2 = dummyEtaRel;
	    TagVarCSV_trackEtaRel_3 = dummyEtaRel;
	    break;
	  
	  case 2:
	    TagVarCSV_trackEtaRel_0 = etaRels.at(0);
	    TagVarCSV_trackEtaRel_1 = etaRels.at(1);
	    TagVarCSV_trackEtaRel_2 = dummyEtaRel;
	    TagVarCSV_trackEtaRel_3 = dummyEtaRel;
	    break;
	    
	  case 3:
	    TagVarCSV_trackEtaRel_0 = etaRels.at(0);
	    TagVarCSV_trackEtaRel_1 = etaRels.at(1);
	    TagVarCSV_trackEtaRel_2 = etaRels.at(2);
	    TagVarCSV_trackEtaRel_3 = dummyEtaRel;
	    break;
	    
	  default:
	    TagVarCSV_trackEtaRel_0 = etaRels.at(0);
	    TagVarCSV_trackEtaRel_1 = etaRels.at(1);
	    TagVarCSV_trackEtaRel_2 = etaRels.at(2);
	    TagVarCSV_trackEtaRel_3 = etaRels.at(3);
	  }
	  
	}
      }

	tr->Fill();
      
    } // jet loop
    
  } // event loop

   fout->Write();
   fout->Close();

}

