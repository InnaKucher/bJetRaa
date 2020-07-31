//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Feb 19 10:16:27 2020 by ROOT version 6.18/04
// from TTree HltTree/
// found on file: QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged.root
//////////////////////////////////////////////////////////

#ifndef globalTreeReaderPPMC_h
#define globalTreeReaderPPMC_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class globalTreeReaderPPMC {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           ana_step;
   Int_t           pHBHENoiseFilterResultProducer;
   Int_t           HBHENoiseFilterResult;
   Int_t           HBHENoiseFilterResultRun1;
   Int_t           HBHENoiseFilterResultRun2Loose;
   Int_t           HBHENoiseFilterResultRun2Tight;
   Int_t           HBHEIsoNoiseFilterResult;
   Int_t           pPAprimaryVertexFilter;
   Int_t           pBeamScrapingFilter;
   Int_t           pVertexFilterCutG;
   Int_t           pVertexFilterCutGloose;
   Int_t           pVertexFilterCutGtight;
   Int_t           pVertexFilterCutGplus;
   Int_t           pVertexFilterCutE;
   Int_t           pVertexFilterCutEandG;
   Int_t           superFilterPath;

   // List of branches
   TBranch        *b_ana_step;   //!
   TBranch        *b_pHBHENoiseFilterResultProducer;   //!
   TBranch        *b_HBHENoiseFilterResult;   //!
   TBranch        *b_HBHENoiseFilterResultRun1;   //!
   TBranch        *b_HBHENoiseFilterResultRun2Loose;   //!
   TBranch        *b_HBHENoiseFilterResultRun2Tight;   //!
   TBranch        *b_HBHEIsoNoiseFilterResult;   //!
   TBranch        *b_pPAprimaryVertexFilter;   //!
   TBranch        *b_pBeamScrapingFilter;   //!
   TBranch        *b_pVertexFilterCutG;   //!
   TBranch        *b_pVertexFilterCutGloose;   //!
   TBranch        *b_pVertexFilterCutGtight;   //!
   TBranch        *b_pVertexFilterCutGplus;   //!
   TBranch        *b_pVertexFilterCutE;   //!
   TBranch        *b_pVertexFilterCutEandG;   //!
   TBranch        *b_superFilterPath;   //!

   globalTreeReaderPPMC(TTree *tree=0);
   virtual ~globalTreeReaderPPMC();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef globalTreeReaderPPMC_cxx
globalTreeReaderPPMC::globalTreeReaderPPMC(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged.root:/skimanalysis");
      dir->GetObject("HltTree",tree);

   }
   Init(tree);
}

globalTreeReaderPPMC::~globalTreeReaderPPMC()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t globalTreeReaderPPMC::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t globalTreeReaderPPMC::LoadTree(Long64_t entry)
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

void globalTreeReaderPPMC::Init(TTree *tree)
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

   fChain->SetBranchAddress("ana_step", &ana_step, &b_ana_step);
   fChain->SetBranchAddress("pHBHENoiseFilterResultProducer", &pHBHENoiseFilterResultProducer, &b_pHBHENoiseFilterResultProducer);
   fChain->SetBranchAddress("HBHENoiseFilterResult", &HBHENoiseFilterResult, &b_HBHENoiseFilterResult);
   fChain->SetBranchAddress("HBHENoiseFilterResultRun1", &HBHENoiseFilterResultRun1, &b_HBHENoiseFilterResultRun1);
   fChain->SetBranchAddress("HBHENoiseFilterResultRun2Loose", &HBHENoiseFilterResultRun2Loose, &b_HBHENoiseFilterResultRun2Loose);
   fChain->SetBranchAddress("HBHENoiseFilterResultRun2Tight", &HBHENoiseFilterResultRun2Tight, &b_HBHENoiseFilterResultRun2Tight);
   fChain->SetBranchAddress("HBHEIsoNoiseFilterResult", &HBHEIsoNoiseFilterResult, &b_HBHEIsoNoiseFilterResult);
   fChain->SetBranchAddress("pPAprimaryVertexFilter", &pPAprimaryVertexFilter, &b_pPAprimaryVertexFilter);
   fChain->SetBranchAddress("pBeamScrapingFilter", &pBeamScrapingFilter, &b_pBeamScrapingFilter);
   fChain->SetBranchAddress("pVertexFilterCutG", &pVertexFilterCutG, &b_pVertexFilterCutG);
   fChain->SetBranchAddress("pVertexFilterCutGloose", &pVertexFilterCutGloose, &b_pVertexFilterCutGloose);
   fChain->SetBranchAddress("pVertexFilterCutGtight", &pVertexFilterCutGtight, &b_pVertexFilterCutGtight);
   fChain->SetBranchAddress("pVertexFilterCutGplus", &pVertexFilterCutGplus, &b_pVertexFilterCutGplus);
   fChain->SetBranchAddress("pVertexFilterCutE", &pVertexFilterCutE, &b_pVertexFilterCutE);
   fChain->SetBranchAddress("pVertexFilterCutEandG", &pVertexFilterCutEandG, &b_pVertexFilterCutEandG);
   fChain->SetBranchAddress("superFilterPath", &superFilterPath, &b_superFilterPath);
   Notify();
}

Bool_t globalTreeReaderPPMC::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void globalTreeReaderPPMC::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t globalTreeReaderPPMC::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef globalTreeReaderPPMC_cxx
