//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Mar 19 14:52:47 2020 by ROOT version 6.18/04
// from TTree HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v/trigger 0
// found on file: /eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HISingleMuon_MuEnriched_NewFilter_NewTriggerObj_merged/HISingleMuon_MuEnriched_NewFilter_NewTriggerObj_part0.root
//////////////////////////////////////////////////////////

#ifndef mujetObjTreeReaderPbPbDATA_h
#define mujetObjTreeReaderPbPbDATA_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class mujetObjTreeReaderPbPbDATA {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   vector<double>  *TriggerObjID;
   vector<double>  *pt;
   vector<double>  *eta;
   vector<double>  *phi;
   vector<double>  *mass;

   // List of branches
   TBranch        *b_TriggerObjID;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_mass;   //!

   mujetObjTreeReaderPbPbDATA(TTree *tree=0);
   virtual ~mujetObjTreeReaderPbPbDATA();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef mujetObjTreeReaderPbPbDATA_cxx
mujetObjTreeReaderPbPbDATA::mujetObjTreeReaderPbPbDATA(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HISingleMuon_MuEnriched_NewFilter_NewTriggerObj_merged/HISingleMuon_MuEnriched_NewFilter_NewTriggerObj_part0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HISingleMuon_MuEnriched_NewFilter_NewTriggerObj_merged/HISingleMuon_MuEnriched_NewFilter_NewTriggerObj_part0.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/HISingleMuon_MuEnriched_NewFilter_NewTriggerObj_merged/HISingleMuon_MuEnriched_NewFilter_NewTriggerObj_part0.root:/hltobject");
      dir->GetObject("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v",tree);

   }
   Init(tree);
}

mujetObjTreeReaderPbPbDATA::~mujetObjTreeReaderPbPbDATA()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t mujetObjTreeReaderPbPbDATA::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t mujetObjTreeReaderPbPbDATA::LoadTree(Long64_t entry)
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

void mujetObjTreeReaderPbPbDATA::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   TriggerObjID = 0;
   pt = 0;
   eta = 0;
   phi = 0;
   mass = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("TriggerObjID", &TriggerObjID, &b_TriggerObjID);
   fChain->SetBranchAddress("pt", &pt, &b_pt);
   fChain->SetBranchAddress("eta", &eta, &b_eta);
   fChain->SetBranchAddress("phi", &phi, &b_phi);
   fChain->SetBranchAddress("mass", &mass, &b_mass);
   Notify();
}

Bool_t mujetObjTreeReaderPbPbDATA::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void mujetObjTreeReaderPbPbDATA::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t mujetObjTreeReaderPbPbDATA::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef mujetObjTreeReaderPbPbDATA_cxx
