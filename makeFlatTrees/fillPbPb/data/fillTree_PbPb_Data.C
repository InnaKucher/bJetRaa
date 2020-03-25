#include "jetTreeReaderPbPbDATA.C"
#include "globalTreeReaderPbPbDATA.C"
#include "hiEvtTreeReaderPbPbDATA.C"
#include "hltTreeReaderPbPbDATA.C"
#include "jetObjTreeReaderPbPbDATA.C"
#include "mujetObjTreeReaderPbPbDATA.C"

#define jetTreeReaderPbPb jetTreeReaderPbPbDATA
#define hltTreeReaderPbPb   hltTreeReaderPbPbDATA
#define globalTreeReaderPbPb globalTreeReaderPbPbDATA
#define hiEvtTreeReaderPbPb hiEvtTreeReaderPbPbDATA
#define hltTreeReaderPbPb hltTreeReaderPbPbDATA
#define jetObjTreeReaderPbPb jetObjTreeReaderPbPbDATA
#define mujetObjTreeReaderPbPb mujetObjTreeReaderPbPbDATA

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

void fillTree_PbPb_Data(int doJPTagger_=0, int doLowerPD_=0, int doTagVars_=0) {

  if(doJPTagger_) {
    doLowerPD_ = 0;
    doTagVars_=0;
  }

  TChain *tchGlob = new TChain("skimanalysis/HltTree");
  TChain *tchJet = new TChain("akFlowPuCs4PFJetAnalyzer/t");
  TChain *tchHiEvt = new TChain("hiEvtAnalyzer/HiTree");
  TChain *tchHLT = new TChain("hltanalysis/HltTree");

  //declare everything, but fill appropriate chains
  //for inclusive jets
  TChain *hltobj_jet40 = new TChain("hltobject/HLT_HIPuAK4CaloJet40Eta5p1_v");
  TChain *hltobj_jet60 = new TChain("hltobject/HLT_HIPuAK4CaloJet60Eta5p1_v");
  TChain *hltobj_jet80 = new TChain("hltobject/HLT_HIPuAK4CaloJet80Eta5p1_v");
  TChain *hltobj_jet100 = new TChain("hltobject/HLT_HIPuAK4CaloJet100Eta5p1_v");

  //for mu+jets
  TChain *hltobj_mu3jet40 = new TChain("hltobject/HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v");
  TChain *hltobj_mu5jet40 = new TChain("hltobject/HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v");
  TChain *hltobj_mu3jet60 = new TChain("hltobject/HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v");
  TChain *hltobj_mu5jet60 = new TChain("hltobject/HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v");
  TChain *hltobj_mu3jet80 = new TChain("hltobject/HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v");
  TChain *hltobj_mu5jet80 = new TChain("hltobject/HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v");
  TChain *hltobj_mu3jet100 = new TChain("hltobject/HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v");
  TChain *hltobj_mu5jet100 = new TChain("hltobject/HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v");

  ifstream myReadFile;

  if(doJPTagger_){
    myReadFile.open("HISingleMuon_MuJetFiltered.txt");
  }
  else{
    if(doLowerPD_){
      myReadFile.open("HIHardProbes_Jet40Jet60.txt");
    }
    else{
      myReadFile.open("HIHardProbes_Jet80Jet100.txt");
    }
  }
  string path = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/";
  char output[800];
  
  if(myReadFile.is_open()) {
    while (!myReadFile.eof()) {
      myReadFile >> output;
      if (myReadFile.eof()) break;
      
      stringstream ss;
      string s_output = "";
      string finalPath = "";
      ss << output;
      ss >> s_output;
      
      finalPath += path;
      finalPath += s_output;
      cout << "path = " << finalPath << endl;
      tchJet->Add(finalPath.c_str());
      tchGlob->Add(finalPath.c_str());
      tchHiEvt->Add(finalPath.c_str());
      tchHLT->Add(finalPath.c_str());
      if(doJPTagger_){
	hltobj_mu3jet40->Add(finalPath.c_str());
	hltobj_mu5jet40->Add(finalPath.c_str());
	hltobj_mu3jet60->Add(finalPath.c_str());
	hltobj_mu5jet60->Add(finalPath.c_str());
	hltobj_mu3jet80->Add(finalPath.c_str());
	hltobj_mu5jet80->Add(finalPath.c_str());
	hltobj_mu3jet100->Add(finalPath.c_str());
	hltobj_mu5jet100->Add(finalPath.c_str());
      }
      else{
	hltobj_jet40->Add(finalPath.c_str());
	hltobj_jet60->Add(finalPath.c_str());
	hltobj_jet80->Add(finalPath.c_str());
	hltobj_jet100->Add(finalPath.c_str());
      }

    }
  }
  
  myReadFile.close();
  
  globalTreeReaderPbPb globR(tchGlob);
  jetTreeReaderPbPb jetR(tchJet);
  hiEvtTreeReaderPbPb hiEvtR(tchHiEvt);
  hltTreeReaderPbPb hltR(tchHLT);

  jetObjTreeReaderPbPb jet40R(hltobj_jet40);
  jetObjTreeReaderPbPb jet60R(hltobj_jet60);
  jetObjTreeReaderPbPb jet80R(hltobj_jet80);
  jetObjTreeReaderPbPb jet100R(hltobj_jet100);

  mujetObjTreeReaderPbPb mu3jet40R(hltobj_mu3jet40);
  mujetObjTreeReaderPbPb mu5jet40R(hltobj_mu5jet40);
  mujetObjTreeReaderPbPb mu3jet60R(hltobj_mu3jet60);
  mujetObjTreeReaderPbPb mu5jet60R(hltobj_mu5jet60);
  mujetObjTreeReaderPbPb mu3jet80R(hltobj_mu3jet80);
  mujetObjTreeReaderPbPb mu5jet80R(hltobj_mu5jet80);
  mujetObjTreeReaderPbPb mu3jet100R(hltobj_mu3jet100);
  mujetObjTreeReaderPbPb mu5jet100R(hltobj_mu5jet100);


  //set branch status
  jetR.fChain->SetBranchStatus("*",0);
  hiEvtR.fChain->SetBranchStatus("*",0);
  globR.fChain->SetBranchStatus("*",0);  
  hltR.fChain->SetBranchStatus("*",0);

  if(doJPTagger_){
    mu3jet40R.fChain->SetBranchStatus("*",0);
    mu5jet40R.fChain->SetBranchStatus("*",0);
    mu3jet60R.fChain->SetBranchStatus("*",0);
    mu5jet60R.fChain->SetBranchStatus("*",0);
    mu3jet80R.fChain->SetBranchStatus("*",0);
    mu5jet80R.fChain->SetBranchStatus("*",0);
    mu3jet100R.fChain->SetBranchStatus("*",0);
    mu5jet100R.fChain->SetBranchStatus("*",0);
  }
  else{
    jet40R.fChain->SetBranchStatus("*",0);
    jet60R.fChain->SetBranchStatus("*",0);
    jet80R.fChain->SetBranchStatus("*",0);
    jet100R.fChain->SetBranchStatus("*",0);
  }


  jetR.fChain->SetBranchStatus("run",1);
  jetR.fChain->SetBranchStatus("evt",1);
  jetR.fChain->SetBranchStatus("lumi",1);
  jetR.fChain->SetBranchStatus("nref",1);
  jetR.fChain->SetBranchStatus("rawpt",1);
  jetR.fChain->SetBranchStatus("jtpt",1);
  jetR.fChain->SetBranchStatus("jteta",1);
  jetR.fChain->SetBranchStatus("jtphi",1);
  jetR.fChain->SetBranchStatus("discr_csvV2",1);
  jetR.fChain->SetBranchStatus("pdiscr_csvV2",1);
  jetR.fChain->SetBranchStatus("ndiscr_csvV2",1);
  jetR.fChain->SetBranchStatus("discr_prob",1);  
  jetR.fChain->SetBranchStatus("nIPtrk",1);
  jetR.fChain->SetBranchStatus("nselIPtrk",1);
  jetR.fChain->SetBranchStatus("mupt",1);

  jetR.fChain->SetBranchStatus("TagVarCSV_trackJetPt",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexCategory",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_jetNSecondaryVertices",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSumJetEtRatio",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSumJetDeltaR",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip2dValAboveCharm",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip2dSigAboveCharm",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip3dValAboveCharm",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip3dSigAboveCharm",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexMass",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexNTracks",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexEnergyRatio",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_vertexJetDeltaR",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_flightDistance2dVal",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_flightDistance2dSig",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_flightDistance3dVal",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_flightDistance3dSig",doTagVars_);
  jetR.fChain->SetBranchStatus("nTrkTagVarCSV",doTagVars_);
  jetR.fChain->SetBranchStatus("nTrkEtaRelTagVarCSV",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_jetNTracksEtaRel",doTagVars_);
  jetR.fChain->SetBranchStatus("Jet_nFirstTrkTagVarCSV",doTagVars_);
  jetR.fChain->SetBranchStatus("Jet_nLastTrkTagVarCSV",doTagVars_);
  jetR.fChain->SetBranchStatus("Jet_nFirstTrkEtaRelTagVarCSV",doTagVars_);
  jetR.fChain->SetBranchStatus("Jet_nLastTrkEtaRelTagVarCSV",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_jetNTracks",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackMomentum",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackEta",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackPtRel",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackPPar",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackDeltaR",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackPtRatio",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackPParRatio",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip2dVal",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip2dSig",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip3dVal",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackSip3dSig",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackDecayLenVal",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackJetDistVal",doTagVars_);
  jetR.fChain->SetBranchStatus("TagVarCSV_trackEtaRel",doTagVars_);

  globR.fChain->SetBranchStatus("phfCoincFilter2Th4",1);
  globR.fChain->SetBranchStatus("pclusterCompatibilityFilter",1);
  globR.fChain->SetBranchStatus("pprimaryVertexFilter",1);
  globR.fChain->SetBranchStatus("pBeamScrapingFilter",1);
  globR.fChain->SetBranchStatus("collisionEventSelectionAODv2",1);
  globR.fChain->SetBranchStatus("HBHENoiseFilterResultRun2Loose",1);

  hiEvtR.fChain->SetBranchStatus("hiBin",1);
  hiEvtR.fChain->SetBranchStatus("vz",1);
  hiEvtR.fChain->SetBranchStatus("hiHF",1);
     
  if (jetR.fChain == 0) return;
  if (globR.fChain == 0) return;
  if (hiEvtR.fChain == 0) return;

  if(doJPTagger_){
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl",1);

    mu3jet40R.fChain->SetBranchStatus("pt",1);
    mu3jet60R.fChain->SetBranchStatus("pt",1);
    mu3jet80R.fChain->SetBranchStatus("pt",1);
    mu3jet100R.fChain->SetBranchStatus("pt",1);

    mu5jet40R.fChain->SetBranchStatus("pt",1);
    mu5jet60R.fChain->SetBranchStatus("pt",1);
    mu5jet80R.fChain->SetBranchStatus("pt",1);
    mu5jet100R.fChain->SetBranchStatus("pt",1);

    mu3jet40R.fChain->SetBranchStatus("eta",1);
    mu3jet60R.fChain->SetBranchStatus("eta",1);
    mu3jet80R.fChain->SetBranchStatus("eta",1);
    mu3jet100R.fChain->SetBranchStatus("eta",1);

    mu5jet40R.fChain->SetBranchStatus("eta",1);
    mu5jet60R.fChain->SetBranchStatus("eta",1);
    mu5jet80R.fChain->SetBranchStatus("eta",1);
    mu5jet100R.fChain->SetBranchStatus("eta",1);

    mu3jet40R.fChain->SetBranchStatus("phi",1);
    mu3jet60R.fChain->SetBranchStatus("phi",1);
    mu3jet80R.fChain->SetBranchStatus("phi",1);
    mu3jet100R.fChain->SetBranchStatus("phi",1);

    mu5jet40R.fChain->SetBranchStatus("phi",1);
    mu5jet60R.fChain->SetBranchStatus("phi",1);
    mu5jet80R.fChain->SetBranchStatus("phi",1);
    mu5jet100R.fChain->SetBranchStatus("phi",1);

    mu3jet40R.fChain->SetBranchStatus("TriggerObjID",1);
    mu3jet60R.fChain->SetBranchStatus("TriggerObjID",1);
    mu3jet80R.fChain->SetBranchStatus("TriggerObjID",1);
    mu3jet100R.fChain->SetBranchStatus("TriggerObjID",1);

    mu5jet40R.fChain->SetBranchStatus("TriggerObjID",1);
    mu5jet60R.fChain->SetBranchStatus("TriggerObjID",1);
    mu5jet80R.fChain->SetBranchStatus("TriggerObjID",1);
    mu5jet100R.fChain->SetBranchStatus("TriggerObjID",1);

  }
  else{
    hltR.fChain->SetBranchStatus("HLT_HIPuAK4CaloJet40Eta5p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIPuAK4CaloJet60Eta5p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIPuAK4CaloJet80Eta5p1_v1",1);
    hltR.fChain->SetBranchStatus("HLT_HIPuAK4CaloJet100Eta5p1_v1",1);
  }
  Long64_t nentries = jetR.fChain->GetEntries();
  Long64_t nentries3 = globR.fChain->GetEntries();

  if (nentries != nentries3) return;

  double num80 = 0.;
  double den80 = 0.;
  double PS80 = 1.;

  double num60 = 0.;
  double den60 = 0.;
  double PS60 = 1.;

  double num40 = 0.;
  double den40 = 0.;
  double PS40 = 1.;

  if(doJPTagger_){
    num60 = hltR.fChain->GetEntries("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1==1 || HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1==1");
    den60 = hltR.fChain->GetEntries("(HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1==1 || HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1==1) && (HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1==1 || HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1==1)");
    PS60 = num60/den60;

    num40 = hltR.fChain->GetEntries("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1==1 || HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1==1");
    den40 = hltR.fChain->GetEntries("(HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1==1 || HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1==1) && (HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1==1 || HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1==1)");
    PS40 = num40/den40;
    
    cout << "PS60 = " << PS60 << endl;
    cout << "PS40 = " << PS40 << endl;
  }
  else{
    //fill the PS here for inclusive jets too

    //PS make sense for HardProbes PD
    if(!doLowerPD_){
      num80 = hltR.fChain->GetEntries("HLT_HIPuAK4CaloJet80Eta5p1_v1");
      den80 = hltR.fChain->GetEntries("HLT_HIPuAK4CaloJet80Eta5p1_v1 && HLT_HIPuAK4CaloJet100Eta5p1_v1");
      PS80 = num80/den80;
    }

    //PS make sense for HardProbesLowerPD
    if(doLowerPD_){
      num60 = hltR.fChain->GetEntries("HLT_HIPuAK4CaloJet60Eta5p1_v1");
      den60 = hltR.fChain->GetEntries("HLT_HIPuAK4CaloJet60Eta5p1_v1 && HLT_HIPuAK4CaloJet100Eta5p1_v1");
      PS60 = num60/den60;

      num40 = hltR.fChain->GetEntries("HLT_HIPuAK4CaloJet40Eta5p1_v1");
      den40 = hltR.fChain->GetEntries("HLT_HIPuAK4CaloJet40Eta5p1_v1 && HLT_HIPuAK4CaloJet100Eta5p1_v1");
      PS40 = num40/den40;
    }

    cout << "PS80 = " << PS80 << endl;
    cout << "PS60 = " << PS60 << endl;
    cout << "PS40 = " << PS40 << endl;
  }

  string outFileName = "";

  if(doJPTagger_){
    outFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_JP_PbPb_DATA_HISingleMuonPD.root";

  }
  else{
    if(doLowerPD_){
      outFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_CSVv2_PbPb_DATA_HIHardProbesLowerPD.root";
    }
    else{
      outFileName = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/jetTree_CSVv2_PbPb_DATA_HIHardProbesPD.root";
    }
  }
  
  TFile *fout = new TFile(outFileName.c_str(),"RECREATE");
  // flat jet tree
  TDirectory *tdir = fout->mkdir("jetTree");
  tdir->cd();
  string tree_description = "";
  if(doJPTagger_){
    tree_description = "jet tree for LT method";
  }
  else{
    tree_description = "inclusive jet tree";
  }
  TTree *tr = new TTree("tree",tree_description.c_str());

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
  Int_t           nselIPtrk;
  Int_t           nIPtrk;

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

  Int_t           hiBin;
  Float_t         vz;
  Float_t         hiHF;

  //online vars

  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1;
  Int_t HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;
  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1;
  Int_t HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;
  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1;
  Int_t HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;
  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1;
  Int_t HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;
  Int_t HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl;

  Float_t mupt;
  Float_t weight;
  Int_t nTP;
  vector<float> *onlinePt =0;
  vector<float> *onlineEta=0;
  vector<float> *onlinePhi=0;

   
  // book variables
  tr->Branch("nref",&nref,"nref/I");
  tr->Branch("run",&run,"run/I");
  tr->Branch("evt",&evt,"evt/I");
  tr->Branch("lumi",&lumi,"lumi/I");

  tr->Branch("hiBin",&hiBin,"hiBin/I");
  tr->Branch("vz",&vz,"vz/F");
  tr->Branch("hiHF",&hiHF,"hiHF/F");

  tr->Branch("rawpt",&rawpt,"rawpt/F");
  tr->Branch("jtpt",&jtpt,"jtpt/F");
  tr->Branch("jteta",&jteta,"jteta/F");
  tr->Branch("jtphi",&jtphi,"jtphi/F");
  tr->Branch("discr_csvV2",&discr_csvV2,"discr_csvV2/F");
  tr->Branch("pdiscr_csvV2",&pdiscr_csvV2,"pdiscr_csvV2/F");
  tr->Branch("ndiscr_csvV2",&ndiscr_csvV2,"ndiscr_csvV2/F");
  tr->Branch("discr_prob",&discr_prob,"discr_prob/F");

  if(doTagVars_){

    tr->Branch("nselIPtrk",&nselIPtrk,"nselIPtrk/I");
    tr->Branch("nIPtrk",&nIPtrk,"nIPtrk/I");

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

  if(doJPTagger_){
    tr->Branch("mupt",&mupt,"mupt/F");
    tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1",&HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1,"HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1/I");
    tr->Branch("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl",&HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl,"HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl/I");
    tr->Branch("nTP",&nTP,"nTP/I");
    tr->Branch("onlinePt",&onlinePt);
    tr->Branch("onlineEta",&onlineEta);
    tr->Branch("onlinePhi",&onlinePhi);
    tr->Branch("weight",&weight,"weight/F");
  }

  Long64_t nbytes = 0, nb = 0;

  int count = 0;

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
    if (ientry_hlt < 0) break;

    if(doJPTagger_){
      Long64_t ientry_mu3jet40 = mu3jet40R.LoadTree(jentry);
      if (ientry_mu3jet40 < 0) break;
      Long64_t ientry_mu5jet40 = mu5jet40R.LoadTree(jentry);
      if (ientry_mu5jet40 < 0) break;
      Long64_t ientry_mu3jet60 = mu3jet60R.LoadTree(jentry);
      if (ientry_mu3jet60 < 0) break;
      Long64_t ientry_mu5jet60 = mu5jet60R.LoadTree(jentry);
      if (ientry_mu5jet60 < 0) break;
      Long64_t ientry_mu3jet80 = mu3jet80R.LoadTree(jentry);
      if (ientry_mu3jet80 < 0) break;
      Long64_t ientry_mu5jet80 = mu5jet80R.LoadTree(jentry);
      if (ientry_mu5jet80 < 0) break;
      Long64_t ientry_mu3jet100 = mu3jet100R.LoadTree(jentry);
      if (ientry_mu3jet100 < 0) break;
      Long64_t ientry_mu5jet100 = mu5jet100R.LoadTree(jentry);
      if (ientry_mu5jet100 < 0) break;
    }
    else{
      Long64_t ientry_jet40 = jet40R.LoadTree(jentry);
      if (ientry_jet40 < 0) break;
      Long64_t ientry_jet60 = jet60R.LoadTree(jentry);
      if (ientry_jet60 < 0) break;
      Long64_t ientry_jet80 = jet80R.LoadTree(jentry);
      if (ientry_jet80 < 0) break;
      Long64_t ientry_jet100 = jet100R.LoadTree(jentry);
      if (ientry_jet100 < 0) break;
    }
    
    // basic cuts
    jetR.b_nref->GetEntry(ientry_jet);
    
    //don't remove this! 
    nb = jetR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = globR.fChain->GetEntry(jentry);   nbytes += nb;
    nb = hiEvtR.fChain->GetEntry(jentry);  nbytes += nb;
    nb = hltR.fChain->GetEntry(jentry);  nbytes += nb;
    if(doJPTagger_){
      nb = mu3jet40R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = mu5jet40R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = mu3jet60R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = mu5jet60R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = mu3jet80R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = mu5jet80R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = mu3jet100R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = mu5jet100R.fChain->GetEntry(jentry);  nbytes += nb;
    }
    else{
      nb = jet40R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = jet60R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = jet80R.fChain->GetEntry(jentry);  nbytes += nb;
      nb = jet100R.fChain->GetEntry(jentry);  nbytes += nb;
    }

    //noise filters
    bool noiseFiltOk = (globR.collisionEventSelectionAODv2 && globR.phfCoincFilter2Th4 && globR.pclusterCompatibilityFilter && globR.pprimaryVertexFilter && globR.pBeamScrapingFilter && globR.HBHENoiseFilterResultRun2Loose);
    if(!noiseFiltOk) continue;
        
    bool vZReq = fabs(hiEvtR.vz)<15.;
    if(!vZReq) continue;

    hiBin = hiEvtR.hiBin;    
    vz = hiEvtR.vz;
    hiHF = hiEvtR.hiHF;

    run = jetR.run;
    evt = jetR.evt;
    lumi = jetR.lumi;    
    nref=jetR.nref;

    if(doJPTagger_){

      if(hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl>1) continue;
      if(hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1 == 0 && hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1 == 0 && hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1 == 0 && hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1 == 0 && hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1 == 0 && hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1 == 0 && hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1 == 0 && hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1 == 0) continue;

      HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;
      HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1;
      HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;
      HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1;
      HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;
      HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1;
      HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1 = hltR.HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;
      HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1 = hltR.HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1;

      weight = 0.;

      onlinePt->clear();
      onlineEta->clear();
      onlinePhi->clear();

      if(mu5jet100R.pt->size() > 0 || mu3jet100R.pt->size() > 0){
	weight = 1.0;
	if(mu5jet100R.pt->size() > 0){
	  for(uint i = 0; i<mu5jet100R.pt->size(); i++){
	    if(mu5jet100R.TriggerObjID->at(i) == 0) {
	      onlinePt->push_back(mu5jet100R.pt->at(i));
	      onlineEta->push_back(mu5jet100R.eta->at(i));
	      onlinePhi->push_back(mu5jet100R.phi->at(i));
	    }
	  }
	}
	else if(mu3jet100R.pt->size() > 0){
	  for(uint i = 0; i<mu3jet100R.pt->size(); i++){
	    if(mu3jet100R.TriggerObjID->at(i) == 0) {
	      onlinePt->push_back(mu3jet100R.pt->at(i));
	      onlineEta->push_back(mu3jet100R.eta->at(i));
	      onlinePhi->push_back(mu3jet100R.phi->at(i));
	    }
	  }
	}
      }
      else{
	if(mu5jet80R.pt->size() > 0 || mu3jet80R.pt->size() > 0){
	  weight = 1.0;
	  if(mu5jet80R.pt->size() > 0){
	    for(uint i = 0; i<mu5jet80R.pt->size(); i++){
	      if(mu5jet80R.TriggerObjID->at(i) == 0) {
		onlinePt->push_back(mu5jet80R.pt->at(i));
		onlineEta->push_back(mu5jet80R.eta->at(i));
		onlinePhi->push_back(mu5jet80R.phi->at(i));
	      }
	    }
	  }
	  else if(mu3jet80R.pt->size() > 0){
	    for(uint i = 0; i<mu3jet80R.pt->size(); i++){
	      if(mu3jet80R.TriggerObjID->at(i) == 0) {
		onlinePt->push_back(mu3jet80R.pt->at(i));
		onlineEta->push_back(mu3jet80R.eta->at(i));
		onlinePhi->push_back(mu3jet80R.phi->at(i));
	      }
	    }
	  }
	}
	else{
	  if(mu5jet60R.pt->size() > 0 || mu3jet60R.pt->size() > 0){
	    weight = 1.;
	    //weight = PS60;
	    if(mu5jet60R.pt->size() > 0){
	      for(uint i = 0; i<mu5jet60R.pt->size(); i++){
		if(mu5jet60R.TriggerObjID->at(i) == 0) {
		  onlinePt->push_back(mu5jet60R.pt->at(i));
		  onlineEta->push_back(mu5jet60R.eta->at(i));
		  onlinePhi->push_back(mu5jet60R.phi->at(i));
		}
	      }
	    }
	    else if(mu3jet60R.pt->size() > 0){
	      for(uint i = 0; i<mu3jet60R.pt->size(); i++){
		if(mu3jet60R.TriggerObjID->at(i) == 0) {
		  onlinePt->push_back(mu3jet60R.pt->at(i));
		  onlineEta->push_back(mu3jet60R.eta->at(i));
		  onlinePhi->push_back(mu3jet60R.phi->at(i));
		}
	      }
		
	    }
	  }
	  else{
	    if(mu5jet40R.pt->size() > 0 || mu3jet40R.pt->size() > 0){
	      weight = PS40;
	      
	      if(mu5jet40R.pt->size() > 0){
		for(uint i = 0; i<mu5jet40R.pt->size(); i++){
		  if(mu5jet40R.TriggerObjID->at(i) == 0) {
		    onlinePt->push_back(mu5jet40R.pt->at(i));
		    onlineEta->push_back(mu5jet40R.eta->at(i));
		    onlinePhi->push_back(mu5jet40R.phi->at(i));
		    }	  
		}
	      }
	      else if(mu3jet40R.pt->size() > 0){
		for(uint i = 0; i<mu3jet40R.pt->size(); i++){
		  if(mu3jet40R.TriggerObjID->at(i) == 0) {
		    onlinePt->push_back(mu3jet40R.pt->at(i));
		    onlineEta->push_back(mu3jet40R.eta->at(i));
		    onlinePhi->push_back(mu3jet40R.phi->at(i));
		  }
		}
	      }
	    }
	  }
	}
      }
      nTP = onlinePt->size();
    }

    for(int iJet = 0; iJet < nref; iJet++){

      //save the jets with muons only
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
      discr_csvV2 = jetR.discr_csvV2[iJet];
      pdiscr_csvV2 = jetR.pdiscr_csvV2[iJet];
      ndiscr_csvV2 = jetR.ndiscr_csvV2[iJet];
      discr_prob = jetR.discr_prob[iJet];
      
      if(doTagVars_){

	nselIPtrk = jetR.nselIPtrk[iJet];
	nIPtrk = jetR.nIPtrk[iJet];
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
	  //cout << "TagVarCSV_trackDecayLenVal_2 = " << TagVarCSV_trackDecayLenVal_2 << endl;
	  TagVarCSV_trackDecayLenVal_3 = dummy;
	  //cout << "trackSip2dSig after case 3" << endl;
	  break;
	  
	default:
	  //cout <<"trackSip2dSig in the default?" << endl;
	  
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
	    //cout <<"in inumEtaRelTracks" << endl;
	    
	  case 0:
	    //cout <<"case 0" << endl;
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
	    //cout << "TagVarCSV_trackEtaRel_2 = " << TagVarCSV_trackEtaRel_2 << endl;
	    TagVarCSV_trackEtaRel_3 = dummyEtaRel;
	    break;
	    
	  default:
	    //cout << "in trackEtaRel default?" << endl;
	    TagVarCSV_trackEtaRel_0 = etaRels.at(0);
	    TagVarCSV_trackEtaRel_1 = etaRels.at(1);
	    TagVarCSV_trackEtaRel_2 = etaRels.at(2);
	    TagVarCSV_trackEtaRel_3 = etaRels.at(3);
	  }
	  
	}
      }

      //


      tr->Fill();
      count++;      

    } // jet loop
    
  } // event loop

  fout->Write();
  fout->Close();

  cout << "number of events = " << nentries << endl;
  cout << "number of fillings = " << count << endl;  

}

