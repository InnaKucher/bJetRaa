//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Feb 24 10:32:10 2020 by ROOT version 6.18/04
// from TTree t/ Jet Analysis Tree
// found on file: /eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/DiJet_pThat-15_TuneCP5_HydjetDrumMB_5p02TeV_Pythia8_PbPbCSVv2TaggersFixed_CleanJets_merged/DiJet_pThat-15_TuneCP5_HydjetDrumMB_5p02TeV_Pythia8_PbPbCSVv2TaggersFixed_merged_part0000_123.root
//////////////////////////////////////////////////////////

#ifndef jetTreeReaderPbPbMCInclusive_h
#define jetTreeReaderPbPbMCInclusive_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class jetTreeReaderPbPbMCInclusive {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           run;
   Int_t           evt;
   Int_t           lumi;
   Int_t           nref;
   Float_t         rawpt[100];   //[nref]
   Float_t         jtpt[100];   //[nref]
   Float_t         jteta[100];   //[nref]
   Float_t         jty[100];   //[nref]
   Float_t         jtphi[100];   //[nref]
   Float_t         jtpu[100];   //[nref]
   Float_t         jtm[100];   //[nref]
   Float_t         jtarea[100];   //[nref]
   Float_t         jtPfCHF[100];   //[nref]
   Float_t         jtPfNHF[100];   //[nref]
   Float_t         jtPfCEF[100];   //[nref]
   Float_t         jtPfNEF[100];   //[nref]
   Float_t         jtPfMUF[100];   //[nref]
   Int_t           jtPfCHM[100];   //[nref]
   Int_t           jtPfNHM[100];   //[nref]
   Int_t           jtPfCEM[100];   //[nref]
   Int_t           jtPfNEM[100];   //[nref]
   Int_t           jtPfMUM[100];   //[nref]
   Float_t         matchedPt[100];   //[nref]
   Float_t         matchedRawPt[100];   //[nref]
   Float_t         matchedPu[100];   //[nref]
   Float_t         matchedR[100];   //[nref]
   Int_t           matchedHadronFlavor[100];   //[nref]
   Int_t           matchedPartonFlavor[100];   //[nref]
   Float_t         TagVarCSV_trackJetPt[100];   //[nref]
   Float_t         TagVarCSV_vertexCategory[100];   //[nref]
   Float_t         TagVarCSV_jetNSecondaryVertices[100];   //[nref]
   Float_t         TagVarCSV_trackSumJetEtRatio[100];   //[nref]
   Float_t         TagVarCSV_trackSumJetDeltaR[100];   //[nref]
   Float_t         TagVarCSV_trackSip2dValAboveCharm[100];   //[nref]
   Float_t         TagVarCSV_trackSip2dSigAboveCharm[100];   //[nref]
   Float_t         TagVarCSV_trackSip3dValAboveCharm[100];   //[nref]
   Float_t         TagVarCSV_trackSip3dSigAboveCharm[100];   //[nref]
   Float_t         TagVarCSV_vertexMass[100];   //[nref]
   Float_t         TagVarCSV_vertexNTracks[100];   //[nref]
   Float_t         TagVarCSV_vertexEnergyRatio[100];   //[nref]
   Float_t         TagVarCSV_vertexJetDeltaR[100];   //[nref]
   Float_t         TagVarCSV_flightDistance2dVal[100];   //[nref]
   Float_t         TagVarCSV_flightDistance2dSig[100];   //[nref]
   Float_t         TagVarCSV_flightDistance3dVal[100];   //[nref]
   Float_t         TagVarCSV_flightDistance3dSig[100];   //[nref]
   Int_t           nTrkTagVarCSV;
   Int_t           nTrkEtaRelTagVarCSV;
   Float_t         TagVarCSV_jetNTracksEtaRel[100];   //[nref]
   Float_t         Jet_nFirstTrkTagVarCSV[100];   //[nref]
   Float_t         Jet_nLastTrkTagVarCSV[100];   //[nref]
   Float_t         Jet_nFirstTrkEtaRelTagVarCSV[100];   //[nref]
   Float_t         Jet_nLastTrkEtaRelTagVarCSV[100];   //[nref]
   Float_t         TagVarCSV_jetNTracks[100];   //[nref]
   Float_t         TagVarCSV_trackMomentum[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackEta[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackPtRel[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackPPar[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackDeltaR[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackPtRatio[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackPParRatio[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackSip2dVal[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackSip2dSig[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackSip3dVal[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackSip3dSig[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackDecayLenVal[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackJetDistVal[250];   //[nTrkTagVarCSV]
   Float_t         TagVarCSV_trackEtaRel[250];   //[nTrkTagVarCSV]
   Float_t         discr_csvV1[100];   //[nref]
   Float_t         discr_csvV2[100];   //[nref]
   Float_t         discr_prob[100];   //[nref]
   Float_t         ndiscr_csvV2[100];   //[nref]
   Float_t         pdiscr_csvV2[100];   //[nref]
   Int_t           nsvtx[100];   //[nref]
   Int_t           svtxntrk[100];   //[nref]
   Float_t         svtxdl[100];   //[nref]
   Float_t         svtxdls[100];   //[nref]
   Float_t         svtxdl2d[100];   //[nref]
   Float_t         svtxdls2d[100];   //[nref]
   Float_t         svtxm[100];   //[nref]
   Float_t         svtxpt[100];   //[nref]
   Float_t         svtxmcorr[100];   //[nref]
   Int_t           nIPtrk[100];   //[nref]
   Int_t           nselIPtrk[100];   //[nref]
   Float_t         pthat;
   Float_t         refpt[100];   //[nref]
   Float_t         refeta[100];   //[nref]
   Float_t         refy[100];   //[nref]
   Float_t         refphi[100];   //[nref]
   Float_t         refparton_pt[100];   //[nref]
   Int_t           refparton_flavor[100];   //[nref]
   Int_t           refparton_flavorForB[100];   //[nref]
   Float_t         genChargedSum[100];   //[nref]
   Float_t         genHardSum[100];   //[nref]
   Float_t         signalChargedSum[100];   //[nref]
   Float_t         signalHardSum[100];   //[nref]
   Int_t           ngen;
   Int_t           genmatchindex[30];   //[ngen]
   Float_t         genpt[30];   //[ngen]
   Float_t         geneta[30];   //[ngen]
   Float_t         geny[30];   //[ngen]
   Float_t         genphi[30];   //[ngen]
   Float_t         genm[30];   //[ngen]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_nref;   //!
   TBranch        *b_rawpt;   //!
   TBranch        *b_jtpt;   //!
   TBranch        *b_jteta;   //!
   TBranch        *b_jty;   //!
   TBranch        *b_jtphi;   //!
   TBranch        *b_jtpu;   //!
   TBranch        *b_jtm;   //!
   TBranch        *b_jtarea;   //!
   TBranch        *b_jtPfCHF;   //!
   TBranch        *b_jtPfNHF;   //!
   TBranch        *b_jtPfCEF;   //!
   TBranch        *b_jtPfNEF;   //!
   TBranch        *b_jtPfMUF;   //!
   TBranch        *b_jtPfCHM;   //!
   TBranch        *b_jtPfNHM;   //!
   TBranch        *b_jtPfCEM;   //!
   TBranch        *b_jtPfNEM;   //!
   TBranch        *b_jtPfMUM;   //!
   TBranch        *b_matchedPt;   //!
   TBranch        *b_matchedRawPt;   //!
   TBranch        *b_matchedPu;   //!
   TBranch        *b_matchedR;   //!
   TBranch        *b_matchedHadronFlavor;   //!
   TBranch        *b_matchedPartonFlavor;   //!
   TBranch        *b_TagVarCSV_trackJetPt;   //!
   TBranch        *b_TagVarCSV_vertexCategory;   //!
   TBranch        *b_TagVarCSV_jetNSecondaryVertices;   //!
   TBranch        *b_TagVarCSV_trackSumJetEtRatio;   //!
   TBranch        *b_TagVarCSV_trackSumJetDeltaR;   //!
   TBranch        *b_TagVarCSV_trackSip2dValAboveCharm;   //!
   TBranch        *b_TagVarCSV_trackSip2dSigAboveCharm;   //!
   TBranch        *b_TagVarCSV_trackSip3dValAboveCharm;   //!
   TBranch        *b_TagVarCSV_trackSip3dSigAboveCharm;   //!
   TBranch        *b_TagVarCSV_vertexMass;   //!
   TBranch        *b_TagVarCSV_vertexNTracks;   //!
   TBranch        *b_TagVarCSV_vertexEnergyRatio;   //!
   TBranch        *b_TagVarCSV_vertexJetDeltaR;   //!
   TBranch        *b_TagVarCSV_flightDistance2dVal;   //!
   TBranch        *b_TagVarCSV_flightDistance2dSig;   //!
   TBranch        *b_TagVarCSV_flightDistance3dVal;   //!
   TBranch        *b_TagVarCSV_flightDistance3dSig;   //!
   TBranch        *b_nTrkTagVarCSV;   //!
   TBranch        *b_nTrkEtaRelTagVarCSV;   //!
   TBranch        *b_TagVarCSV_jetNTracksEtaRel;   //!
   TBranch        *b_Jet_nFirstTrkTagVarCSV;   //!
   TBranch        *b_Jet_nLastTrkTagVarCSV;   //!
   TBranch        *b_Jet_nFirstTrkEtaRelTagVarCSV;   //!
   TBranch        *b_Jet_nLastTrkEtaRelTagVarCSV;   //!
   TBranch        *b_TagVarCSV_jetNTracks;   //!
   TBranch        *b_TagVarCSV_trackMomentum;   //!
   TBranch        *b_TagVarCSV_trackEta;   //!
   TBranch        *b_TagVarCSV_trackPtRel;   //!
   TBranch        *b_TagVarCSV_trackPPar;   //!
   TBranch        *b_TagVarCSV_trackDeltaR;   //!
   TBranch        *b_TagVarCSV_trackPtRatio;   //!
   TBranch        *b_TagVarCSV_trackPParRatio;   //!
   TBranch        *b_TagVarCSV_trackSip2dVal;   //!
   TBranch        *b_TagVarCSV_trackSip2dSig;   //!
   TBranch        *b_TagVarCSV_trackSip3dVal;   //!
   TBranch        *b_TagVarCSV_trackSip3dSig;   //!
   TBranch        *b_TagVarCSV_trackDecayLenVal;   //!
   TBranch        *b_TagVarCSV_trackJetDistVal;   //!
   TBranch        *b_TagVarCSV_trackEtaRel;   //!
   TBranch        *b_discr_csvV1;   //!
   TBranch        *b_discr_csvV2;   //!
   TBranch        *b_discr_prob;   //!
   TBranch        *b_ndiscr_csvV2;   //!
   TBranch        *b_pdiscr_csvV2;   //!
   TBranch        *b_nsvtx;   //!
   TBranch        *b_svtxntrk;   //!
   TBranch        *b_svtxdl;   //!
   TBranch        *b_svtxdls;   //!
   TBranch        *b_svtxdl2d;   //!
   TBranch        *b_svtxdls2d;   //!
   TBranch        *b_svtxm;   //!
   TBranch        *b_svtxpt;   //!
   TBranch        *b_svtxmcorr;   //!
   TBranch        *b_nIPtrk;   //!
   TBranch        *b_nselIPtrk;   //!
   TBranch        *b_pthat;   //!
   TBranch        *b_refpt;   //!
   TBranch        *b_refeta;   //!
   TBranch        *b_refy;   //!
   TBranch        *b_refphi;   //!
   TBranch        *b_refparton_pt;   //!
   TBranch        *b_refparton_flavor;   //!
   TBranch        *b_refparton_flavorForB;   //!
   TBranch        *b_genChargedSum;   //!
   TBranch        *b_genHardSum;   //!
   TBranch        *b_signalChargedSum;   //!
   TBranch        *b_signalHardSum;   //!
   TBranch        *b_ngen;   //!
   TBranch        *b_genmatchindex;   //!
   TBranch        *b_genpt;   //!
   TBranch        *b_geneta;   //!
   TBranch        *b_geny;   //!
   TBranch        *b_genphi;   //!
   TBranch        *b_genm;   //!

   jetTreeReaderPbPbMCInclusive(TTree *tree=0);
   virtual ~jetTreeReaderPbPbMCInclusive();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef jetTreeReaderPbPbMCInclusive_cxx
jetTreeReaderPbPbMCInclusive::jetTreeReaderPbPbMCInclusive(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/DiJet_pThat-15_TuneCP5_HydjetDrumMB_5p02TeV_Pythia8_PbPbCSVv2TaggersFixed_CleanJets_merged/DiJet_pThat-15_TuneCP5_HydjetDrumMB_5p02TeV_Pythia8_PbPbCSVv2TaggersFixed_merged_part0000_123.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/DiJet_pThat-15_TuneCP5_HydjetDrumMB_5p02TeV_Pythia8_PbPbCSVv2TaggersFixed_CleanJets_merged/DiJet_pThat-15_TuneCP5_HydjetDrumMB_5p02TeV_Pythia8_PbPbCSVv2TaggersFixed_merged_part0000_123.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/DiJet_pThat-15_TuneCP5_HydjetDrumMB_5p02TeV_Pythia8_PbPbCSVv2TaggersFixed_CleanJets_merged/DiJet_pThat-15_TuneCP5_HydjetDrumMB_5p02TeV_Pythia8_PbPbCSVv2TaggersFixed_merged_part0000_123.root:/akFlowPuCs4PFJetAnalyzer");
      dir->GetObject("t",tree);

   }
   Init(tree);
}

jetTreeReaderPbPbMCInclusive::~jetTreeReaderPbPbMCInclusive()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t jetTreeReaderPbPbMCInclusive::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t jetTreeReaderPbPbMCInclusive::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void jetTreeReaderPbPbMCInclusive::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("nref", &nref, &b_nref);
   fChain->SetBranchAddress("rawpt", rawpt, &b_rawpt);
   fChain->SetBranchAddress("jtpt", jtpt, &b_jtpt);
   fChain->SetBranchAddress("jteta", jteta, &b_jteta);
   fChain->SetBranchAddress("jty", jty, &b_jty);
   fChain->SetBranchAddress("jtphi", jtphi, &b_jtphi);
   fChain->SetBranchAddress("jtpu", jtpu, &b_jtpu);
   fChain->SetBranchAddress("jtm", jtm, &b_jtm);
   fChain->SetBranchAddress("jtarea", jtarea, &b_jtarea);
   fChain->SetBranchAddress("jtPfCHF", jtPfCHF, &b_jtPfCHF);
   fChain->SetBranchAddress("jtPfNHF", jtPfNHF, &b_jtPfNHF);
   fChain->SetBranchAddress("jtPfCEF", jtPfCEF, &b_jtPfCEF);
   fChain->SetBranchAddress("jtPfNEF", jtPfNEF, &b_jtPfNEF);
   fChain->SetBranchAddress("jtPfMUF", jtPfMUF, &b_jtPfMUF);
   fChain->SetBranchAddress("jtPfCHM", jtPfCHM, &b_jtPfCHM);
   fChain->SetBranchAddress("jtPfNHM", jtPfNHM, &b_jtPfNHM);
   fChain->SetBranchAddress("jtPfCEM", jtPfCEM, &b_jtPfCEM);
   fChain->SetBranchAddress("jtPfNEM", jtPfNEM, &b_jtPfNEM);
   fChain->SetBranchAddress("jtPfMUM", jtPfMUM, &b_jtPfMUM);
   fChain->SetBranchAddress("matchedPt", matchedPt, &b_matchedPt);
   fChain->SetBranchAddress("matchedRawPt", matchedRawPt, &b_matchedRawPt);
   fChain->SetBranchAddress("matchedPu", matchedPu, &b_matchedPu);
   fChain->SetBranchAddress("matchedR", matchedR, &b_matchedR);
   fChain->SetBranchAddress("matchedHadronFlavor", matchedHadronFlavor, &b_matchedHadronFlavor);
   fChain->SetBranchAddress("matchedPartonFlavor", matchedPartonFlavor, &b_matchedPartonFlavor);
   fChain->SetBranchAddress("TagVarCSV_trackJetPt", TagVarCSV_trackJetPt, &b_TagVarCSV_trackJetPt);
   fChain->SetBranchAddress("TagVarCSV_vertexCategory", TagVarCSV_vertexCategory, &b_TagVarCSV_vertexCategory);
   fChain->SetBranchAddress("TagVarCSV_jetNSecondaryVertices", TagVarCSV_jetNSecondaryVertices, &b_TagVarCSV_jetNSecondaryVertices);
   fChain->SetBranchAddress("TagVarCSV_trackSumJetEtRatio", TagVarCSV_trackSumJetEtRatio, &b_TagVarCSV_trackSumJetEtRatio);
   fChain->SetBranchAddress("TagVarCSV_trackSumJetDeltaR", TagVarCSV_trackSumJetDeltaR, &b_TagVarCSV_trackSumJetDeltaR);
   fChain->SetBranchAddress("TagVarCSV_trackSip2dValAboveCharm", TagVarCSV_trackSip2dValAboveCharm, &b_TagVarCSV_trackSip2dValAboveCharm);
   fChain->SetBranchAddress("TagVarCSV_trackSip2dSigAboveCharm", TagVarCSV_trackSip2dSigAboveCharm, &b_TagVarCSV_trackSip2dSigAboveCharm);
   fChain->SetBranchAddress("TagVarCSV_trackSip3dValAboveCharm", TagVarCSV_trackSip3dValAboveCharm, &b_TagVarCSV_trackSip3dValAboveCharm);
   fChain->SetBranchAddress("TagVarCSV_trackSip3dSigAboveCharm", TagVarCSV_trackSip3dSigAboveCharm, &b_TagVarCSV_trackSip3dSigAboveCharm);
   fChain->SetBranchAddress("TagVarCSV_vertexMass", TagVarCSV_vertexMass, &b_TagVarCSV_vertexMass);
   fChain->SetBranchAddress("TagVarCSV_vertexNTracks", TagVarCSV_vertexNTracks, &b_TagVarCSV_vertexNTracks);
   fChain->SetBranchAddress("TagVarCSV_vertexEnergyRatio", TagVarCSV_vertexEnergyRatio, &b_TagVarCSV_vertexEnergyRatio);
   fChain->SetBranchAddress("TagVarCSV_vertexJetDeltaR", TagVarCSV_vertexJetDeltaR, &b_TagVarCSV_vertexJetDeltaR);
   fChain->SetBranchAddress("TagVarCSV_flightDistance2dVal", TagVarCSV_flightDistance2dVal, &b_TagVarCSV_flightDistance2dVal);
   fChain->SetBranchAddress("TagVarCSV_flightDistance2dSig", TagVarCSV_flightDistance2dSig, &b_TagVarCSV_flightDistance2dSig);
   fChain->SetBranchAddress("TagVarCSV_flightDistance3dVal", TagVarCSV_flightDistance3dVal, &b_TagVarCSV_flightDistance3dVal);
   fChain->SetBranchAddress("TagVarCSV_flightDistance3dSig", TagVarCSV_flightDistance3dSig, &b_TagVarCSV_flightDistance3dSig);
   fChain->SetBranchAddress("nTrkTagVarCSV", &nTrkTagVarCSV, &b_nTrkTagVarCSV);
   fChain->SetBranchAddress("nTrkEtaRelTagVarCSV", &nTrkEtaRelTagVarCSV, &b_nTrkEtaRelTagVarCSV);
   fChain->SetBranchAddress("TagVarCSV_jetNTracksEtaRel", TagVarCSV_jetNTracksEtaRel, &b_TagVarCSV_jetNTracksEtaRel);
   fChain->SetBranchAddress("Jet_nFirstTrkTagVarCSV", Jet_nFirstTrkTagVarCSV, &b_Jet_nFirstTrkTagVarCSV);
   fChain->SetBranchAddress("Jet_nLastTrkTagVarCSV", Jet_nLastTrkTagVarCSV, &b_Jet_nLastTrkTagVarCSV);
   fChain->SetBranchAddress("Jet_nFirstTrkEtaRelTagVarCSV", Jet_nFirstTrkEtaRelTagVarCSV, &b_Jet_nFirstTrkEtaRelTagVarCSV);
   fChain->SetBranchAddress("Jet_nLastTrkEtaRelTagVarCSV", Jet_nLastTrkEtaRelTagVarCSV, &b_Jet_nLastTrkEtaRelTagVarCSV);
   fChain->SetBranchAddress("TagVarCSV_jetNTracks", TagVarCSV_jetNTracks, &b_TagVarCSV_jetNTracks);
   fChain->SetBranchAddress("TagVarCSV_trackMomentum", TagVarCSV_trackMomentum, &b_TagVarCSV_trackMomentum);
   fChain->SetBranchAddress("TagVarCSV_trackEta", TagVarCSV_trackEta, &b_TagVarCSV_trackEta);
   fChain->SetBranchAddress("TagVarCSV_trackPtRel", TagVarCSV_trackPtRel, &b_TagVarCSV_trackPtRel);
   fChain->SetBranchAddress("TagVarCSV_trackPPar", TagVarCSV_trackPPar, &b_TagVarCSV_trackPPar);
   fChain->SetBranchAddress("TagVarCSV_trackDeltaR", TagVarCSV_trackDeltaR, &b_TagVarCSV_trackDeltaR);
   fChain->SetBranchAddress("TagVarCSV_trackPtRatio", TagVarCSV_trackPtRatio, &b_TagVarCSV_trackPtRatio);
   fChain->SetBranchAddress("TagVarCSV_trackPParRatio", TagVarCSV_trackPParRatio, &b_TagVarCSV_trackPParRatio);
   fChain->SetBranchAddress("TagVarCSV_trackSip2dVal", TagVarCSV_trackSip2dVal, &b_TagVarCSV_trackSip2dVal);
   fChain->SetBranchAddress("TagVarCSV_trackSip2dSig", TagVarCSV_trackSip2dSig, &b_TagVarCSV_trackSip2dSig);
   fChain->SetBranchAddress("TagVarCSV_trackSip3dVal", TagVarCSV_trackSip3dVal, &b_TagVarCSV_trackSip3dVal);
   fChain->SetBranchAddress("TagVarCSV_trackSip3dSig", TagVarCSV_trackSip3dSig, &b_TagVarCSV_trackSip3dSig);
   fChain->SetBranchAddress("TagVarCSV_trackDecayLenVal", TagVarCSV_trackDecayLenVal, &b_TagVarCSV_trackDecayLenVal);
   fChain->SetBranchAddress("TagVarCSV_trackJetDistVal", TagVarCSV_trackJetDistVal, &b_TagVarCSV_trackJetDistVal);
   fChain->SetBranchAddress("TagVarCSV_trackEtaRel", TagVarCSV_trackEtaRel, &b_TagVarCSV_trackEtaRel);
   fChain->SetBranchAddress("discr_csvV1", discr_csvV1, &b_discr_csvV1);
   fChain->SetBranchAddress("discr_csvV2", discr_csvV2, &b_discr_csvV2);
   fChain->SetBranchAddress("discr_prob", discr_prob, &b_discr_prob);
   fChain->SetBranchAddress("ndiscr_csvV2", ndiscr_csvV2, &b_ndiscr_csvV2);
   fChain->SetBranchAddress("pdiscr_csvV2", pdiscr_csvV2, &b_pdiscr_csvV2);
   fChain->SetBranchAddress("nsvtx", nsvtx, &b_nsvtx);
   fChain->SetBranchAddress("svtxntrk", svtxntrk, &b_svtxntrk);
   fChain->SetBranchAddress("svtxdl", svtxdl, &b_svtxdl);
   fChain->SetBranchAddress("svtxdls", svtxdls, &b_svtxdls);
   fChain->SetBranchAddress("svtxdl2d", svtxdl2d, &b_svtxdl2d);
   fChain->SetBranchAddress("svtxdls2d", svtxdls2d, &b_svtxdls2d);
   fChain->SetBranchAddress("svtxm", svtxm, &b_svtxm);
   fChain->SetBranchAddress("svtxpt", svtxpt, &b_svtxpt);
   fChain->SetBranchAddress("svtxmcorr", svtxmcorr, &b_svtxmcorr);
   fChain->SetBranchAddress("nIPtrk", nIPtrk, &b_nIPtrk);
   fChain->SetBranchAddress("nselIPtrk", nselIPtrk, &b_nselIPtrk);
   fChain->SetBranchAddress("pthat", &pthat, &b_pthat);
   fChain->SetBranchAddress("refpt", refpt, &b_refpt);
   fChain->SetBranchAddress("refeta", refeta, &b_refeta);
   fChain->SetBranchAddress("refy", refy, &b_refy);
   fChain->SetBranchAddress("refphi", refphi, &b_refphi);
   fChain->SetBranchAddress("refparton_pt", refparton_pt, &b_refparton_pt);
   fChain->SetBranchAddress("refparton_flavor", refparton_flavor, &b_refparton_flavor);
   fChain->SetBranchAddress("refparton_flavorForB", refparton_flavorForB, &b_refparton_flavorForB);
   fChain->SetBranchAddress("genChargedSum", genChargedSum, &b_genChargedSum);
   fChain->SetBranchAddress("genHardSum", genHardSum, &b_genHardSum);
   fChain->SetBranchAddress("signalChargedSum", signalChargedSum, &b_signalChargedSum);
   fChain->SetBranchAddress("signalHardSum", signalHardSum, &b_signalHardSum);
   fChain->SetBranchAddress("ngen", &ngen, &b_ngen);
   fChain->SetBranchAddress("genmatchindex", genmatchindex, &b_genmatchindex);
   fChain->SetBranchAddress("genpt", genpt, &b_genpt);
   fChain->SetBranchAddress("geneta", geneta, &b_geneta);
   fChain->SetBranchAddress("geny", geny, &b_geny);
   fChain->SetBranchAddress("genphi", genphi, &b_genphi);
   fChain->SetBranchAddress("genm", genm, &b_genm);
   Notify();
}

Bool_t jetTreeReaderPbPbMCInclusive::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void jetTreeReaderPbPbMCInclusive::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t jetTreeReaderPbPbMCInclusive::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef jetTreeReaderPbPbMCInclusive_cxx
