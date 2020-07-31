//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Mar 16 13:41:28 2020 by ROOT version 6.18/04
// from TTree t/ak4PFpatJetsWithBtagging Jet Analysis Tree
// found on file: /eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_GSP_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_GSP_part0.root
//////////////////////////////////////////////////////////

#ifndef jetTreeReaderPPMCGSP_h
#define jetTreeReaderPPMCGSP_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class jetTreeReaderPPMCGSP {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           evt;
   Int_t           GSP_evt;
   Float_t         b;
   Float_t         vx;
   Float_t         vy;
   Float_t         vz;
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
   Float_t         jttau1[100];   //[nref]
   Float_t         jttau2[100];   //[nref]
   Float_t         jttau3[100];   //[nref]
   Float_t         jtHadronFlavor[100];   //[nref]
   Float_t         jtPartonFlavor[100];   //[nref]
   Float_t         trackMax[100];   //[nref]
   Float_t         trackSum[100];   //[nref]
   Int_t           trackN[100];   //[nref]
   Float_t         trackHardSum[100];   //[nref]
   Int_t           trackHardN[100];   //[nref]
   Float_t         chargedMax[100];   //[nref]
   Float_t         chargedSum[100];   //[nref]
   Int_t           chargedN[100];   //[nref]
   Float_t         chargedHardSum[100];   //[nref]
   Int_t           chargedHardN[100];   //[nref]
   Float_t         photonMax[100];   //[nref]
   Float_t         photonSum[100];   //[nref]
   Int_t           photonN[100];   //[nref]
   Float_t         photonHardSum[100];   //[nref]
   Int_t           photonHardN[100];   //[nref]
   Float_t         neutralMax[100];   //[nref]
   Float_t         neutralSum[100];   //[nref]
   Int_t           neutralN[100];   //[nref]
   Float_t         hcalSum[100];   //[nref]
   Float_t         ecalSum[100];   //[nref]
   Float_t         eMax[100];   //[nref]
   Float_t         eSum[100];   //[nref]
   Int_t           eN[100];   //[nref]
   Float_t         muMax[100];   //[nref]
   Float_t         muSum[100];   //[nref]
   Int_t           muN[100];   //[nref]
   Float_t         discr_ssvHighEff[100];   //[nref]
   Float_t         discr_ssvHighPur[100];   //[nref]
   Float_t         discr_csvV1[100];   //[nref]
   Float_t         discr_csvV2[100];   //[nref]
   Float_t         discr_deepCSV[100];   //[nref]
   Float_t         discr_muByIp3[100];   //[nref]
   Float_t         discr_muByPt[100];   //[nref]
   Float_t         discr_prob[100];   //[nref]
   Float_t         discr_probb[100];   //[nref]
   Float_t         discr_tcHighEff[100];   //[nref]
   Float_t         discr_tcHighPur[100];   //[nref]
   Float_t         ndiscr_csvV2[100];   //[nref]
   Float_t         pdiscr_csvV2[100];   //[nref]
   Int_t           nsvtx[100];   //[nref]
   vector<vector<int> > *svType;
   vector<vector<int> > *svtxntrk;
   vector<vector<float> > *svtxdl;
   vector<vector<float> > *svtxdls;
   vector<vector<float> > *svtxdl2d;
   vector<vector<float> > *svtxdls2d;
   vector<vector<float> > *svtxm;
   vector<vector<float> > *svtxpt;
   Float_t         svtxmcorr[100];   //[nref]
   Int_t           nIPtrk[100];   //[nref]
   Int_t           nselIPtrk[100];   //[nref]
   Float_t         mue[100];   //[nref]
   Float_t         mupt[100];   //[nref]
   Float_t         mueta[100];   //[nref]
   Float_t         muphi[100];   //[nref]
   Float_t         mudr[100];   //[nref]
   Float_t         muptrel[100];   //[nref]
   Int_t           muchg[100];   //[nref]
   Int_t           beamId1;
   Int_t           beamId2;
   Float_t         pthat;
   Float_t         refpt[100];   //[nref]
   Float_t         refeta[100];   //[nref]
   Float_t         refy[100];   //[nref]
   Float_t         refphi[100];   //[nref]
   Float_t         refm[100];   //[nref]
   Float_t         refarea[100];   //[nref]
   Float_t         reftau1[100];   //[nref]
   Float_t         reftau2[100];   //[nref]
   Float_t         reftau3[100];   //[nref]
   Float_t         refdphijt[100];   //[nref]
   Float_t         refdrjt[100];   //[nref]
   Float_t         refparton_pt[100];   //[nref]
   Int_t           refparton_flavor[100];   //[nref]
   Int_t           refparton_flavorForB[100];   //[nref]
   Float_t         genChargedSum[100];   //[nref]
   Float_t         genHardSum[100];   //[nref]
   Float_t         signalChargedSum[100];   //[nref]
   Float_t         signalHardSum[100];   //[nref]
   Int_t           subid[100];   //[nref]
   Int_t           ngen;
   Int_t           genmatchindex[50];   //[ngen]
   Float_t         genpt[50];   //[ngen]
   Float_t         geneta[50];   //[ngen]
   Float_t         geny[50];   //[ngen]
   Float_t         gentau1[50];   //[ngen]
   Float_t         gentau2[50];   //[ngen]
   Float_t         gentau3[50];   //[ngen]
   Float_t         genphi[50];   //[ngen]
   Float_t         genm[50];   //[ngen]
   Float_t         gendphijt[50];   //[ngen]
   Float_t         gendrjt[50];   //[ngen]
   Int_t           gensubid[50];   //[ngen]

   // List of branches
   TBranch        *b_evt;   //!
   TBranch        *b_GSP_evt;   //!
   TBranch        *b_b;   //!
   TBranch        *b_vx;   //!
   TBranch        *b_vy;   //!
   TBranch        *b_vz;   //!
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
   TBranch        *b_jttau1;   //!
   TBranch        *b_jttau2;   //!
   TBranch        *b_jttau3;   //!
   TBranch        *b_jtHadronFlavor;   //!
   TBranch        *b_jtPartonFlavor;   //!
   TBranch        *b_trackMax;   //!
   TBranch        *b_trackSum;   //!
   TBranch        *b_trackN;   //!
   TBranch        *b_trackHardSum;   //!
   TBranch        *b_trackHardN;   //!
   TBranch        *b_chargedMax;   //!
   TBranch        *b_chargedSum;   //!
   TBranch        *b_chargedN;   //!
   TBranch        *b_chargedHardSum;   //!
   TBranch        *b_chargedHardN;   //!
   TBranch        *b_photonMax;   //!
   TBranch        *b_photonSum;   //!
   TBranch        *b_photonN;   //!
   TBranch        *b_photonHardSum;   //!
   TBranch        *b_photonHardN;   //!
   TBranch        *b_neutralMax;   //!
   TBranch        *b_neutralSum;   //!
   TBranch        *b_neutralN;   //!
   TBranch        *b_hcalSum;   //!
   TBranch        *b_ecalSum;   //!
   TBranch        *b_eMax;   //!
   TBranch        *b_eSum;   //!
   TBranch        *b_eN;   //!
   TBranch        *b_muMax;   //!
   TBranch        *b_muSum;   //!
   TBranch        *b_muN;   //!
   TBranch        *b_discr_ssvHighEff;   //!
   TBranch        *b_discr_ssvHighPur;   //!
   TBranch        *b_discr_csvV1;   //!
   TBranch        *b_discr_csvV2;   //!
   TBranch        *b_discr_deepCSV;   //!
   TBranch        *b_discr_muByIp3;   //!
   TBranch        *b_discr_muByPt;   //!
   TBranch        *b_discr_prob;   //!
   TBranch        *b_discr_probb;   //!
   TBranch        *b_discr_tcHighEff;   //!
   TBranch        *b_discr_tcHighPur;   //!
   TBranch        *b_ndiscr_csvV2;   //!
   TBranch        *b_pdiscr_csvV2;   //!
   TBranch        *b_nsvtx;   //!
   TBranch        *b_svType;   //!
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
   TBranch        *b_mue;   //!
   TBranch        *b_mupt;   //!
   TBranch        *b_mueta;   //!
   TBranch        *b_muphi;   //!
   TBranch        *b_mudr;   //!
   TBranch        *b_muptrel;   //!
   TBranch        *b_muchg;   //!
   TBranch        *b_beamId1;   //!
   TBranch        *b_beamId2;   //!
   TBranch        *b_pthat;   //!
   TBranch        *b_refpt;   //!
   TBranch        *b_refeta;   //!
   TBranch        *b_refy;   //!
   TBranch        *b_refphi;   //!
   TBranch        *b_refm;   //!
   TBranch        *b_refarea;   //!
   TBranch        *b_reftau1;   //!
   TBranch        *b_reftau2;   //!
   TBranch        *b_reftau3;   //!
   TBranch        *b_refdphijt;   //!
   TBranch        *b_refdrjt;   //!
   TBranch        *b_refparton_pt;   //!
   TBranch        *b_refparton_flavor;   //!
   TBranch        *b_refparton_flavorForB;   //!
   TBranch        *b_genChargedSum;   //!
   TBranch        *b_genHardSum;   //!
   TBranch        *b_signalChargedSum;   //!
   TBranch        *b_signalHardSum;   //!
   TBranch        *b_subid;   //!
   TBranch        *b_ngen;   //!
   TBranch        *b_genmatchindex;   //!
   TBranch        *b_genpt;   //!
   TBranch        *b_geneta;   //!
   TBranch        *b_geny;   //!
   TBranch        *b_gentau1;   //!
   TBranch        *b_gentau2;   //!
   TBranch        *b_gentau3;   //!
   TBranch        *b_genphi;   //!
   TBranch        *b_genm;   //!
   TBranch        *b_gendphijt;   //!
   TBranch        *b_gendrjt;   //!
   TBranch        *b_gensubid;   //!

   jetTreeReaderPPMCGSP(TTree *tree=0);
   virtual ~jetTreeReaderPPMCGSP();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef jetTreeReaderPPMCGSP_cxx
jetTreeReaderPPMCGSP::jetTreeReaderPPMCGSP(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/QCD_pThat-1100_Dijet_TuneCP100_100p02TeV_pythia8_ppRef100TeV_MuJet_GSP_merged/QCD_pThat-1100_Dijet_TuneCP100_100p02TeV_pythia8_ppRef100TeV_MuJet_GSP_part0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_GSP_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_GSP_part0.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_GSP_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_GSP_part0.root:/ak4PFJetAnalyzer");
      dir->GetObject("t",tree);

   }
   Init(tree);
}

jetTreeReaderPPMCGSP::~jetTreeReaderPPMCGSP()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t jetTreeReaderPPMCGSP::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t jetTreeReaderPPMCGSP::LoadTree(Long64_t entry)
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

void jetTreeReaderPPMCGSP::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   svType = 0;
   svtxntrk = 0;
   svtxdl = 0;
   svtxdls = 0;
   svtxdl2d = 0;
   svtxdls2d = 0;
   svtxm = 0;
   svtxpt = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("GSP_evt", &GSP_evt, &b_GSP_evt);
   fChain->SetBranchAddress("b", &b, &b_b);
   fChain->SetBranchAddress("vx", &vx, &b_vx);
   fChain->SetBranchAddress("vy", &vy, &b_vy);
   fChain->SetBranchAddress("vz", &vz, &b_vz);
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
   fChain->SetBranchAddress("jttau1", jttau1, &b_jttau1);
   fChain->SetBranchAddress("jttau2", jttau2, &b_jttau2);
   fChain->SetBranchAddress("jttau3", jttau3, &b_jttau3);
   fChain->SetBranchAddress("jtHadronFlavor", jtHadronFlavor, &b_jtHadronFlavor);
   fChain->SetBranchAddress("jtPartonFlavor", jtPartonFlavor, &b_jtPartonFlavor);
   fChain->SetBranchAddress("trackMax", trackMax, &b_trackMax);
   fChain->SetBranchAddress("trackSum", trackSum, &b_trackSum);
   fChain->SetBranchAddress("trackN", trackN, &b_trackN);
   fChain->SetBranchAddress("trackHardSum", trackHardSum, &b_trackHardSum);
   fChain->SetBranchAddress("trackHardN", trackHardN, &b_trackHardN);
   fChain->SetBranchAddress("chargedMax", chargedMax, &b_chargedMax);
   fChain->SetBranchAddress("chargedSum", chargedSum, &b_chargedSum);
   fChain->SetBranchAddress("chargedN", chargedN, &b_chargedN);
   fChain->SetBranchAddress("chargedHardSum", chargedHardSum, &b_chargedHardSum);
   fChain->SetBranchAddress("chargedHardN", chargedHardN, &b_chargedHardN);
   fChain->SetBranchAddress("photonMax", photonMax, &b_photonMax);
   fChain->SetBranchAddress("photonSum", photonSum, &b_photonSum);
   fChain->SetBranchAddress("photonN", photonN, &b_photonN);
   fChain->SetBranchAddress("photonHardSum", photonHardSum, &b_photonHardSum);
   fChain->SetBranchAddress("photonHardN", photonHardN, &b_photonHardN);
   fChain->SetBranchAddress("neutralMax", neutralMax, &b_neutralMax);
   fChain->SetBranchAddress("neutralSum", neutralSum, &b_neutralSum);
   fChain->SetBranchAddress("neutralN", neutralN, &b_neutralN);
   fChain->SetBranchAddress("hcalSum", hcalSum, &b_hcalSum);
   fChain->SetBranchAddress("ecalSum", ecalSum, &b_ecalSum);
   fChain->SetBranchAddress("eMax", eMax, &b_eMax);
   fChain->SetBranchAddress("eSum", eSum, &b_eSum);
   fChain->SetBranchAddress("eN", eN, &b_eN);
   fChain->SetBranchAddress("muMax", muMax, &b_muMax);
   fChain->SetBranchAddress("muSum", muSum, &b_muSum);
   fChain->SetBranchAddress("muN", muN, &b_muN);
   fChain->SetBranchAddress("discr_ssvHighEff", discr_ssvHighEff, &b_discr_ssvHighEff);
   fChain->SetBranchAddress("discr_ssvHighPur", discr_ssvHighPur, &b_discr_ssvHighPur);
   fChain->SetBranchAddress("discr_csvV1", discr_csvV1, &b_discr_csvV1);
   fChain->SetBranchAddress("discr_csvV2", discr_csvV2, &b_discr_csvV2);
   fChain->SetBranchAddress("discr_deepCSV", discr_deepCSV, &b_discr_deepCSV);
   fChain->SetBranchAddress("discr_muByIp3", discr_muByIp3, &b_discr_muByIp3);
   fChain->SetBranchAddress("discr_muByPt", discr_muByPt, &b_discr_muByPt);
   fChain->SetBranchAddress("discr_prob", discr_prob, &b_discr_prob);
   fChain->SetBranchAddress("discr_probb", discr_probb, &b_discr_probb);
   fChain->SetBranchAddress("discr_tcHighEff", discr_tcHighEff, &b_discr_tcHighEff);
   fChain->SetBranchAddress("discr_tcHighPur", discr_tcHighPur, &b_discr_tcHighPur);
   fChain->SetBranchAddress("ndiscr_csvV2", ndiscr_csvV2, &b_ndiscr_csvV2);
   fChain->SetBranchAddress("pdiscr_csvV2", pdiscr_csvV2, &b_pdiscr_csvV2);
   fChain->SetBranchAddress("nsvtx", nsvtx, &b_nsvtx);
   fChain->SetBranchAddress("svType", &svType, &b_svType);
   fChain->SetBranchAddress("svtxntrk", &svtxntrk, &b_svtxntrk);
   fChain->SetBranchAddress("svtxdl", &svtxdl, &b_svtxdl);
   fChain->SetBranchAddress("svtxdls", &svtxdls, &b_svtxdls);
   fChain->SetBranchAddress("svtxdl2d", &svtxdl2d, &b_svtxdl2d);
   fChain->SetBranchAddress("svtxdls2d", &svtxdls2d, &b_svtxdls2d);
   fChain->SetBranchAddress("svtxm", &svtxm, &b_svtxm);
   fChain->SetBranchAddress("svtxpt", &svtxpt, &b_svtxpt);
   fChain->SetBranchAddress("svtxmcorr", svtxmcorr, &b_svtxmcorr);
   fChain->SetBranchAddress("nIPtrk", nIPtrk, &b_nIPtrk);
   fChain->SetBranchAddress("nselIPtrk", nselIPtrk, &b_nselIPtrk);
   fChain->SetBranchAddress("mue", mue, &b_mue);
   fChain->SetBranchAddress("mupt", mupt, &b_mupt);
   fChain->SetBranchAddress("mueta", mueta, &b_mueta);
   fChain->SetBranchAddress("muphi", muphi, &b_muphi);
   fChain->SetBranchAddress("mudr", mudr, &b_mudr);
   fChain->SetBranchAddress("muptrel", muptrel, &b_muptrel);
   fChain->SetBranchAddress("muchg", muchg, &b_muchg);
   fChain->SetBranchAddress("beamId1", &beamId1, &b_beamId1);
   fChain->SetBranchAddress("beamId2", &beamId2, &b_beamId2);
   fChain->SetBranchAddress("pthat", &pthat, &b_pthat);
   fChain->SetBranchAddress("refpt", refpt, &b_refpt);
   fChain->SetBranchAddress("refeta", refeta, &b_refeta);
   fChain->SetBranchAddress("refy", refy, &b_refy);
   fChain->SetBranchAddress("refphi", refphi, &b_refphi);
   fChain->SetBranchAddress("refm", refm, &b_refm);
   fChain->SetBranchAddress("refarea", refarea, &b_refarea);
   fChain->SetBranchAddress("reftau1", reftau1, &b_reftau1);
   fChain->SetBranchAddress("reftau2", reftau2, &b_reftau2);
   fChain->SetBranchAddress("reftau3", reftau3, &b_reftau3);
   fChain->SetBranchAddress("refdphijt", refdphijt, &b_refdphijt);
   fChain->SetBranchAddress("refdrjt", refdrjt, &b_refdrjt);
   fChain->SetBranchAddress("refparton_pt", refparton_pt, &b_refparton_pt);
   fChain->SetBranchAddress("refparton_flavor", refparton_flavor, &b_refparton_flavor);
   fChain->SetBranchAddress("refparton_flavorForB", refparton_flavorForB, &b_refparton_flavorForB);
   fChain->SetBranchAddress("genChargedSum", genChargedSum, &b_genChargedSum);
   fChain->SetBranchAddress("genHardSum", genHardSum, &b_genHardSum);
   fChain->SetBranchAddress("signalChargedSum", signalChargedSum, &b_signalChargedSum);
   fChain->SetBranchAddress("signalHardSum", signalHardSum, &b_signalHardSum);
   fChain->SetBranchAddress("subid", subid, &b_subid);
   fChain->SetBranchAddress("ngen", &ngen, &b_ngen);
   fChain->SetBranchAddress("genmatchindex", genmatchindex, &b_genmatchindex);
   fChain->SetBranchAddress("genpt", genpt, &b_genpt);
   fChain->SetBranchAddress("geneta", geneta, &b_geneta);
   fChain->SetBranchAddress("geny", geny, &b_geny);
   fChain->SetBranchAddress("gentau1", gentau1, &b_gentau1);
   fChain->SetBranchAddress("gentau2", gentau2, &b_gentau2);
   fChain->SetBranchAddress("gentau3", gentau3, &b_gentau3);
   fChain->SetBranchAddress("genphi", genphi, &b_genphi);
   fChain->SetBranchAddress("genm", genm, &b_genm);
   fChain->SetBranchAddress("gendphijt", gendphijt, &b_gendphijt);
   fChain->SetBranchAddress("gendrjt", gendrjt, &b_gendrjt);
   fChain->SetBranchAddress("gensubid", gensubid, &b_gensubid);
   Notify();
}

Bool_t jetTreeReaderPPMCGSP::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void jetTreeReaderPPMCGSP::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t jetTreeReaderPPMCGSP::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef jetTreeReaderPPMCGSP_cxx
