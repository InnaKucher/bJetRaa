//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Feb 19 10:15:46 2020 by ROOT version 6.18/04
// from TTree HltTree/
// found on file: QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged.root
//////////////////////////////////////////////////////////

#ifndef hltTreeReaderPPMC_h
#define hltTreeReaderPPMC_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class hltTreeReaderPPMC {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   ULong64_t       Event;
   Int_t           LumiBlock;
   Int_t           Run;
   Int_t           Bx;
   Int_t           Orbit;
   Double_t        AvgInstDelLumi;
   Int_t           HLT_HIAK4CaloJet100_v1;
   Int_t           HLT_HIAK4CaloJet100_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet120_v1;
   Int_t           HLT_HIAK4CaloJet120_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet15_v1;
   Int_t           HLT_HIAK4CaloJet15_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet30FWD_v1;
   Int_t           HLT_HIAK4CaloJet30FWD_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet30_v1;
   Int_t           HLT_HIAK4CaloJet30_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet40FWD_v1;
   Int_t           HLT_HIAK4CaloJet40FWD_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet40_v1;
   Int_t           HLT_HIAK4CaloJet40_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet60FWD_v1;
   Int_t           HLT_HIAK4CaloJet60FWD_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet60_v1;
   Int_t           HLT_HIAK4CaloJet60_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet80FWD_v1;
   Int_t           HLT_HIAK4CaloJet80FWD_v1_Prescl;
   Int_t           HLT_HIAK4CaloJet80_v1;
   Int_t           HLT_HIAK4CaloJet80_v1_Prescl;
   Int_t           HLT_HIAK4PFJet100_v1;
   Int_t           HLT_HIAK4PFJet100_v1_Prescl;
   Int_t           HLT_HIAK4PFJet120_v1;
   Int_t           HLT_HIAK4PFJet120_v1_Prescl;
   Int_t           HLT_HIAK4PFJet15_v1;
   Int_t           HLT_HIAK4PFJet15_v1_Prescl;
   Int_t           HLT_HIAK4PFJet30FWD_v1;
   Int_t           HLT_HIAK4PFJet30FWD_v1_Prescl;
   Int_t           HLT_HIAK4PFJet30_bTag_v1;
   Int_t           HLT_HIAK4PFJet30_bTag_v1_Prescl;
   Int_t           HLT_HIAK4PFJet30_v1;
   Int_t           HLT_HIAK4PFJet30_v1_Prescl;
   Int_t           HLT_HIAK4PFJet40FWD_v1;
   Int_t           HLT_HIAK4PFJet40FWD_v1_Prescl;
   Int_t           HLT_HIAK4PFJet40_bTag_v1;
   Int_t           HLT_HIAK4PFJet40_bTag_v1_Prescl;
   Int_t           HLT_HIAK4PFJet40_v1;
   Int_t           HLT_HIAK4PFJet40_v1_Prescl;
   Int_t           HLT_HIAK4PFJet60FWD_v1;
   Int_t           HLT_HIAK4PFJet60FWD_v1_Prescl;
   Int_t           HLT_HIAK4PFJet60_bTag_v1;
   Int_t           HLT_HIAK4PFJet60_bTag_v1_Prescl;
   Int_t           HLT_HIAK4PFJet60_v1;
   Int_t           HLT_HIAK4PFJet60_v1_Prescl;
   Int_t           HLT_HIAK4PFJet80FWD_v1;
   Int_t           HLT_HIAK4PFJet80FWD_v1_Prescl;
   Int_t           HLT_HIAK4PFJet80_bTag_v1;
   Int_t           HLT_HIAK4PFJet80_bTag_v1_Prescl;
   Int_t           HLT_HIAK4PFJet80_v1;
   Int_t           HLT_HIAK4PFJet80_v1_Prescl;
   Int_t           HLT_HIAK8PFJet140_v1;
   Int_t           HLT_HIAK8PFJet140_v1_Prescl;
   Int_t           HLT_HIAK8PFJet15_v1;
   Int_t           HLT_HIAK8PFJet15_v1_Prescl;
   Int_t           HLT_HIAK8PFJet25_v1;
   Int_t           HLT_HIAK8PFJet25_v1_Prescl;
   Int_t           HLT_HIAK8PFJet40_v1;
   Int_t           HLT_HIAK8PFJet40_v1_Prescl;
   Int_t           HLT_HIAK8PFJet60_v1;
   Int_t           HLT_HIAK8PFJet60_v1_Prescl;
   Int_t           HLT_HIAK8PFJet80_v1;
   Int_t           HLT_HIAK8PFJet80_v1_Prescl;
   Int_t           HLT_HIAK8PFJetFwd140_v1;
   Int_t           HLT_HIAK8PFJetFwd140_v1_Prescl;
   Int_t           HLT_HIAK8PFJetFwd15_v1;
   Int_t           HLT_HIAK8PFJetFwd15_v1_Prescl;
   Int_t           HLT_HIAK8PFJetFwd25_v1;
   Int_t           HLT_HIAK8PFJetFwd25_v1_Prescl;
   Int_t           HLT_HIAK8PFJetFwd40_v1;
   Int_t           HLT_HIAK8PFJetFwd40_v1_Prescl;
   Int_t           HLT_HIAK8PFJetFwd60_v1;
   Int_t           HLT_HIAK8PFJetFwd60_v1_Prescl;
   Int_t           HLT_HIAK8PFJetFwd80_v1;
   Int_t           HLT_HIAK8PFJetFwd80_v1_Prescl;
   Int_t           HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1;
   Int_t           HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1_Prescl;
   Int_t           HLT_HIDiPFJet15_NoCaloMatched_v1;
   Int_t           HLT_HIDiPFJet15_NoCaloMatched_v1_Prescl;
   Int_t           HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1;
   Int_t           HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1_Prescl;
   Int_t           HLT_HIDiPFJet25_NoCaloMatched_v1;
   Int_t           HLT_HIDiPFJet25_NoCaloMatched_v1_Prescl;
   Int_t           HLT_HIDiPFJetAve15_HFJEC_v1;
   Int_t           HLT_HIDiPFJetAve15_HFJEC_v1_Prescl;
   Int_t           HLT_HIDiPFJetAve25_HFJEC_v1;
   Int_t           HLT_HIDiPFJetAve25_HFJEC_v1_Prescl;
   Int_t           HLT_HIDiPFJetAve35_HFJEC_v1;
   Int_t           HLT_HIDiPFJetAve35_HFJEC_v1_Prescl;
   Int_t           HLT_HIDijet16And12_MidEta2p7_Dpt10_v1;
   Int_t           HLT_HIDijet16And12_MidEta2p7_Dpt10_v1_Prescl;
   Int_t           HLT_HIDijet16And8_MidEta2p7_Dpt8_v1;
   Int_t           HLT_HIDijet16And8_MidEta2p7_Dpt8_v1_Prescl;
   Int_t           HLT_HIDijet20And12_MidEta2p7_Dpt10_v1;
   Int_t           HLT_HIDijet20And12_MidEta2p7_Dpt10_v1_Prescl;
   Int_t           HLT_HIDijet20And8_MidEta2p7_Dpt8_v1;
   Int_t           HLT_HIDijet20And8_MidEta2p7_Dpt8_v1_Prescl;
   Int_t           HLT_HIDijet28And16_MidEta2p7_Dpt15_v1;
   Int_t           HLT_HIDijet28And16_MidEta2p7_Dpt15_v1_Prescl;
   Int_t           HLT_HIL3Mu5_AK4PFJet30_v1;
   Int_t           HLT_HIL3Mu5_AK4PFJet30_v1_Prescl;
   Int_t           HLT_HIL3Mu5_AK4PFJet40_v1;
   Int_t           HLT_HIL3Mu5_AK4PFJet40_v1_Prescl;
   Int_t           HLT_HIL3Mu5_AK4PFJet60_v1;
   Int_t           HLT_HIL3Mu5_AK4PFJet60_v1_Prescl;
   Int_t           HLT_HIPFJet140_v1;
   Int_t           HLT_HIPFJet140_v1_Prescl;
   Int_t           HLT_HIPFJet25_v1;
   Int_t           HLT_HIPFJet25_v1_Prescl;
   Int_t           HLT_HIPFJetFwd140_v1;
   Int_t           HLT_HIPFJetFwd140_v1_Prescl;
   Int_t           HLT_HIPFJetFwd15_v1;
   Int_t           HLT_HIPFJetFwd15_v1_Prescl;
   Int_t           HLT_HIPFJetFwd25_v1;
   Int_t           HLT_HIPFJetFwd25_v1_Prescl;
   Int_t           HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1;
   Int_t           HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1_Prescl;
   Int_t           HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1;
   Int_t           HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1_Prescl;
   Int_t           L1_DoubleJet100er2p7;
   Int_t           L1_DoubleJet100er2p7_Prescl;
   Int_t           L1_DoubleJet112er2p7;
   Int_t           L1_DoubleJet112er2p7_Prescl;
   Int_t           L1_DoubleJet120er2p7;
   Int_t           L1_DoubleJet120er2p7_Prescl;
   Int_t           L1_DoubleJet150er2p7;
   Int_t           L1_DoubleJet150er2p7_Prescl;
   Int_t           L1_DoubleJet16And12er2p7;
   Int_t           L1_DoubleJet16And12er2p7_Prescl;
   Int_t           L1_DoubleJet16And8er2p7;
   Int_t           L1_DoubleJet16And8er2p7_Prescl;
   Int_t           L1_DoubleJet20And12er2p7;
   Int_t           L1_DoubleJet20And12er2p7_Prescl;
   Int_t           L1_DoubleJet20And8er2p7;
   Int_t           L1_DoubleJet20And8er2p7_Prescl;
   Int_t           L1_DoubleJet28And16er2p7;
   Int_t           L1_DoubleJet28And16er2p7_Prescl;
   Int_t           L1_DoubleJet40er2p7;
   Int_t           L1_DoubleJet40er2p7_Prescl;
   Int_t           L1_DoubleJet50er2p7;
   Int_t           L1_DoubleJet50er2p7_Prescl;
   Int_t           L1_DoubleJet60er2p7;
   Int_t           L1_DoubleJet60er2p7_Prescl;
   Int_t           L1_DoubleJet80er2p7;
   Int_t           L1_DoubleJet80er2p7_Prescl;
   Int_t           L1_SingleJet120;
   Int_t           L1_SingleJet120_Prescl;
   Int_t           L1_SingleJet140;
   Int_t           L1_SingleJet140_Prescl;
   Int_t           L1_SingleJet150;
   Int_t           L1_SingleJet150_Prescl;
   Int_t           L1_SingleJet16;
   Int_t           L1_SingleJet16_Prescl;
   Int_t           L1_SingleJet160;
   Int_t           L1_SingleJet160_Prescl;
   Int_t           L1_SingleJet170;
   Int_t           L1_SingleJet170_Prescl;
   Int_t           L1_SingleJet180;
   Int_t           L1_SingleJet180_Prescl;
   Int_t           L1_SingleJet20;
   Int_t           L1_SingleJet20_Prescl;
   Int_t           L1_SingleJet200;
   Int_t           L1_SingleJet200_Prescl;
   Int_t           L1_SingleJet20_FWD;
   Int_t           L1_SingleJet20_FWD_Prescl;
   Int_t           L1_SingleJet24;
   Int_t           L1_SingleJet24_Prescl;
   Int_t           L1_SingleJet32;
   Int_t           L1_SingleJet32_Prescl;
   Int_t           L1_SingleJet35;
   Int_t           L1_SingleJet35_Prescl;
   Int_t           L1_SingleJet35_FWD;
   Int_t           L1_SingleJet35_FWD_Prescl;
   Int_t           L1_SingleJet44;
   Int_t           L1_SingleJet44_Prescl;
   Int_t           L1_SingleJet60;
   Int_t           L1_SingleJet60_Prescl;
   Int_t           L1_SingleJet60_FWD;
   Int_t           L1_SingleJet60_FWD_Prescl;
   Int_t           L1_SingleJet80;
   Int_t           L1_SingleJet80_Prescl;
   Int_t           L1_SingleJet8_BptxAND;
   Int_t           L1_SingleJet8_BptxAND_Prescl;
   Int_t           L1_SingleJet90;
   Int_t           L1_SingleJet90_Prescl;
   Int_t           L1_SingleJet90_FWD;
   Int_t           L1_SingleJet90_FWD_Prescl;
   Int_t           L1_DoubleJet8er2p7;
   Int_t           L1_DoubleJet8er2p7_Prescl;
   Int_t           L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3;
   Int_t           L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl;
   Int_t           L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3;
   Int_t           L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl;
   Int_t           L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3;
   Int_t           L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl;
   Int_t           L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3;
   Int_t           L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl;
   Int_t           L1_SingleJet120_FWD;
   Int_t           L1_SingleJet120_FWD_Prescl;
   Int_t           L1_SingleJet12_BptxAND;
   Int_t           L1_SingleJet12_BptxAND_Prescl;
   Int_t           L1_SingleJet20er2p7_NotBptxOR;
   Int_t           L1_SingleJet20er2p7_NotBptxOR_Prescl;
   Int_t           L1_SingleJet20er2p7_NotBptxOR_3BX;
   Int_t           L1_SingleJet20er2p7_NotBptxOR_3BX_Prescl;
   Int_t           L1_SingleJet28;
   Int_t           L1_SingleJet28_Prescl;
   Int_t           L1_SingleJet40;
   Int_t           L1_SingleJet40_Prescl;
   Int_t           L1_SingleJet40_FWD;
   Int_t           L1_SingleJet40_FWD_Prescl;
   Int_t           L1_SingleJet43er2p7_NotBptxOR_3BX;
   Int_t           L1_SingleJet43er2p7_NotBptxOR_3BX_Prescl;
   Int_t           L1_SingleJet46er2p7_NotBptxOR_3BX;
   Int_t           L1_SingleJet46er2p7_NotBptxOR_3BX_Prescl;
   Int_t           L1_SingleJet48;
   Int_t           L1_SingleJet48_Prescl;
   Int_t           L1_SingleJet50;
   Int_t           L1_SingleJet50_Prescl;
   Int_t           L1_SingleJet50_FWD;
   Int_t           L1_SingleJet50_FWD_Prescl;
   Int_t           L1_SingleJet56;
   Int_t           L1_SingleJet56_Prescl;

   // List of branches
   TBranch        *b_Event;   //!
   TBranch        *b_LumiBlock;   //!
   TBranch        *b_Run;   //!
   TBranch        *b_Bx;   //!
   TBranch        *b_Orbit;   //!
   TBranch        *b_AvgInstDelLumi;   //!
   TBranch        *b_HLT_HIAK4CaloJet100_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet100_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet120_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet120_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet15_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet15_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet30FWD_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet30FWD_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet30_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet30_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet40FWD_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet40FWD_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet40_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet40_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet60FWD_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet60FWD_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet60_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet60_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet80FWD_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet80FWD_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4CaloJet80_v1;   //!
   TBranch        *b_HLT_HIAK4CaloJet80_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet100_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet100_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet120_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet120_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet15_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet15_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet30FWD_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet30FWD_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet30_bTag_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet30_bTag_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet30_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet30_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet40FWD_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet40FWD_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet40_bTag_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet40_bTag_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet40_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet40_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet60FWD_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet60FWD_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet60_bTag_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet60_bTag_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet60_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet60_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet80FWD_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet80FWD_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet80_bTag_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet80_bTag_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK4PFJet80_v1;   //!
   TBranch        *b_HLT_HIAK4PFJet80_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJet140_v1;   //!
   TBranch        *b_HLT_HIAK8PFJet140_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJet15_v1;   //!
   TBranch        *b_HLT_HIAK8PFJet15_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJet25_v1;   //!
   TBranch        *b_HLT_HIAK8PFJet25_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJet40_v1;   //!
   TBranch        *b_HLT_HIAK8PFJet40_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJet60_v1;   //!
   TBranch        *b_HLT_HIAK8PFJet60_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJet80_v1;   //!
   TBranch        *b_HLT_HIAK8PFJet80_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd140_v1;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd140_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd15_v1;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd15_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd25_v1;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd25_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd40_v1;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd40_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd60_v1;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd60_v1_Prescl;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd80_v1;   //!
   TBranch        *b_HLT_HIAK8PFJetFwd80_v1_Prescl;   //!
   TBranch        *b_HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1;   //!
   TBranch        *b_HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1_Prescl;   //!
   TBranch        *b_HLT_HIDiPFJet15_NoCaloMatched_v1;   //!
   TBranch        *b_HLT_HIDiPFJet15_NoCaloMatched_v1_Prescl;   //!
   TBranch        *b_HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1;   //!
   TBranch        *b_HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1_Prescl;   //!
   TBranch        *b_HLT_HIDiPFJet25_NoCaloMatched_v1;   //!
   TBranch        *b_HLT_HIDiPFJet25_NoCaloMatched_v1_Prescl;   //!
   TBranch        *b_HLT_HIDiPFJetAve15_HFJEC_v1;   //!
   TBranch        *b_HLT_HIDiPFJetAve15_HFJEC_v1_Prescl;   //!
   TBranch        *b_HLT_HIDiPFJetAve25_HFJEC_v1;   //!
   TBranch        *b_HLT_HIDiPFJetAve25_HFJEC_v1_Prescl;   //!
   TBranch        *b_HLT_HIDiPFJetAve35_HFJEC_v1;   //!
   TBranch        *b_HLT_HIDiPFJetAve35_HFJEC_v1_Prescl;   //!
   TBranch        *b_HLT_HIDijet16And12_MidEta2p7_Dpt10_v1;   //!
   TBranch        *b_HLT_HIDijet16And12_MidEta2p7_Dpt10_v1_Prescl;   //!
   TBranch        *b_HLT_HIDijet16And8_MidEta2p7_Dpt8_v1;   //!
   TBranch        *b_HLT_HIDijet16And8_MidEta2p7_Dpt8_v1_Prescl;   //!
   TBranch        *b_HLT_HIDijet20And12_MidEta2p7_Dpt10_v1;   //!
   TBranch        *b_HLT_HIDijet20And12_MidEta2p7_Dpt10_v1_Prescl;   //!
   TBranch        *b_HLT_HIDijet20And8_MidEta2p7_Dpt8_v1;   //!
   TBranch        *b_HLT_HIDijet20And8_MidEta2p7_Dpt8_v1_Prescl;   //!
   TBranch        *b_HLT_HIDijet28And16_MidEta2p7_Dpt15_v1;   //!
   TBranch        *b_HLT_HIDijet28And16_MidEta2p7_Dpt15_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5_AK4PFJet30_v1;   //!
   TBranch        *b_HLT_HIL3Mu5_AK4PFJet30_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5_AK4PFJet40_v1;   //!
   TBranch        *b_HLT_HIL3Mu5_AK4PFJet40_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5_AK4PFJet60_v1;   //!
   TBranch        *b_HLT_HIL3Mu5_AK4PFJet60_v1_Prescl;   //!
   TBranch        *b_HLT_HIPFJet140_v1;   //!
   TBranch        *b_HLT_HIPFJet140_v1_Prescl;   //!
   TBranch        *b_HLT_HIPFJet25_v1;   //!
   TBranch        *b_HLT_HIPFJet25_v1_Prescl;   //!
   TBranch        *b_HLT_HIPFJetFwd140_v1;   //!
   TBranch        *b_HLT_HIPFJetFwd140_v1_Prescl;   //!
   TBranch        *b_HLT_HIPFJetFwd15_v1;   //!
   TBranch        *b_HLT_HIPFJetFwd15_v1_Prescl;   //!
   TBranch        *b_HLT_HIPFJetFwd25_v1;   //!
   TBranch        *b_HLT_HIPFJetFwd25_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1;   //!
   TBranch        *b_HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1;   //!
   TBranch        *b_HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1_Prescl;   //!
   TBranch        *b_L1_DoubleJet100er2p7;   //!
   TBranch        *b_L1_DoubleJet100er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet112er2p7;   //!
   TBranch        *b_L1_DoubleJet112er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet120er2p7;   //!
   TBranch        *b_L1_DoubleJet120er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet150er2p7;   //!
   TBranch        *b_L1_DoubleJet150er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet16And12er2p7;   //!
   TBranch        *b_L1_DoubleJet16And12er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet16And8er2p7;   //!
   TBranch        *b_L1_DoubleJet16And8er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet20And12er2p7;   //!
   TBranch        *b_L1_DoubleJet20And12er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet20And8er2p7;   //!
   TBranch        *b_L1_DoubleJet20And8er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet28And16er2p7;   //!
   TBranch        *b_L1_DoubleJet28And16er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet40er2p7;   //!
   TBranch        *b_L1_DoubleJet40er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet50er2p7;   //!
   TBranch        *b_L1_DoubleJet50er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet60er2p7;   //!
   TBranch        *b_L1_DoubleJet60er2p7_Prescl;   //!
   TBranch        *b_L1_DoubleJet80er2p7;   //!
   TBranch        *b_L1_DoubleJet80er2p7_Prescl;   //!
   TBranch        *b_L1_SingleJet120;   //!
   TBranch        *b_L1_SingleJet120_Prescl;   //!
   TBranch        *b_L1_SingleJet140;   //!
   TBranch        *b_L1_SingleJet140_Prescl;   //!
   TBranch        *b_L1_SingleJet150;   //!
   TBranch        *b_L1_SingleJet150_Prescl;   //!
   TBranch        *b_L1_SingleJet16;   //!
   TBranch        *b_L1_SingleJet16_Prescl;   //!
   TBranch        *b_L1_SingleJet160;   //!
   TBranch        *b_L1_SingleJet160_Prescl;   //!
   TBranch        *b_L1_SingleJet170;   //!
   TBranch        *b_L1_SingleJet170_Prescl;   //!
   TBranch        *b_L1_SingleJet180;   //!
   TBranch        *b_L1_SingleJet180_Prescl;   //!
   TBranch        *b_L1_SingleJet20;   //!
   TBranch        *b_L1_SingleJet20_Prescl;   //!
   TBranch        *b_L1_SingleJet200;   //!
   TBranch        *b_L1_SingleJet200_Prescl;   //!
   TBranch        *b_L1_SingleJet20_FWD;   //!
   TBranch        *b_L1_SingleJet20_FWD_Prescl;   //!
   TBranch        *b_L1_SingleJet24;   //!
   TBranch        *b_L1_SingleJet24_Prescl;   //!
   TBranch        *b_L1_SingleJet32;   //!
   TBranch        *b_L1_SingleJet32_Prescl;   //!
   TBranch        *b_L1_SingleJet35;   //!
   TBranch        *b_L1_SingleJet35_Prescl;   //!
   TBranch        *b_L1_SingleJet35_FWD;   //!
   TBranch        *b_L1_SingleJet35_FWD_Prescl;   //!
   TBranch        *b_L1_SingleJet44;   //!
   TBranch        *b_L1_SingleJet44_Prescl;   //!
   TBranch        *b_L1_SingleJet60;   //!
   TBranch        *b_L1_SingleJet60_Prescl;   //!
   TBranch        *b_L1_SingleJet60_FWD;   //!
   TBranch        *b_L1_SingleJet60_FWD_Prescl;   //!
   TBranch        *b_L1_SingleJet80;   //!
   TBranch        *b_L1_SingleJet80_Prescl;   //!
   TBranch        *b_L1_SingleJet8_BptxAND;   //!
   TBranch        *b_L1_SingleJet8_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet90;   //!
   TBranch        *b_L1_SingleJet90_Prescl;   //!
   TBranch        *b_L1_SingleJet90_FWD;   //!
   TBranch        *b_L1_SingleJet90_FWD_Prescl;   //!
   TBranch        *b_L1_DoubleJet8er2p7;   //!
   TBranch        *b_L1_DoubleJet8er2p7_Prescl;   //!
   TBranch        *b_L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl;   //!
   TBranch        *b_L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl;   //!
   TBranch        *b_L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3;   //!
   TBranch        *b_L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl;   //!
   TBranch        *b_L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3;   //!
   TBranch        *b_L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl;   //!
   TBranch        *b_L1_SingleJet120_FWD;   //!
   TBranch        *b_L1_SingleJet120_FWD_Prescl;   //!
   TBranch        *b_L1_SingleJet12_BptxAND;   //!
   TBranch        *b_L1_SingleJet12_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet20er2p7_NotBptxOR;   //!
   TBranch        *b_L1_SingleJet20er2p7_NotBptxOR_Prescl;   //!
   TBranch        *b_L1_SingleJet20er2p7_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet20er2p7_NotBptxOR_3BX_Prescl;   //!
   TBranch        *b_L1_SingleJet28;   //!
   TBranch        *b_L1_SingleJet28_Prescl;   //!
   TBranch        *b_L1_SingleJet40;   //!
   TBranch        *b_L1_SingleJet40_Prescl;   //!
   TBranch        *b_L1_SingleJet40_FWD;   //!
   TBranch        *b_L1_SingleJet40_FWD_Prescl;   //!
   TBranch        *b_L1_SingleJet43er2p7_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet43er2p7_NotBptxOR_3BX_Prescl;   //!
   TBranch        *b_L1_SingleJet46er2p7_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet46er2p7_NotBptxOR_3BX_Prescl;   //!
   TBranch        *b_L1_SingleJet48;   //!
   TBranch        *b_L1_SingleJet48_Prescl;   //!
   TBranch        *b_L1_SingleJet50;   //!
   TBranch        *b_L1_SingleJet50_Prescl;   //!
   TBranch        *b_L1_SingleJet50_FWD;   //!
   TBranch        *b_L1_SingleJet50_FWD_Prescl;   //!
   TBranch        *b_L1_SingleJet56;   //!
   TBranch        *b_L1_SingleJet56_Prescl;   //!

   hltTreeReaderPPMC(TTree *tree=0);
   virtual ~hltTreeReaderPPMC();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef hltTreeReaderPPMC_cxx
hltTreeReaderPPMC::hltTreeReaderPPMC(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged/QCD_pThat-15_Dijet_TuneCP5_5p02TeV_pythia8_ppRef5TeV_MuJet_merged.root:/hltanalysis");
      dir->GetObject("HltTree",tree);

   }
   Init(tree);
}

hltTreeReaderPPMC::~hltTreeReaderPPMC()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t hltTreeReaderPPMC::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t hltTreeReaderPPMC::LoadTree(Long64_t entry)
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

void hltTreeReaderPPMC::Init(TTree *tree)
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

   fChain->SetBranchAddress("Event", &Event, &b_Event);
   fChain->SetBranchAddress("LumiBlock", &LumiBlock, &b_LumiBlock);
   fChain->SetBranchAddress("Run", &Run, &b_Run);
   fChain->SetBranchAddress("Bx", &Bx, &b_Bx);
   fChain->SetBranchAddress("Orbit", &Orbit, &b_Orbit);
   fChain->SetBranchAddress("AvgInstDelLumi", &AvgInstDelLumi, &b_AvgInstDelLumi);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet100_v1", &HLT_HIAK4CaloJet100_v1, &b_HLT_HIAK4CaloJet100_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet100_v1_Prescl", &HLT_HIAK4CaloJet100_v1_Prescl, &b_HLT_HIAK4CaloJet100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet120_v1", &HLT_HIAK4CaloJet120_v1, &b_HLT_HIAK4CaloJet120_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet120_v1_Prescl", &HLT_HIAK4CaloJet120_v1_Prescl, &b_HLT_HIAK4CaloJet120_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet15_v1", &HLT_HIAK4CaloJet15_v1, &b_HLT_HIAK4CaloJet15_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet15_v1_Prescl", &HLT_HIAK4CaloJet15_v1_Prescl, &b_HLT_HIAK4CaloJet15_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet30FWD_v1", &HLT_HIAK4CaloJet30FWD_v1, &b_HLT_HIAK4CaloJet30FWD_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet30FWD_v1_Prescl", &HLT_HIAK4CaloJet30FWD_v1_Prescl, &b_HLT_HIAK4CaloJet30FWD_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet30_v1", &HLT_HIAK4CaloJet30_v1, &b_HLT_HIAK4CaloJet30_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet30_v1_Prescl", &HLT_HIAK4CaloJet30_v1_Prescl, &b_HLT_HIAK4CaloJet30_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet40FWD_v1", &HLT_HIAK4CaloJet40FWD_v1, &b_HLT_HIAK4CaloJet40FWD_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet40FWD_v1_Prescl", &HLT_HIAK4CaloJet40FWD_v1_Prescl, &b_HLT_HIAK4CaloJet40FWD_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet40_v1", &HLT_HIAK4CaloJet40_v1, &b_HLT_HIAK4CaloJet40_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet40_v1_Prescl", &HLT_HIAK4CaloJet40_v1_Prescl, &b_HLT_HIAK4CaloJet40_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet60FWD_v1", &HLT_HIAK4CaloJet60FWD_v1, &b_HLT_HIAK4CaloJet60FWD_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet60FWD_v1_Prescl", &HLT_HIAK4CaloJet60FWD_v1_Prescl, &b_HLT_HIAK4CaloJet60FWD_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet60_v1", &HLT_HIAK4CaloJet60_v1, &b_HLT_HIAK4CaloJet60_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet60_v1_Prescl", &HLT_HIAK4CaloJet60_v1_Prescl, &b_HLT_HIAK4CaloJet60_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet80FWD_v1", &HLT_HIAK4CaloJet80FWD_v1, &b_HLT_HIAK4CaloJet80FWD_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet80FWD_v1_Prescl", &HLT_HIAK4CaloJet80FWD_v1_Prescl, &b_HLT_HIAK4CaloJet80FWD_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet80_v1", &HLT_HIAK4CaloJet80_v1, &b_HLT_HIAK4CaloJet80_v1);
   fChain->SetBranchAddress("HLT_HIAK4CaloJet80_v1_Prescl", &HLT_HIAK4CaloJet80_v1_Prescl, &b_HLT_HIAK4CaloJet80_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet100_v1", &HLT_HIAK4PFJet100_v1, &b_HLT_HIAK4PFJet100_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet100_v1_Prescl", &HLT_HIAK4PFJet100_v1_Prescl, &b_HLT_HIAK4PFJet100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet120_v1", &HLT_HIAK4PFJet120_v1, &b_HLT_HIAK4PFJet120_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet120_v1_Prescl", &HLT_HIAK4PFJet120_v1_Prescl, &b_HLT_HIAK4PFJet120_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet15_v1", &HLT_HIAK4PFJet15_v1, &b_HLT_HIAK4PFJet15_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet15_v1_Prescl", &HLT_HIAK4PFJet15_v1_Prescl, &b_HLT_HIAK4PFJet15_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet30FWD_v1", &HLT_HIAK4PFJet30FWD_v1, &b_HLT_HIAK4PFJet30FWD_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet30FWD_v1_Prescl", &HLT_HIAK4PFJet30FWD_v1_Prescl, &b_HLT_HIAK4PFJet30FWD_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet30_bTag_v1", &HLT_HIAK4PFJet30_bTag_v1, &b_HLT_HIAK4PFJet30_bTag_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet30_bTag_v1_Prescl", &HLT_HIAK4PFJet30_bTag_v1_Prescl, &b_HLT_HIAK4PFJet30_bTag_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet30_v1", &HLT_HIAK4PFJet30_v1, &b_HLT_HIAK4PFJet30_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet30_v1_Prescl", &HLT_HIAK4PFJet30_v1_Prescl, &b_HLT_HIAK4PFJet30_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet40FWD_v1", &HLT_HIAK4PFJet40FWD_v1, &b_HLT_HIAK4PFJet40FWD_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet40FWD_v1_Prescl", &HLT_HIAK4PFJet40FWD_v1_Prescl, &b_HLT_HIAK4PFJet40FWD_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet40_bTag_v1", &HLT_HIAK4PFJet40_bTag_v1, &b_HLT_HIAK4PFJet40_bTag_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet40_bTag_v1_Prescl", &HLT_HIAK4PFJet40_bTag_v1_Prescl, &b_HLT_HIAK4PFJet40_bTag_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet40_v1", &HLT_HIAK4PFJet40_v1, &b_HLT_HIAK4PFJet40_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet40_v1_Prescl", &HLT_HIAK4PFJet40_v1_Prescl, &b_HLT_HIAK4PFJet40_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet60FWD_v1", &HLT_HIAK4PFJet60FWD_v1, &b_HLT_HIAK4PFJet60FWD_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet60FWD_v1_Prescl", &HLT_HIAK4PFJet60FWD_v1_Prescl, &b_HLT_HIAK4PFJet60FWD_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet60_bTag_v1", &HLT_HIAK4PFJet60_bTag_v1, &b_HLT_HIAK4PFJet60_bTag_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet60_bTag_v1_Prescl", &HLT_HIAK4PFJet60_bTag_v1_Prescl, &b_HLT_HIAK4PFJet60_bTag_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet60_v1", &HLT_HIAK4PFJet60_v1, &b_HLT_HIAK4PFJet60_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet60_v1_Prescl", &HLT_HIAK4PFJet60_v1_Prescl, &b_HLT_HIAK4PFJet60_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet80FWD_v1", &HLT_HIAK4PFJet80FWD_v1, &b_HLT_HIAK4PFJet80FWD_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet80FWD_v1_Prescl", &HLT_HIAK4PFJet80FWD_v1_Prescl, &b_HLT_HIAK4PFJet80FWD_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet80_bTag_v1", &HLT_HIAK4PFJet80_bTag_v1, &b_HLT_HIAK4PFJet80_bTag_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet80_bTag_v1_Prescl", &HLT_HIAK4PFJet80_bTag_v1_Prescl, &b_HLT_HIAK4PFJet80_bTag_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK4PFJet80_v1", &HLT_HIAK4PFJet80_v1, &b_HLT_HIAK4PFJet80_v1);
   fChain->SetBranchAddress("HLT_HIAK4PFJet80_v1_Prescl", &HLT_HIAK4PFJet80_v1_Prescl, &b_HLT_HIAK4PFJet80_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJet140_v1", &HLT_HIAK8PFJet140_v1, &b_HLT_HIAK8PFJet140_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJet140_v1_Prescl", &HLT_HIAK8PFJet140_v1_Prescl, &b_HLT_HIAK8PFJet140_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJet15_v1", &HLT_HIAK8PFJet15_v1, &b_HLT_HIAK8PFJet15_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJet15_v1_Prescl", &HLT_HIAK8PFJet15_v1_Prescl, &b_HLT_HIAK8PFJet15_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJet25_v1", &HLT_HIAK8PFJet25_v1, &b_HLT_HIAK8PFJet25_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJet25_v1_Prescl", &HLT_HIAK8PFJet25_v1_Prescl, &b_HLT_HIAK8PFJet25_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJet40_v1", &HLT_HIAK8PFJet40_v1, &b_HLT_HIAK8PFJet40_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJet40_v1_Prescl", &HLT_HIAK8PFJet40_v1_Prescl, &b_HLT_HIAK8PFJet40_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJet60_v1", &HLT_HIAK8PFJet60_v1, &b_HLT_HIAK8PFJet60_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJet60_v1_Prescl", &HLT_HIAK8PFJet60_v1_Prescl, &b_HLT_HIAK8PFJet60_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJet80_v1", &HLT_HIAK8PFJet80_v1, &b_HLT_HIAK8PFJet80_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJet80_v1_Prescl", &HLT_HIAK8PFJet80_v1_Prescl, &b_HLT_HIAK8PFJet80_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd140_v1", &HLT_HIAK8PFJetFwd140_v1, &b_HLT_HIAK8PFJetFwd140_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd140_v1_Prescl", &HLT_HIAK8PFJetFwd140_v1_Prescl, &b_HLT_HIAK8PFJetFwd140_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd15_v1", &HLT_HIAK8PFJetFwd15_v1, &b_HLT_HIAK8PFJetFwd15_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd15_v1_Prescl", &HLT_HIAK8PFJetFwd15_v1_Prescl, &b_HLT_HIAK8PFJetFwd15_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd25_v1", &HLT_HIAK8PFJetFwd25_v1, &b_HLT_HIAK8PFJetFwd25_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd25_v1_Prescl", &HLT_HIAK8PFJetFwd25_v1_Prescl, &b_HLT_HIAK8PFJetFwd25_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd40_v1", &HLT_HIAK8PFJetFwd40_v1, &b_HLT_HIAK8PFJetFwd40_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd40_v1_Prescl", &HLT_HIAK8PFJetFwd40_v1_Prescl, &b_HLT_HIAK8PFJetFwd40_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd60_v1", &HLT_HIAK8PFJetFwd60_v1, &b_HLT_HIAK8PFJetFwd60_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd60_v1_Prescl", &HLT_HIAK8PFJetFwd60_v1_Prescl, &b_HLT_HIAK8PFJetFwd60_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd80_v1", &HLT_HIAK8PFJetFwd80_v1, &b_HLT_HIAK8PFJetFwd80_v1);
   fChain->SetBranchAddress("HLT_HIAK8PFJetFwd80_v1_Prescl", &HLT_HIAK8PFJetFwd80_v1_Prescl, &b_HLT_HIAK8PFJetFwd80_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1", &HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1, &b_HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1);
   fChain->SetBranchAddress("HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1_Prescl", &HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1_Prescl, &b_HLT_HIDiPFJet15_FBEta3_NoCaloMatched_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDiPFJet15_NoCaloMatched_v1", &HLT_HIDiPFJet15_NoCaloMatched_v1, &b_HLT_HIDiPFJet15_NoCaloMatched_v1);
   fChain->SetBranchAddress("HLT_HIDiPFJet15_NoCaloMatched_v1_Prescl", &HLT_HIDiPFJet15_NoCaloMatched_v1_Prescl, &b_HLT_HIDiPFJet15_NoCaloMatched_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1", &HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1, &b_HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1);
   fChain->SetBranchAddress("HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1_Prescl", &HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1_Prescl, &b_HLT_HIDiPFJet25_FBEta3_NoCaloMatched_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDiPFJet25_NoCaloMatched_v1", &HLT_HIDiPFJet25_NoCaloMatched_v1, &b_HLT_HIDiPFJet25_NoCaloMatched_v1);
   fChain->SetBranchAddress("HLT_HIDiPFJet25_NoCaloMatched_v1_Prescl", &HLT_HIDiPFJet25_NoCaloMatched_v1_Prescl, &b_HLT_HIDiPFJet25_NoCaloMatched_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDiPFJetAve15_HFJEC_v1", &HLT_HIDiPFJetAve15_HFJEC_v1, &b_HLT_HIDiPFJetAve15_HFJEC_v1);
   fChain->SetBranchAddress("HLT_HIDiPFJetAve15_HFJEC_v1_Prescl", &HLT_HIDiPFJetAve15_HFJEC_v1_Prescl, &b_HLT_HIDiPFJetAve15_HFJEC_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDiPFJetAve25_HFJEC_v1", &HLT_HIDiPFJetAve25_HFJEC_v1, &b_HLT_HIDiPFJetAve25_HFJEC_v1);
   fChain->SetBranchAddress("HLT_HIDiPFJetAve25_HFJEC_v1_Prescl", &HLT_HIDiPFJetAve25_HFJEC_v1_Prescl, &b_HLT_HIDiPFJetAve25_HFJEC_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDiPFJetAve35_HFJEC_v1", &HLT_HIDiPFJetAve35_HFJEC_v1, &b_HLT_HIDiPFJetAve35_HFJEC_v1);
   fChain->SetBranchAddress("HLT_HIDiPFJetAve35_HFJEC_v1_Prescl", &HLT_HIDiPFJetAve35_HFJEC_v1_Prescl, &b_HLT_HIDiPFJetAve35_HFJEC_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDijet16And12_MidEta2p7_Dpt10_v1", &HLT_HIDijet16And12_MidEta2p7_Dpt10_v1, &b_HLT_HIDijet16And12_MidEta2p7_Dpt10_v1);
   fChain->SetBranchAddress("HLT_HIDijet16And12_MidEta2p7_Dpt10_v1_Prescl", &HLT_HIDijet16And12_MidEta2p7_Dpt10_v1_Prescl, &b_HLT_HIDijet16And12_MidEta2p7_Dpt10_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDijet16And8_MidEta2p7_Dpt8_v1", &HLT_HIDijet16And8_MidEta2p7_Dpt8_v1, &b_HLT_HIDijet16And8_MidEta2p7_Dpt8_v1);
   fChain->SetBranchAddress("HLT_HIDijet16And8_MidEta2p7_Dpt8_v1_Prescl", &HLT_HIDijet16And8_MidEta2p7_Dpt8_v1_Prescl, &b_HLT_HIDijet16And8_MidEta2p7_Dpt8_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDijet20And12_MidEta2p7_Dpt10_v1", &HLT_HIDijet20And12_MidEta2p7_Dpt10_v1, &b_HLT_HIDijet20And12_MidEta2p7_Dpt10_v1);
   fChain->SetBranchAddress("HLT_HIDijet20And12_MidEta2p7_Dpt10_v1_Prescl", &HLT_HIDijet20And12_MidEta2p7_Dpt10_v1_Prescl, &b_HLT_HIDijet20And12_MidEta2p7_Dpt10_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDijet20And8_MidEta2p7_Dpt8_v1", &HLT_HIDijet20And8_MidEta2p7_Dpt8_v1, &b_HLT_HIDijet20And8_MidEta2p7_Dpt8_v1);
   fChain->SetBranchAddress("HLT_HIDijet20And8_MidEta2p7_Dpt8_v1_Prescl", &HLT_HIDijet20And8_MidEta2p7_Dpt8_v1_Prescl, &b_HLT_HIDijet20And8_MidEta2p7_Dpt8_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIDijet28And16_MidEta2p7_Dpt15_v1", &HLT_HIDijet28And16_MidEta2p7_Dpt15_v1, &b_HLT_HIDijet28And16_MidEta2p7_Dpt15_v1);
   fChain->SetBranchAddress("HLT_HIDijet28And16_MidEta2p7_Dpt15_v1_Prescl", &HLT_HIDijet28And16_MidEta2p7_Dpt15_v1_Prescl, &b_HLT_HIDijet28And16_MidEta2p7_Dpt15_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5_AK4PFJet30_v1", &HLT_HIL3Mu5_AK4PFJet30_v1, &b_HLT_HIL3Mu5_AK4PFJet30_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5_AK4PFJet30_v1_Prescl", &HLT_HIL3Mu5_AK4PFJet30_v1_Prescl, &b_HLT_HIL3Mu5_AK4PFJet30_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5_AK4PFJet40_v1", &HLT_HIL3Mu5_AK4PFJet40_v1, &b_HLT_HIL3Mu5_AK4PFJet40_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5_AK4PFJet40_v1_Prescl", &HLT_HIL3Mu5_AK4PFJet40_v1_Prescl, &b_HLT_HIL3Mu5_AK4PFJet40_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5_AK4PFJet60_v1", &HLT_HIL3Mu5_AK4PFJet60_v1, &b_HLT_HIL3Mu5_AK4PFJet60_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5_AK4PFJet60_v1_Prescl", &HLT_HIL3Mu5_AK4PFJet60_v1_Prescl, &b_HLT_HIL3Mu5_AK4PFJet60_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPFJet140_v1", &HLT_HIPFJet140_v1, &b_HLT_HIPFJet140_v1);
   fChain->SetBranchAddress("HLT_HIPFJet140_v1_Prescl", &HLT_HIPFJet140_v1_Prescl, &b_HLT_HIPFJet140_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPFJet25_v1", &HLT_HIPFJet25_v1, &b_HLT_HIPFJet25_v1);
   fChain->SetBranchAddress("HLT_HIPFJet25_v1_Prescl", &HLT_HIPFJet25_v1_Prescl, &b_HLT_HIPFJet25_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPFJetFwd140_v1", &HLT_HIPFJetFwd140_v1, &b_HLT_HIPFJetFwd140_v1);
   fChain->SetBranchAddress("HLT_HIPFJetFwd140_v1_Prescl", &HLT_HIPFJetFwd140_v1_Prescl, &b_HLT_HIPFJetFwd140_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPFJetFwd15_v1", &HLT_HIPFJetFwd15_v1, &b_HLT_HIPFJetFwd15_v1);
   fChain->SetBranchAddress("HLT_HIPFJetFwd15_v1_Prescl", &HLT_HIPFJetFwd15_v1_Prescl, &b_HLT_HIPFJetFwd15_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPFJetFwd25_v1", &HLT_HIPFJetFwd25_v1, &b_HLT_HIPFJetFwd25_v1);
   fChain->SetBranchAddress("HLT_HIPFJetFwd25_v1_Prescl", &HLT_HIPFJetFwd25_v1_Prescl, &b_HLT_HIPFJetFwd25_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1", &HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1, &b_HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1);
   fChain->SetBranchAddress("HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1_Prescl", &HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1_Prescl, &b_HLT_HIEle20_eta2p1_WPTight_Gsf_CentralPFJet15_EleCleaned_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1", &HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1, &b_HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1);
   fChain->SetBranchAddress("HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1_Prescl", &HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1_Prescl, &b_HLT_HIEle15_CaloIdL_TrackIdL_IsoVL_PFJet30_v1_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet100er2p7", &L1_DoubleJet100er2p7, &b_L1_DoubleJet100er2p7);
   fChain->SetBranchAddress("L1_DoubleJet100er2p7_Prescl", &L1_DoubleJet100er2p7_Prescl, &b_L1_DoubleJet100er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet112er2p7", &L1_DoubleJet112er2p7, &b_L1_DoubleJet112er2p7);
   fChain->SetBranchAddress("L1_DoubleJet112er2p7_Prescl", &L1_DoubleJet112er2p7_Prescl, &b_L1_DoubleJet112er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet120er2p7", &L1_DoubleJet120er2p7, &b_L1_DoubleJet120er2p7);
   fChain->SetBranchAddress("L1_DoubleJet120er2p7_Prescl", &L1_DoubleJet120er2p7_Prescl, &b_L1_DoubleJet120er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet150er2p7", &L1_DoubleJet150er2p7, &b_L1_DoubleJet150er2p7);
   fChain->SetBranchAddress("L1_DoubleJet150er2p7_Prescl", &L1_DoubleJet150er2p7_Prescl, &b_L1_DoubleJet150er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet16And12er2p7", &L1_DoubleJet16And12er2p7, &b_L1_DoubleJet16And12er2p7);
   fChain->SetBranchAddress("L1_DoubleJet16And12er2p7_Prescl", &L1_DoubleJet16And12er2p7_Prescl, &b_L1_DoubleJet16And12er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet16And8er2p7", &L1_DoubleJet16And8er2p7, &b_L1_DoubleJet16And8er2p7);
   fChain->SetBranchAddress("L1_DoubleJet16And8er2p7_Prescl", &L1_DoubleJet16And8er2p7_Prescl, &b_L1_DoubleJet16And8er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet20And12er2p7", &L1_DoubleJet20And12er2p7, &b_L1_DoubleJet20And12er2p7);
   fChain->SetBranchAddress("L1_DoubleJet20And12er2p7_Prescl", &L1_DoubleJet20And12er2p7_Prescl, &b_L1_DoubleJet20And12er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet20And8er2p7", &L1_DoubleJet20And8er2p7, &b_L1_DoubleJet20And8er2p7);
   fChain->SetBranchAddress("L1_DoubleJet20And8er2p7_Prescl", &L1_DoubleJet20And8er2p7_Prescl, &b_L1_DoubleJet20And8er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet28And16er2p7", &L1_DoubleJet28And16er2p7, &b_L1_DoubleJet28And16er2p7);
   fChain->SetBranchAddress("L1_DoubleJet28And16er2p7_Prescl", &L1_DoubleJet28And16er2p7_Prescl, &b_L1_DoubleJet28And16er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet40er2p7", &L1_DoubleJet40er2p7, &b_L1_DoubleJet40er2p7);
   fChain->SetBranchAddress("L1_DoubleJet40er2p7_Prescl", &L1_DoubleJet40er2p7_Prescl, &b_L1_DoubleJet40er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet50er2p7", &L1_DoubleJet50er2p7, &b_L1_DoubleJet50er2p7);
   fChain->SetBranchAddress("L1_DoubleJet50er2p7_Prescl", &L1_DoubleJet50er2p7_Prescl, &b_L1_DoubleJet50er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet60er2p7", &L1_DoubleJet60er2p7, &b_L1_DoubleJet60er2p7);
   fChain->SetBranchAddress("L1_DoubleJet60er2p7_Prescl", &L1_DoubleJet60er2p7_Prescl, &b_L1_DoubleJet60er2p7_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet80er2p7", &L1_DoubleJet80er2p7, &b_L1_DoubleJet80er2p7);
   fChain->SetBranchAddress("L1_DoubleJet80er2p7_Prescl", &L1_DoubleJet80er2p7_Prescl, &b_L1_DoubleJet80er2p7_Prescl);
   fChain->SetBranchAddress("L1_SingleJet120", &L1_SingleJet120, &b_L1_SingleJet120);
   fChain->SetBranchAddress("L1_SingleJet120_Prescl", &L1_SingleJet120_Prescl, &b_L1_SingleJet120_Prescl);
   fChain->SetBranchAddress("L1_SingleJet140", &L1_SingleJet140, &b_L1_SingleJet140);
   fChain->SetBranchAddress("L1_SingleJet140_Prescl", &L1_SingleJet140_Prescl, &b_L1_SingleJet140_Prescl);
   fChain->SetBranchAddress("L1_SingleJet150", &L1_SingleJet150, &b_L1_SingleJet150);
   fChain->SetBranchAddress("L1_SingleJet150_Prescl", &L1_SingleJet150_Prescl, &b_L1_SingleJet150_Prescl);
   fChain->SetBranchAddress("L1_SingleJet16", &L1_SingleJet16, &b_L1_SingleJet16);
   fChain->SetBranchAddress("L1_SingleJet16_Prescl", &L1_SingleJet16_Prescl, &b_L1_SingleJet16_Prescl);
   fChain->SetBranchAddress("L1_SingleJet160", &L1_SingleJet160, &b_L1_SingleJet160);
   fChain->SetBranchAddress("L1_SingleJet160_Prescl", &L1_SingleJet160_Prescl, &b_L1_SingleJet160_Prescl);
   fChain->SetBranchAddress("L1_SingleJet170", &L1_SingleJet170, &b_L1_SingleJet170);
   fChain->SetBranchAddress("L1_SingleJet170_Prescl", &L1_SingleJet170_Prescl, &b_L1_SingleJet170_Prescl);
   fChain->SetBranchAddress("L1_SingleJet180", &L1_SingleJet180, &b_L1_SingleJet180);
   fChain->SetBranchAddress("L1_SingleJet180_Prescl", &L1_SingleJet180_Prescl, &b_L1_SingleJet180_Prescl);
   fChain->SetBranchAddress("L1_SingleJet20", &L1_SingleJet20, &b_L1_SingleJet20);
   fChain->SetBranchAddress("L1_SingleJet20_Prescl", &L1_SingleJet20_Prescl, &b_L1_SingleJet20_Prescl);
   fChain->SetBranchAddress("L1_SingleJet200", &L1_SingleJet200, &b_L1_SingleJet200);
   fChain->SetBranchAddress("L1_SingleJet200_Prescl", &L1_SingleJet200_Prescl, &b_L1_SingleJet200_Prescl);
   fChain->SetBranchAddress("L1_SingleJet20_FWD", &L1_SingleJet20_FWD, &b_L1_SingleJet20_FWD);
   fChain->SetBranchAddress("L1_SingleJet20_FWD_Prescl", &L1_SingleJet20_FWD_Prescl, &b_L1_SingleJet20_FWD_Prescl);
   fChain->SetBranchAddress("L1_SingleJet24", &L1_SingleJet24, &b_L1_SingleJet24);
   fChain->SetBranchAddress("L1_SingleJet24_Prescl", &L1_SingleJet24_Prescl, &b_L1_SingleJet24_Prescl);
   fChain->SetBranchAddress("L1_SingleJet32", &L1_SingleJet32, &b_L1_SingleJet32);
   fChain->SetBranchAddress("L1_SingleJet32_Prescl", &L1_SingleJet32_Prescl, &b_L1_SingleJet32_Prescl);
   fChain->SetBranchAddress("L1_SingleJet35", &L1_SingleJet35, &b_L1_SingleJet35);
   fChain->SetBranchAddress("L1_SingleJet35_Prescl", &L1_SingleJet35_Prescl, &b_L1_SingleJet35_Prescl);
   fChain->SetBranchAddress("L1_SingleJet35_FWD", &L1_SingleJet35_FWD, &b_L1_SingleJet35_FWD);
   fChain->SetBranchAddress("L1_SingleJet35_FWD_Prescl", &L1_SingleJet35_FWD_Prescl, &b_L1_SingleJet35_FWD_Prescl);
   fChain->SetBranchAddress("L1_SingleJet44", &L1_SingleJet44, &b_L1_SingleJet44);
   fChain->SetBranchAddress("L1_SingleJet44_Prescl", &L1_SingleJet44_Prescl, &b_L1_SingleJet44_Prescl);
   fChain->SetBranchAddress("L1_SingleJet60", &L1_SingleJet60, &b_L1_SingleJet60);
   fChain->SetBranchAddress("L1_SingleJet60_Prescl", &L1_SingleJet60_Prescl, &b_L1_SingleJet60_Prescl);
   fChain->SetBranchAddress("L1_SingleJet60_FWD", &L1_SingleJet60_FWD, &b_L1_SingleJet60_FWD);
   fChain->SetBranchAddress("L1_SingleJet60_FWD_Prescl", &L1_SingleJet60_FWD_Prescl, &b_L1_SingleJet60_FWD_Prescl);
   fChain->SetBranchAddress("L1_SingleJet80", &L1_SingleJet80, &b_L1_SingleJet80);
   fChain->SetBranchAddress("L1_SingleJet80_Prescl", &L1_SingleJet80_Prescl, &b_L1_SingleJet80_Prescl);
   fChain->SetBranchAddress("L1_SingleJet8_BptxAND", &L1_SingleJet8_BptxAND, &b_L1_SingleJet8_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet8_BptxAND_Prescl", &L1_SingleJet8_BptxAND_Prescl, &b_L1_SingleJet8_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet90", &L1_SingleJet90, &b_L1_SingleJet90);
   fChain->SetBranchAddress("L1_SingleJet90_Prescl", &L1_SingleJet90_Prescl, &b_L1_SingleJet90_Prescl);
   fChain->SetBranchAddress("L1_SingleJet90_FWD", &L1_SingleJet90_FWD, &b_L1_SingleJet90_FWD);
   fChain->SetBranchAddress("L1_SingleJet90_FWD_Prescl", &L1_SingleJet90_FWD_Prescl, &b_L1_SingleJet90_FWD_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet8er2p7", &L1_DoubleJet8er2p7, &b_L1_DoubleJet8er2p7);
   fChain->SetBranchAddress("L1_DoubleJet8er2p7_Prescl", &L1_DoubleJet8er2p7_Prescl, &b_L1_DoubleJet8er2p7_Prescl);
   fChain->SetBranchAddress("L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3", &L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3, &b_L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl", &L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl, &b_L1_LooseIsoEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl);
   fChain->SetBranchAddress("L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3", &L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3, &b_L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3);
   fChain->SetBranchAddress("L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl", &L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl, &b_L1_LooseIsoEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3", &L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3, &b_L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3);
   fChain->SetBranchAddress("L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl", &L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl, &b_L1_SingleEG15er2p1_Jet12er2p7_dR_Min0p3_Prescl);
   fChain->SetBranchAddress("L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3", &L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3, &b_L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3);
   fChain->SetBranchAddress("L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl", &L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl, &b_L1_SingleEG18er2p1_Jet16er2p7_dR_Min0p3_Prescl);
   fChain->SetBranchAddress("L1_SingleJet120_FWD", &L1_SingleJet120_FWD, &b_L1_SingleJet120_FWD);
   fChain->SetBranchAddress("L1_SingleJet120_FWD_Prescl", &L1_SingleJet120_FWD_Prescl, &b_L1_SingleJet120_FWD_Prescl);
   fChain->SetBranchAddress("L1_SingleJet12_BptxAND", &L1_SingleJet12_BptxAND, &b_L1_SingleJet12_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet12_BptxAND_Prescl", &L1_SingleJet12_BptxAND_Prescl, &b_L1_SingleJet12_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet20er2p7_NotBptxOR", &L1_SingleJet20er2p7_NotBptxOR, &b_L1_SingleJet20er2p7_NotBptxOR);
   fChain->SetBranchAddress("L1_SingleJet20er2p7_NotBptxOR_Prescl", &L1_SingleJet20er2p7_NotBptxOR_Prescl, &b_L1_SingleJet20er2p7_NotBptxOR_Prescl);
   fChain->SetBranchAddress("L1_SingleJet20er2p7_NotBptxOR_3BX", &L1_SingleJet20er2p7_NotBptxOR_3BX, &b_L1_SingleJet20er2p7_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet20er2p7_NotBptxOR_3BX_Prescl", &L1_SingleJet20er2p7_NotBptxOR_3BX_Prescl, &b_L1_SingleJet20er2p7_NotBptxOR_3BX_Prescl);
   fChain->SetBranchAddress("L1_SingleJet28", &L1_SingleJet28, &b_L1_SingleJet28);
   fChain->SetBranchAddress("L1_SingleJet28_Prescl", &L1_SingleJet28_Prescl, &b_L1_SingleJet28_Prescl);
   fChain->SetBranchAddress("L1_SingleJet40", &L1_SingleJet40, &b_L1_SingleJet40);
   fChain->SetBranchAddress("L1_SingleJet40_Prescl", &L1_SingleJet40_Prescl, &b_L1_SingleJet40_Prescl);
   fChain->SetBranchAddress("L1_SingleJet40_FWD", &L1_SingleJet40_FWD, &b_L1_SingleJet40_FWD);
   fChain->SetBranchAddress("L1_SingleJet40_FWD_Prescl", &L1_SingleJet40_FWD_Prescl, &b_L1_SingleJet40_FWD_Prescl);
   fChain->SetBranchAddress("L1_SingleJet43er2p7_NotBptxOR_3BX", &L1_SingleJet43er2p7_NotBptxOR_3BX, &b_L1_SingleJet43er2p7_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet43er2p7_NotBptxOR_3BX_Prescl", &L1_SingleJet43er2p7_NotBptxOR_3BX_Prescl, &b_L1_SingleJet43er2p7_NotBptxOR_3BX_Prescl);
   fChain->SetBranchAddress("L1_SingleJet46er2p7_NotBptxOR_3BX", &L1_SingleJet46er2p7_NotBptxOR_3BX, &b_L1_SingleJet46er2p7_NotBptxOR_3BX);
   fChain->SetBranchAddress("L1_SingleJet46er2p7_NotBptxOR_3BX_Prescl", &L1_SingleJet46er2p7_NotBptxOR_3BX_Prescl, &b_L1_SingleJet46er2p7_NotBptxOR_3BX_Prescl);
   fChain->SetBranchAddress("L1_SingleJet48", &L1_SingleJet48, &b_L1_SingleJet48);
   fChain->SetBranchAddress("L1_SingleJet48_Prescl", &L1_SingleJet48_Prescl, &b_L1_SingleJet48_Prescl);
   fChain->SetBranchAddress("L1_SingleJet50", &L1_SingleJet50, &b_L1_SingleJet50);
   fChain->SetBranchAddress("L1_SingleJet50_Prescl", &L1_SingleJet50_Prescl, &b_L1_SingleJet50_Prescl);
   fChain->SetBranchAddress("L1_SingleJet50_FWD", &L1_SingleJet50_FWD, &b_L1_SingleJet50_FWD);
   fChain->SetBranchAddress("L1_SingleJet50_FWD_Prescl", &L1_SingleJet50_FWD_Prescl, &b_L1_SingleJet50_FWD_Prescl);
   fChain->SetBranchAddress("L1_SingleJet56", &L1_SingleJet56, &b_L1_SingleJet56);
   fChain->SetBranchAddress("L1_SingleJet56_Prescl", &L1_SingleJet56_Prescl, &b_L1_SingleJet56_Prescl);
   Notify();
}

Bool_t hltTreeReaderPPMC::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void hltTreeReaderPPMC::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t hltTreeReaderPPMC::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef hltTreeReaderPPMC_cxx
