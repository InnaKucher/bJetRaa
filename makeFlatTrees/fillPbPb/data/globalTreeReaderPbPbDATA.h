//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Feb  5 10:24:07 2020 by ROOT version 6.18/04
// from TTree HltTree/
// found on file: /eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_MuEnriched_merged/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_MuEnriched_merged.root
//////////////////////////////////////////////////////////

#ifndef globalTreeReaderPbPbDATA_h
#define globalTreeReaderPbPbDATA_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class globalTreeReaderPbPbDATA {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           pfFilter;
   Int_t           ana_step;
   Int_t           pclusterCompatibilityFilter;
   Int_t           pprimaryVertexFilter;
   Int_t           pBeamScrapingFilter;
   Int_t           collisionEventSelectionAOD;
   Int_t           collisionEventSelectionAODv2;
   Int_t           phfCoincFilter1Th3;
   Int_t           phfCoincFilter2Th3;
   Int_t           phfCoincFilter3Th3;
   Int_t           phfCoincFilter4Th3;
   Int_t           phfCoincFilter5Th3;
   Int_t           phfCoincFilter1Th4;
   Int_t           phfCoincFilter2Th4;
   Int_t           phfCoincFilter3Th4;
   Int_t           phfCoincFilter4Th4;
   Int_t           phfCoincFilter5Th4;
   Int_t           phfCoincFilter1Th5;
   Int_t           phfCoincFilter4Th2;
   Int_t           pVertexFilterCutG;
   Int_t           pVertexFilterCutGloose;
   Int_t           pVertexFilterCutGtight;
   Int_t           pVertexFilterCutGplus;
   Int_t           pVertexFilterCutE;
   Int_t           pVertexFilterCutEandG;
   Int_t           pHBHENoiseFilterResultProducer;
   Int_t           HBHENoiseFilterResult;
   Int_t           HBHENoiseFilterResultRun1;
   Int_t           HBHENoiseFilterResultRun2Loose;
   Int_t           HBHENoiseFilterResultRun2Tight;
   Int_t           HBHEIsoNoiseFilterResult;
   Int_t           superFilterPath;

   // List of branches
   TBranch        *b_pfFilter;   //!
   TBranch        *b_ana_step;   //!
   TBranch        *b_pclusterCompatibilityFilter;   //!
   TBranch        *b_pprimaryVertexFilter;   //!
   TBranch        *b_pBeamScrapingFilter;   //!
   TBranch        *b_collisionEventSelectionAOD;   //!
   TBranch        *b_collisionEventSelectionAODv2;   //!
   TBranch        *b_phfCoincFilter1Th3;   //!
   TBranch        *b_phfCoincFilter2Th3;   //!
   TBranch        *b_phfCoincFilter3Th3;   //!
   TBranch        *b_phfCoincFilter4Th3;   //!
   TBranch        *b_phfCoincFilter5Th3;   //!
   TBranch        *b_phfCoincFilter1Th4;   //!
   TBranch        *b_phfCoincFilter2Th4;   //!
   TBranch        *b_phfCoincFilter3Th4;   //!
   TBranch        *b_phfCoincFilter4Th4;   //!
   TBranch        *b_phfCoincFilter5Th4;   //!
   TBranch        *b_phfCoincFilter1Th5;   //!
   TBranch        *b_phfCoincFilter4Th2;   //!
   TBranch        *b_pVertexFilterCutG;   //!
   TBranch        *b_pVertexFilterCutGloose;   //!
   TBranch        *b_pVertexFilterCutGtight;   //!
   TBranch        *b_pVertexFilterCutGplus;   //!
   TBranch        *b_pVertexFilterCutE;   //!
   TBranch        *b_pVertexFilterCutEandG;   //!
   TBranch        *b_pHBHENoiseFilterResultProducer;   //!
   TBranch        *b_HBHENoiseFilterResult;   //!
   TBranch        *b_HBHENoiseFilterResultRun1;   //!
   TBranch        *b_HBHENoiseFilterResultRun2Loose;   //!
   TBranch        *b_HBHENoiseFilterResultRun2Tight;   //!
   TBranch        *b_HBHEIsoNoiseFilterResult;   //!
   TBranch        *b_superFilterPath;   //!

   globalTreeReaderPbPbDATA(TTree *tree=0);
   virtual ~globalTreeReaderPbPbDATA();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef globalTreeReaderPbPbDATA_cxx
globalTreeReaderPbPbDATA::globalTreeReaderPbPbDATA(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_MuEnriched_merged/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_MuEnriched_merged.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_MuEnriched_merged/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_MuEnriched_merged.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_MuEnriched_merged/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_MuEnriched_merged.root:/skimanalysis");
      dir->GetObject("HltTree",tree);

   }
   Init(tree);
}

globalTreeReaderPbPbDATA::~globalTreeReaderPbPbDATA()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t globalTreeReaderPbPbDATA::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t globalTreeReaderPbPbDATA::LoadTree(Long64_t entry)
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

void globalTreeReaderPbPbDATA::Init(TTree *tree)
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

   fChain->SetBranchAddress("pfFilter", &pfFilter, &b_pfFilter);
   fChain->SetBranchAddress("ana_step", &ana_step, &b_ana_step);
   fChain->SetBranchAddress("pclusterCompatibilityFilter", &pclusterCompatibilityFilter, &b_pclusterCompatibilityFilter);
   fChain->SetBranchAddress("pprimaryVertexFilter", &pprimaryVertexFilter, &b_pprimaryVertexFilter);
   fChain->SetBranchAddress("pBeamScrapingFilter", &pBeamScrapingFilter, &b_pBeamScrapingFilter);
   fChain->SetBranchAddress("collisionEventSelectionAOD", &collisionEventSelectionAOD, &b_collisionEventSelectionAOD);
   fChain->SetBranchAddress("collisionEventSelectionAODv2", &collisionEventSelectionAODv2, &b_collisionEventSelectionAODv2);
   fChain->SetBranchAddress("phfCoincFilter1Th3", &phfCoincFilter1Th3, &b_phfCoincFilter1Th3);
   fChain->SetBranchAddress("phfCoincFilter2Th3", &phfCoincFilter2Th3, &b_phfCoincFilter2Th3);
   fChain->SetBranchAddress("phfCoincFilter3Th3", &phfCoincFilter3Th3, &b_phfCoincFilter3Th3);
   fChain->SetBranchAddress("phfCoincFilter4Th3", &phfCoincFilter4Th3, &b_phfCoincFilter4Th3);
   fChain->SetBranchAddress("phfCoincFilter5Th3", &phfCoincFilter5Th3, &b_phfCoincFilter5Th3);
   fChain->SetBranchAddress("phfCoincFilter1Th4", &phfCoincFilter1Th4, &b_phfCoincFilter1Th4);
   fChain->SetBranchAddress("phfCoincFilter2Th4", &phfCoincFilter2Th4, &b_phfCoincFilter2Th4);
   fChain->SetBranchAddress("phfCoincFilter3Th4", &phfCoincFilter3Th4, &b_phfCoincFilter3Th4);
   fChain->SetBranchAddress("phfCoincFilter4Th4", &phfCoincFilter4Th4, &b_phfCoincFilter4Th4);
   fChain->SetBranchAddress("phfCoincFilter5Th4", &phfCoincFilter5Th4, &b_phfCoincFilter5Th4);
   fChain->SetBranchAddress("phfCoincFilter1Th5", &phfCoincFilter1Th5, &b_phfCoincFilter1Th5);
   fChain->SetBranchAddress("phfCoincFilter4Th2", &phfCoincFilter4Th2, &b_phfCoincFilter4Th2);
   fChain->SetBranchAddress("pVertexFilterCutG", &pVertexFilterCutG, &b_pVertexFilterCutG);
   fChain->SetBranchAddress("pVertexFilterCutGloose", &pVertexFilterCutGloose, &b_pVertexFilterCutGloose);
   fChain->SetBranchAddress("pVertexFilterCutGtight", &pVertexFilterCutGtight, &b_pVertexFilterCutGtight);
   fChain->SetBranchAddress("pVertexFilterCutGplus", &pVertexFilterCutGplus, &b_pVertexFilterCutGplus);
   fChain->SetBranchAddress("pVertexFilterCutE", &pVertexFilterCutE, &b_pVertexFilterCutE);
   fChain->SetBranchAddress("pVertexFilterCutEandG", &pVertexFilterCutEandG, &b_pVertexFilterCutEandG);
   fChain->SetBranchAddress("pHBHENoiseFilterResultProducer", &pHBHENoiseFilterResultProducer, &b_pHBHENoiseFilterResultProducer);
   fChain->SetBranchAddress("HBHENoiseFilterResult", &HBHENoiseFilterResult, &b_HBHENoiseFilterResult);
   fChain->SetBranchAddress("HBHENoiseFilterResultRun1", &HBHENoiseFilterResultRun1, &b_HBHENoiseFilterResultRun1);
   fChain->SetBranchAddress("HBHENoiseFilterResultRun2Loose", &HBHENoiseFilterResultRun2Loose, &b_HBHENoiseFilterResultRun2Loose);
   fChain->SetBranchAddress("HBHENoiseFilterResultRun2Tight", &HBHENoiseFilterResultRun2Tight, &b_HBHENoiseFilterResultRun2Tight);
   fChain->SetBranchAddress("HBHEIsoNoiseFilterResult", &HBHEIsoNoiseFilterResult, &b_HBHEIsoNoiseFilterResult);
   fChain->SetBranchAddress("superFilterPath", &superFilterPath, &b_superFilterPath);
   Notify();
}

Bool_t globalTreeReaderPbPbDATA::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void globalTreeReaderPbPbDATA::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t globalTreeReaderPbPbDATA::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef globalTreeReaderPbPbDATA_cxx
