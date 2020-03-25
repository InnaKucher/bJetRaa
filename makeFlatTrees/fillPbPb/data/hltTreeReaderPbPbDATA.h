//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Mar 20 14:33:03 2020 by ROOT version 6.18/04
// from TTree HltTree/
// found on file: ../HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_merged/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_merged_part0.root
//////////////////////////////////////////////////////////

#ifndef hltTreeReaderPbPbDATA_h
#define hltTreeReaderPbPbDATA_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class hltTreeReaderPbPbDATA {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           recoNVrtOffline0;
   Float_t         recoVrtXOffline0[1];   //[NVrtx]
   Float_t         recoVrtYOffline0[1];   //[NVrtx]
   Float_t         recoVrtZOffline0[1];   //[NVrtx]
   Int_t           recoVrtNtrkOffline0[1];   //[NVrtx]
   Float_t         recoVrtChi2Offline0[1];   //[NVrtx]
   Float_t         recoVrtNdofOffline0[1];   //[NVrtx]
   ULong64_t       Event;
   Int_t           LumiBlock;
   Int_t           Run;
   Int_t           Bx;
   Int_t           Orbit;
   Double_t        AvgInstDelLumi;
   Int_t           HLT_HICastor_HighJet_BptxAND_v1;
   Int_t           HLT_HICastor_HighJet_BptxAND_v1_Prescl;
   Int_t           HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1;
   Int_t           HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1_Prescl;
   Int_t           HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1;
   Int_t           HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1_Prescl;
   Int_t           HLT_HICastor_HighJet_MBHF1OR_v1;
   Int_t           HLT_HICastor_HighJet_MBHF1OR_v1_Prescl;
   Int_t           HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1;
   Int_t           HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1_Prescl;
   Int_t           HLT_HICastor_HighJet_NotMBHF2AND_v1;
   Int_t           HLT_HICastor_HighJet_NotMBHF2AND_v1_Prescl;
   Int_t           HLT_HICastor_HighJet_NotMBHF2OR_v1;
   Int_t           HLT_HICastor_HighJet_NotMBHF2OR_v1_Prescl;
   Int_t           HLT_HICastor_HighJet_v1;
   Int_t           HLT_HICastor_HighJet_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_BptxAND_v1;
   Int_t           HLT_HICastor_MediumJet_BptxAND_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1;
   Int_t           HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_MBHF1OR_v1;
   Int_t           HLT_HICastor_MediumJet_MBHF1OR_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_NotMBHF2AND_v1;
   Int_t           HLT_HICastor_MediumJet_NotMBHF2AND_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_NotMBHF2OR_v1;
   Int_t           HLT_HICastor_MediumJet_NotMBHF2OR_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1;
   Int_t           HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1;
   Int_t           HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1;
   Int_t           HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1;
   Int_t           HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1_Prescl;
   Int_t           HLT_HICastor_MediumJet_v1;
   Int_t           HLT_HICastor_MediumJet_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1;
   Int_t           HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1;
   Int_t           HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1;
   Int_t           HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet100Eta1p5_v1;
   Int_t           HLT_HICsAK4PFJet100Eta1p5_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet120Eta1p5_v1;
   Int_t           HLT_HICsAK4PFJet120Eta1p5_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1;
   Int_t           HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1;
   Int_t           HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet60Eta1p5_v1;
   Int_t           HLT_HICsAK4PFJet60Eta1p5_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1;
   Int_t           HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1;
   Int_t           HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1_Prescl;
   Int_t           HLT_HICsAK4PFJet80Eta1p5_v1;
   Int_t           HLT_HICsAK4PFJet80Eta1p5_v1_Prescl;
   Int_t           HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1;
   Int_t           HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1;
   Int_t           HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1;
   Int_t           HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1;
   Int_t           HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1;
   Int_t           HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1;
   Int_t           HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1;
   Int_t           HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1;
   Int_t           HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1;
   Int_t           HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1;
   Int_t           HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1;
   Int_t           HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl;
   Int_t           HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1;
   Int_t           HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;
   Int_t           HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1;
   Int_t           HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1;
   Int_t           HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1;
   Int_t           HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1;
   Int_t           HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1;
   Int_t           HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1;
   Int_t           HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1;
   Int_t           HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet100Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100Fwd_v1;
   Int_t           HLT_HIPuAK4CaloJet100Fwd_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100_35_Eta0p7_v1;
   Int_t           HLT_HIPuAK4CaloJet100_35_Eta0p7_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet100_35_Eta1p1_v1;
   Int_t           HLT_HIPuAK4CaloJet100_35_Eta1p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet120Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet120Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet120Fwd_v1;
   Int_t           HLT_HIPuAK4CaloJet120Fwd_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1;
   Int_t           HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1;
   Int_t           HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet40Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet40Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet40Fwd_v1;
   Int_t           HLT_HIPuAK4CaloJet40Fwd_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1;
   Int_t           HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1;
   Int_t           HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1;
   Int_t           HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1;
   Int_t           HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1;
   Int_t           HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1;
   Int_t           HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet60Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet60Fwd_v1;
   Int_t           HLT_HIPuAK4CaloJet60Fwd_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1;
   Int_t           HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1;
   Int_t           HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1;
   Int_t           HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1;
   Int_t           HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1;
   Int_t           HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1;
   Int_t           HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80Eta5p1_v1;
   Int_t           HLT_HIPuAK4CaloJet80Eta5p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80Fwd_v1;
   Int_t           HLT_HIPuAK4CaloJet80Fwd_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_35_Eta0p7_v1;
   Int_t           HLT_HIPuAK4CaloJet80_35_Eta0p7_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_35_Eta1p1_v1;
   Int_t           HLT_HIPuAK4CaloJet80_35_Eta1p1_v1_Prescl;
   Int_t           HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1;
   Int_t           HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl;
   Int_t           L1_CastorHighJet;
   Int_t           L1_CastorHighJet_Prescl;
   Int_t           L1_CastorHighJet_BptxAND;
   Int_t           L1_CastorHighJet_BptxAND_Prescl;
   Int_t           L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND;
   Int_t           L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_CastorMediumJet;
   Int_t           L1_CastorMediumJet_Prescl;
   Int_t           L1_CastorMediumJet_BptxAND;
   Int_t           L1_CastorMediumJet_BptxAND_Prescl;
   Int_t           L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_DoubleJet16And12_MidEta2p7_BptxAND;
   Int_t           L1_DoubleJet16And12_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND;
   Int_t           L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND;
   Int_t           L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet16And8_MidEta2p7_BptxAND;
   Int_t           L1_DoubleJet16And8_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND;
   Int_t           L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND;
   Int_t           L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet20And12_MidEta2p7_BptxAND;
   Int_t           L1_DoubleJet20And12_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND;
   Int_t           L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND;
   Int_t           L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet20And8_MidEta2p7_BptxAND;
   Int_t           L1_DoubleJet20And8_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND;
   Int_t           L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND;
   Int_t           L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet28And16_MidEta2p7_BptxAND;
   Int_t           L1_DoubleJet28And16_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND;
   Int_t           L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND;
   Int_t           L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT5_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT5_NotMinimumBiasHF2_OR;
   Int_t           L1_ETT5_NotMinimumBiasHF2_OR_Prescl;
   Int_t           L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_MinimumBiasHF0_AND_BptxAND;
   Int_t           L1_MinimumBiasHF0_AND_BptxAND_Prescl;
   Int_t           L1_MinimumBiasHF0_OR_BptxAND;
   Int_t           L1_MinimumBiasHF0_OR_BptxAND_Prescl;
   Int_t           L1_MinimumBiasHF1_AND;
   Int_t           L1_MinimumBiasHF1_AND_Prescl;
   Int_t           L1_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND;
   Int_t           L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND_Prescl;
   Int_t           L1_MinimumBiasHF1_OR;
   Int_t           L1_MinimumBiasHF1_OR_Prescl;
   Int_t           L1_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_MinimumBiasHF1_XOR_BptxAND;
   Int_t           L1_MinimumBiasHF1_XOR_BptxAND_Prescl;
   Int_t           L1_MinimumBiasHF2_AND;
   Int_t           L1_MinimumBiasHF2_AND_Prescl;
   Int_t           L1_MinimumBiasHF2_AND_BptxAND;
   Int_t           L1_MinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_MinimumBiasHF2_OR;
   Int_t           L1_MinimumBiasHF2_OR_Prescl;
   Int_t           L1_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_NotETT100_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_NotETT100_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_NotETT110_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_NotETT110_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_NotETT110_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_NotETT110_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_NotETT150_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_NotETT150_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_NotETT150_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_NotETT150_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_NotETT150_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_NotETT150_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_NotETT200_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_NotETT200_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_NotETT20_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_NotETT20_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_NotETT20_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_NotETT20_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_NotETT20_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_NotETT20_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_NotETT80_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_NotETT80_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_NotETT80_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_NotETT80_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_NotETT80_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_NotETT80_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_NotETT95_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_NotETT95_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_NotETT95_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_NotETT95_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_NotETT95_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_NotETT95_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_NotMinimumBiasHF0_AND_BptxAND;
   Int_t           L1_NotMinimumBiasHF0_AND_BptxAND_Prescl;
   Int_t           L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1;
   Int_t           L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1_Prescl;
   Int_t           L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2;
   Int_t           L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2_Prescl;
   Int_t           L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4;
   Int_t           L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4_Prescl;
   Int_t           L1_NotMinimumBiasHF0_OR_BptxAND;
   Int_t           L1_NotMinimumBiasHF0_OR_BptxAND_Prescl;
   Int_t           L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1;
   Int_t           L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1_Prescl;
   Int_t           L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2;
   Int_t           L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2_Prescl;
   Int_t           L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4;
   Int_t           L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4_Prescl;
   Int_t           L1_NotMinimumBiasHF1_AND;
   Int_t           L1_NotMinimumBiasHF1_AND_Prescl;
   Int_t           L1_NotMinimumBiasHF1_OR;
   Int_t           L1_NotMinimumBiasHF1_OR_Prescl;
   Int_t           L1_NotMinimumBiasHF1_OR_BptxAND;
   Int_t           L1_NotMinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_NotMinimumBiasHF2_AND;
   Int_t           L1_NotMinimumBiasHF2_AND_Prescl;
   Int_t           L1_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_NotMinimumBiasHF2_OR;
   Int_t           L1_NotMinimumBiasHF2_OR_Prescl;
   Int_t           L1_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND;
   Int_t           L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND;
   Int_t           L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl;
   Int_t           L1_SingleJet120;
   Int_t           L1_SingleJet120_Prescl;
   Int_t           L1_SingleJet120_FWD3p0;
   Int_t           L1_SingleJet120_FWD3p0_Prescl;
   Int_t           L1_SingleJet120er2p5;
   Int_t           L1_SingleJet120er2p5_Prescl;
   Int_t           L1_SingleJet16_BptxAND;
   Int_t           L1_SingleJet16_BptxAND_Prescl;
   Int_t           L1_SingleJet16_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet16_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet16_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet16_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet16_FWD_BptxAND;
   Int_t           L1_SingleJet16_FWD_BptxAND_Prescl;
   Int_t           L1_SingleJet16_FWD_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet16_FWD_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet16_FWD_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet16_FWD_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet180er2p5;
   Int_t           L1_SingleJet180er2p5_Prescl;
   Int_t           L1_SingleJet200;
   Int_t           L1_SingleJet200_Prescl;
   Int_t           L1_SingleJet24_BptxAND;
   Int_t           L1_SingleJet24_BptxAND_Prescl;
   Int_t           L1_SingleJet24_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet24_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet24_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet24_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet28_BptxAND;
   Int_t           L1_SingleJet28_BptxAND_Prescl;
   Int_t           L1_SingleJet28_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet28_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet28_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet28_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet28_FWD_BptxAND;
   Int_t           L1_SingleJet28_FWD_BptxAND_Prescl;
   Int_t           L1_SingleJet28_FWD_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet28_FWD_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet28_FWD_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet28_FWD_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet32_BptxAND;
   Int_t           L1_SingleJet32_BptxAND_Prescl;
   Int_t           L1_SingleJet32_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet32_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet32_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet32_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet35;
   Int_t           L1_SingleJet35_Prescl;
   Int_t           L1_SingleJet35_FWD3p0;
   Int_t           L1_SingleJet35_FWD3p0_Prescl;
   Int_t           L1_SingleJet35er2p5;
   Int_t           L1_SingleJet35er2p5_Prescl;
   Int_t           L1_SingleJet36_BptxAND;
   Int_t           L1_SingleJet36_BptxAND_Prescl;
   Int_t           L1_SingleJet36_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet36_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet36_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet36_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet36_FWD_BptxAND;
   Int_t           L1_SingleJet36_FWD_BptxAND_Prescl;
   Int_t           L1_SingleJet36_FWD_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet36_FWD_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet36_FWD_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet36_FWD_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet40_BptxAND;
   Int_t           L1_SingleJet40_BptxAND_Prescl;
   Int_t           L1_SingleJet40_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet40_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet40_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet40_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet44_BptxAND;
   Int_t           L1_SingleJet44_BptxAND_Prescl;
   Int_t           L1_SingleJet44_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet44_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet44_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet44_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet44_FWD_BptxAND;
   Int_t           L1_SingleJet44_FWD_BptxAND_Prescl;
   Int_t           L1_SingleJet44_FWD_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet44_FWD_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet44_FWD_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet44_FWD_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet48_BptxAND;
   Int_t           L1_SingleJet48_BptxAND_Prescl;
   Int_t           L1_SingleJet48_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet48_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet48_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet48_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet56_BptxAND;
   Int_t           L1_SingleJet56_BptxAND_Prescl;
   Int_t           L1_SingleJet56_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet56_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet56_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet56_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet56_FWD_BptxAND;
   Int_t           L1_SingleJet56_FWD_BptxAND_Prescl;
   Int_t           L1_SingleJet56_FWD_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet56_FWD_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet56_FWD_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet56_FWD_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet60;
   Int_t           L1_SingleJet60_Prescl;
   Int_t           L1_SingleJet60_BptxAND;
   Int_t           L1_SingleJet60_BptxAND_Prescl;
   Int_t           L1_SingleJet60_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet60_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet60_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet60_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet60_FWD3p0;
   Int_t           L1_SingleJet60_FWD3p0_Prescl;
   Int_t           L1_SingleJet60er2p5;
   Int_t           L1_SingleJet60er2p5_Prescl;
   Int_t           L1_SingleJet64_BptxAND;
   Int_t           L1_SingleJet64_BptxAND_Prescl;
   Int_t           L1_SingleJet64_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet64_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet64_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet64_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet64_FWD_BptxAND;
   Int_t           L1_SingleJet64_FWD_BptxAND_Prescl;
   Int_t           L1_SingleJet64_FWD_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet64_FWD_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet64_FWD_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet64_FWD_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet72_BptxAND;
   Int_t           L1_SingleJet72_BptxAND_Prescl;
   Int_t           L1_SingleJet8;
   Int_t           L1_SingleJet8_Prescl;
   Int_t           L1_SingleJet80_BptxAND;
   Int_t           L1_SingleJet80_BptxAND_Prescl;
   Int_t           L1_SingleJet8_BptxAND;
   Int_t           L1_SingleJet8_BptxAND_Prescl;
   Int_t           L1_SingleJet8_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet8_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet8_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet8_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet8_FWD_BptxAND;
   Int_t           L1_SingleJet8_FWD_BptxAND_Prescl;
   Int_t           L1_SingleJet8_FWD_Centrality_30_100_BptxAND;
   Int_t           L1_SingleJet8_FWD_Centrality_30_100_BptxAND_Prescl;
   Int_t           L1_SingleJet8_FWD_Centrality_50_100_BptxAND;
   Int_t           L1_SingleJet8_FWD_Centrality_50_100_BptxAND_Prescl;
   Int_t           L1_SingleJet90;
   Int_t           L1_SingleJet90_Prescl;
   Int_t           L1_SingleJet90_FWD3p0;
   Int_t           L1_SingleJet90_FWD3p0_Prescl;
   Int_t           L1_SingleJet90er2p5;
   Int_t           L1_SingleJet90er2p5_Prescl;
   Int_t           L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_SingleMu12_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMu16_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMu3_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMu3_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND;
   Int_t           L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND;
   Int_t           L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND;
   Int_t           L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleMu5_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMu5_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMu7_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMu7_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND;
   Int_t           L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND;
   Int_t           L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND;
   Int_t           L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND;
   Int_t           L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND;
   Int_t           L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND;
   Int_t           L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND_Prescl;
   Int_t           L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND;
   Int_t           L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND_Prescl;
   Int_t           L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND;
   Int_t           L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND_Prescl;
   Int_t           L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND_Prescl;
   Int_t           L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND;
   Int_t           L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND_Prescl;
   Int_t           L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND;
   Int_t           L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND_Prescl;

   // List of branches
   TBranch        *b_NVrtx;   //!
   TBranch        *b_recoVrtXOffline0;   //!
   TBranch        *b_recoVrtYOffline0;   //!
   TBranch        *b_recoVrtZOffline0;   //!
   TBranch        *b_recoVrtNtrkOffline0;   //!
   TBranch        *b_recoVrtChi2Offline0;   //!
   TBranch        *b_recoVrtNdofOffline0;   //!
   TBranch        *b_Event;   //!
   TBranch        *b_LumiBlock;   //!
   TBranch        *b_Run;   //!
   TBranch        *b_Bx;   //!
   TBranch        *b_Orbit;   //!
   TBranch        *b_AvgInstDelLumi;   //!
   TBranch        *b_HLT_HICastor_HighJet_BptxAND_v1;   //!
   TBranch        *b_HLT_HICastor_HighJet_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1;   //!
   TBranch        *b_HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1;   //!
   TBranch        *b_HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_HighJet_MBHF1OR_v1;   //!
   TBranch        *b_HLT_HICastor_HighJet_MBHF1OR_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1;   //!
   TBranch        *b_HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_HighJet_NotMBHF2AND_v1;   //!
   TBranch        *b_HLT_HICastor_HighJet_NotMBHF2AND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_HighJet_NotMBHF2OR_v1;   //!
   TBranch        *b_HLT_HICastor_HighJet_NotMBHF2OR_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_HighJet_v1;   //!
   TBranch        *b_HLT_HICastor_HighJet_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_BptxAND_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_MBHF1OR_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_MBHF1OR_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_NotMBHF2AND_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_NotMBHF2AND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_NotMBHF2OR_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_NotMBHF2OR_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1_Prescl;   //!
   TBranch        *b_HLT_HICastor_MediumJet_v1;   //!
   TBranch        *b_HLT_HICastor_MediumJet_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet100Eta1p5_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet100Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet120Eta1p5_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet120Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet60Eta1p5_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet60Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HICsAK4PFJet80Eta1p5_v1;   //!
   TBranch        *b_HLT_HICsAK4PFJet80Eta1p5_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1;   //!
   TBranch        *b_HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1;   //!
   TBranch        *b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Fwd_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100Fwd_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_35_Eta0p7_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_35_Eta0p7_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_35_Eta1p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet100_35_Eta1p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet120Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet120Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet120Fwd_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet120Fwd_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40Fwd_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet40Fwd_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Fwd_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet60Fwd_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta5p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Eta5p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Fwd_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80Fwd_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_35_Eta0p7_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_35_Eta0p7_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_35_Eta1p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_35_Eta1p1_v1_Prescl;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1;   //!
   TBranch        *b_HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl;   //!
   TBranch        *b_L1_CastorHighJet;   //!
   TBranch        *b_L1_CastorHighJet_Prescl;   //!
   TBranch        *b_L1_CastorHighJet_BptxAND;   //!
   TBranch        *b_L1_CastorHighJet_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorMediumJet;   //!
   TBranch        *b_L1_CastorMediumJet_Prescl;   //!
   TBranch        *b_L1_CastorMediumJet_BptxAND;   //!
   TBranch        *b_L1_CastorMediumJet_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet16And12_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_DoubleJet16And12_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet16And8_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_DoubleJet16And8_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet20And12_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_DoubleJet20And12_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet20And8_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_DoubleJet20And8_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet28And16_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_DoubleJet28And16_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT5_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT5_NotMinimumBiasHF2_OR;   //!
   TBranch        *b_L1_ETT5_NotMinimumBiasHF2_OR_Prescl;   //!
   TBranch        *b_L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF0_AND_BptxAND;   //!
   TBranch        *b_L1_MinimumBiasHF0_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF0_OR_BptxAND;   //!
   TBranch        *b_L1_MinimumBiasHF0_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_AND;   //!
   TBranch        *b_L1_MinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND;   //!
   TBranch        *b_L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_OR;   //!
   TBranch        *b_L1_MinimumBiasHF1_OR_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF1_XOR_BptxAND;   //!
   TBranch        *b_L1_MinimumBiasHF1_XOR_BptxAND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF2_AND;   //!
   TBranch        *b_L1_MinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_MinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF2_OR;   //!
   TBranch        *b_L1_MinimumBiasHF2_OR_Prescl;   //!
   TBranch        *b_L1_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT100_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_NotETT100_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT110_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT110_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT110_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT110_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT150_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_NotETT150_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT150_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT150_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT150_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT150_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT200_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_NotETT200_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT20_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_NotETT20_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT20_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT20_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT20_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT20_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT80_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_NotETT80_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT80_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT80_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT80_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT80_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT95_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_NotETT95_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT95_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT95_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotETT95_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_NotETT95_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_AND_BptxAND;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_OR_BptxAND;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4;   //!
   TBranch        *b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF1_AND;   //!
   TBranch        *b_L1_NotMinimumBiasHF1_AND_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF1_OR;   //!
   TBranch        *b_L1_NotMinimumBiasHF1_OR_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_NotMinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_AND;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_AND_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_OR;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_OR_Prescl;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND;   //!
   TBranch        *b_L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet120;   //!
   TBranch        *b_L1_SingleJet120_Prescl;   //!
   TBranch        *b_L1_SingleJet120_FWD3p0;   //!
   TBranch        *b_L1_SingleJet120_FWD3p0_Prescl;   //!
   TBranch        *b_L1_SingleJet120er2p5;   //!
   TBranch        *b_L1_SingleJet120er2p5_Prescl;   //!
   TBranch        *b_L1_SingleJet16_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16_FWD_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_FWD_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16_FWD_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_FWD_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16_FWD_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_FWD_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet180er2p5;   //!
   TBranch        *b_L1_SingleJet180er2p5_Prescl;   //!
   TBranch        *b_L1_SingleJet200;   //!
   TBranch        *b_L1_SingleJet200_Prescl;   //!
   TBranch        *b_L1_SingleJet24_BptxAND;   //!
   TBranch        *b_L1_SingleJet24_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet24_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet24_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet24_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet24_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet28_BptxAND;   //!
   TBranch        *b_L1_SingleJet28_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet28_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet28_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet28_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet28_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet28_FWD_BptxAND;   //!
   TBranch        *b_L1_SingleJet28_FWD_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet28_FWD_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet28_FWD_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet28_FWD_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet28_FWD_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet32_BptxAND;   //!
   TBranch        *b_L1_SingleJet32_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet32_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet32_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet32_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet32_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet35;   //!
   TBranch        *b_L1_SingleJet35_Prescl;   //!
   TBranch        *b_L1_SingleJet35_FWD3p0;   //!
   TBranch        *b_L1_SingleJet35_FWD3p0_Prescl;   //!
   TBranch        *b_L1_SingleJet35er2p5;   //!
   TBranch        *b_L1_SingleJet35er2p5_Prescl;   //!
   TBranch        *b_L1_SingleJet36_BptxAND;   //!
   TBranch        *b_L1_SingleJet36_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet36_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet36_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet36_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet36_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet36_FWD_BptxAND;   //!
   TBranch        *b_L1_SingleJet36_FWD_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet36_FWD_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet36_FWD_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet36_FWD_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet36_FWD_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet40_BptxAND;   //!
   TBranch        *b_L1_SingleJet40_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet40_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet40_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet40_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet40_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet44_BptxAND;   //!
   TBranch        *b_L1_SingleJet44_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet44_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet44_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet44_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet44_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet44_FWD_BptxAND;   //!
   TBranch        *b_L1_SingleJet44_FWD_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet44_FWD_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet44_FWD_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet44_FWD_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet44_FWD_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet48_BptxAND;   //!
   TBranch        *b_L1_SingleJet48_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet48_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet48_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet48_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet48_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet56_BptxAND;   //!
   TBranch        *b_L1_SingleJet56_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet56_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet56_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet56_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet56_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet56_FWD_BptxAND;   //!
   TBranch        *b_L1_SingleJet56_FWD_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet56_FWD_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet56_FWD_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet56_FWD_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet56_FWD_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet60;   //!
   TBranch        *b_L1_SingleJet60_Prescl;   //!
   TBranch        *b_L1_SingleJet60_BptxAND;   //!
   TBranch        *b_L1_SingleJet60_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet60_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet60_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet60_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet60_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet60_FWD3p0;   //!
   TBranch        *b_L1_SingleJet60_FWD3p0_Prescl;   //!
   TBranch        *b_L1_SingleJet60er2p5;   //!
   TBranch        *b_L1_SingleJet60er2p5_Prescl;   //!
   TBranch        *b_L1_SingleJet64_BptxAND;   //!
   TBranch        *b_L1_SingleJet64_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet64_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet64_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet64_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet64_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet64_FWD_BptxAND;   //!
   TBranch        *b_L1_SingleJet64_FWD_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet64_FWD_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet64_FWD_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet64_FWD_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet64_FWD_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet72_BptxAND;   //!
   TBranch        *b_L1_SingleJet72_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet8;   //!
   TBranch        *b_L1_SingleJet8_Prescl;   //!
   TBranch        *b_L1_SingleJet80_BptxAND;   //!
   TBranch        *b_L1_SingleJet80_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet8_BptxAND;   //!
   TBranch        *b_L1_SingleJet8_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet8_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet8_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet8_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet8_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet8_FWD_BptxAND;   //!
   TBranch        *b_L1_SingleJet8_FWD_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet8_FWD_Centrality_30_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet8_FWD_Centrality_30_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet8_FWD_Centrality_50_100_BptxAND;   //!
   TBranch        *b_L1_SingleJet8_FWD_Centrality_50_100_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet90;   //!
   TBranch        *b_L1_SingleJet90_Prescl;   //!
   TBranch        *b_L1_SingleJet90_FWD3p0;   //!
   TBranch        *b_L1_SingleJet90_FWD3p0_Prescl;   //!
   TBranch        *b_L1_SingleJet90er2p5;   //!
   TBranch        *b_L1_SingleJet90er2p5_Prescl;   //!
   TBranch        *b_L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu12_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu16_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMu3_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu5_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMu5_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu7_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMu7_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND;   //!
   TBranch        *b_L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND;   //!
   TBranch        *b_L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND;   //!
   TBranch        *b_L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND;   //!
   TBranch        *b_L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND_Prescl;   //!

   hltTreeReaderPbPbDATA(TTree *tree=0);
   virtual ~hltTreeReaderPbPbDATA();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef hltTreeReaderPbPbDATA_cxx
hltTreeReaderPbPbDATA::hltTreeReaderPbPbDATA(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_merged/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_merged_part0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_merged/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_merged_part0.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("../HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_merged/HIHardProbes_HIRun2018A-04Apr2019-v1_PbPbCSVv2TaggersFixed_CleanJets_merged_part0.root:/hltanalysis");
      dir->GetObject("HltTree",tree);

   }
   Init(tree);
}

hltTreeReaderPbPbDATA::~hltTreeReaderPbPbDATA()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t hltTreeReaderPbPbDATA::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t hltTreeReaderPbPbDATA::LoadTree(Long64_t entry)
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

void hltTreeReaderPbPbDATA::Init(TTree *tree)
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

   fChain->SetBranchAddress("recoNVrtOffline0", &recoNVrtOffline0, &b_NVrtx);
   fChain->SetBranchAddress("recoVrtXOffline0", &recoVrtXOffline0, &b_recoVrtXOffline0);
   fChain->SetBranchAddress("recoVrtYOffline0", &recoVrtYOffline0, &b_recoVrtYOffline0);
   fChain->SetBranchAddress("recoVrtZOffline0", &recoVrtZOffline0, &b_recoVrtZOffline0);
   fChain->SetBranchAddress("recoVrtNtrkOffline0", &recoVrtNtrkOffline0, &b_recoVrtNtrkOffline0);
   fChain->SetBranchAddress("recoVrtChi2Offline0", &recoVrtChi2Offline0, &b_recoVrtChi2Offline0);
   fChain->SetBranchAddress("recoVrtNdofOffline0", &recoVrtNdofOffline0, &b_recoVrtNdofOffline0);
   fChain->SetBranchAddress("Event", &Event, &b_Event);
   fChain->SetBranchAddress("LumiBlock", &LumiBlock, &b_LumiBlock);
   fChain->SetBranchAddress("Run", &Run, &b_Run);
   fChain->SetBranchAddress("Bx", &Bx, &b_Bx);
   fChain->SetBranchAddress("Orbit", &Orbit, &b_Orbit);
   fChain->SetBranchAddress("AvgInstDelLumi", &AvgInstDelLumi, &b_AvgInstDelLumi);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_BptxAND_v1", &HLT_HICastor_HighJet_BptxAND_v1, &b_HLT_HICastor_HighJet_BptxAND_v1);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_BptxAND_v1_Prescl", &HLT_HICastor_HighJet_BptxAND_v1_Prescl, &b_HLT_HICastor_HighJet_BptxAND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1", &HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1, &b_HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1_Prescl", &HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1_Prescl, &b_HLT_HICastor_HighJet_MBHF1AND_BptxAND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1", &HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1, &b_HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1_Prescl", &HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1_Prescl, &b_HLT_HICastor_HighJet_MBHF1OR_BptxAND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_MBHF1OR_v1", &HLT_HICastor_HighJet_MBHF1OR_v1, &b_HLT_HICastor_HighJet_MBHF1OR_v1);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_MBHF1OR_v1_Prescl", &HLT_HICastor_HighJet_MBHF1OR_v1_Prescl, &b_HLT_HICastor_HighJet_MBHF1OR_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1", &HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1, &b_HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1_Prescl", &HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1_Prescl, &b_HLT_HICastor_HighJet_MBHF2AND_BptxAND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_NotMBHF2AND_v1", &HLT_HICastor_HighJet_NotMBHF2AND_v1, &b_HLT_HICastor_HighJet_NotMBHF2AND_v1);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_NotMBHF2AND_v1_Prescl", &HLT_HICastor_HighJet_NotMBHF2AND_v1_Prescl, &b_HLT_HICastor_HighJet_NotMBHF2AND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_NotMBHF2OR_v1", &HLT_HICastor_HighJet_NotMBHF2OR_v1, &b_HLT_HICastor_HighJet_NotMBHF2OR_v1);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_NotMBHF2OR_v1_Prescl", &HLT_HICastor_HighJet_NotMBHF2OR_v1_Prescl, &b_HLT_HICastor_HighJet_NotMBHF2OR_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_v1", &HLT_HICastor_HighJet_v1, &b_HLT_HICastor_HighJet_v1);
   fChain->SetBranchAddress("HLT_HICastor_HighJet_v1_Prescl", &HLT_HICastor_HighJet_v1_Prescl, &b_HLT_HICastor_HighJet_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_BptxAND_v1", &HLT_HICastor_MediumJet_BptxAND_v1, &b_HLT_HICastor_MediumJet_BptxAND_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_BptxAND_v1_Prescl", &HLT_HICastor_MediumJet_BptxAND_v1_Prescl, &b_HLT_HICastor_MediumJet_BptxAND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1", &HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1, &b_HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1_Prescl", &HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1_Prescl, &b_HLT_HICastor_MediumJet_MBHF1OR_BptxAND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_MBHF1OR_v1", &HLT_HICastor_MediumJet_MBHF1OR_v1, &b_HLT_HICastor_MediumJet_MBHF1OR_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_MBHF1OR_v1_Prescl", &HLT_HICastor_MediumJet_MBHF1OR_v1_Prescl, &b_HLT_HICastor_MediumJet_MBHF1OR_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_NotMBHF2AND_v1", &HLT_HICastor_MediumJet_NotMBHF2AND_v1, &b_HLT_HICastor_MediumJet_NotMBHF2AND_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_NotMBHF2AND_v1_Prescl", &HLT_HICastor_MediumJet_NotMBHF2AND_v1_Prescl, &b_HLT_HICastor_MediumJet_NotMBHF2AND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_NotMBHF2OR_v1", &HLT_HICastor_MediumJet_NotMBHF2OR_v1, &b_HLT_HICastor_MediumJet_NotMBHF2OR_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_NotMBHF2OR_v1_Prescl", &HLT_HICastor_MediumJet_NotMBHF2OR_v1_Prescl, &b_HLT_HICastor_MediumJet_NotMBHF2OR_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1", &HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1, &b_HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1_Prescl", &HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1_Prescl, &b_HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_BptxAND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1", &HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1, &b_HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1_Prescl", &HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1_Prescl, &b_HLT_HICastor_MediumJet_SingleEG5_MBHF1OR_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1", &HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1, &b_HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1_Prescl", &HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1_Prescl, &b_HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_BptxAND_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1", &HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1, &b_HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1_Prescl", &HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1_Prescl, &b_HLT_HICastor_MediumJet_SingleMu0_MBHF1OR_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_v1", &HLT_HICastor_MediumJet_v1, &b_HLT_HICastor_MediumJet_v1);
   fChain->SetBranchAddress("HLT_HICastor_MediumJet_v1_Prescl", &HLT_HICastor_MediumJet_v1_Prescl, &b_HLT_HICastor_MediumJet_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1", &HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1, &b_HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1_Prescl", &HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1_Prescl, &b_HLT_HICsAK4PFJet100Eta1p5_Beamspot_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1", &HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1, &b_HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1_Prescl", &HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1_Prescl, &b_HLT_HICsAK4PFJet100Eta1p5_Centrality_30_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1", &HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1, &b_HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1_Prescl", &HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1_Prescl, &b_HLT_HICsAK4PFJet100Eta1p5_Centrality_50_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet100Eta1p5_v1", &HLT_HICsAK4PFJet100Eta1p5_v1, &b_HLT_HICsAK4PFJet100Eta1p5_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet100Eta1p5_v1_Prescl", &HLT_HICsAK4PFJet100Eta1p5_v1_Prescl, &b_HLT_HICsAK4PFJet100Eta1p5_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet120Eta1p5_v1", &HLT_HICsAK4PFJet120Eta1p5_v1, &b_HLT_HICsAK4PFJet120Eta1p5_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet120Eta1p5_v1_Prescl", &HLT_HICsAK4PFJet120Eta1p5_v1_Prescl, &b_HLT_HICsAK4PFJet120Eta1p5_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1", &HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1, &b_HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1_Prescl", &HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1_Prescl, &b_HLT_HICsAK4PFJet60Eta1p5_Centrality_30_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1", &HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1, &b_HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1_Prescl", &HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1_Prescl, &b_HLT_HICsAK4PFJet60Eta1p5_Centrality_50_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet60Eta1p5_v1", &HLT_HICsAK4PFJet60Eta1p5_v1, &b_HLT_HICsAK4PFJet60Eta1p5_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet60Eta1p5_v1_Prescl", &HLT_HICsAK4PFJet60Eta1p5_v1_Prescl, &b_HLT_HICsAK4PFJet60Eta1p5_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1", &HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1, &b_HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1_Prescl", &HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1_Prescl, &b_HLT_HICsAK4PFJet80Eta1p5_Centrality_30_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1", &HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1, &b_HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1_Prescl", &HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1_Prescl, &b_HLT_HICsAK4PFJet80Eta1p5_Centrality_50_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet80Eta1p5_v1", &HLT_HICsAK4PFJet80Eta1p5_v1, &b_HLT_HICsAK4PFJet80Eta1p5_v1);
   fChain->SetBranchAddress("HLT_HICsAK4PFJet80Eta1p5_v1_Prescl", &HLT_HICsAK4PFJet80Eta1p5_v1_Prescl, &b_HLT_HICsAK4PFJet80Eta1p5_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1", &HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1, &b_HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl", &HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl, &b_HLT_HIEle10Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1", &HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1, &b_HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl", &HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl, &b_HLT_HIEle10Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1", &HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1, &b_HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl", &HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl, &b_HLT_HIEle10Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1", &HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1, &b_HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl", &HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl, &b_HLT_HIEle10Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1", &HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1, &b_HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl", &HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl, &b_HLT_HIEle15Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1", &HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1, &b_HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl", &HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl, &b_HLT_HIEle15Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1", &HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1, &b_HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl", &HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl, &b_HLT_HIEle15Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1", &HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1, &b_HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl", &HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl, &b_HLT_HIEle15Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1", &HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1, &b_HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl", &HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl, &b_HLT_HIEle20Gsf_PuAK4CaloJet100Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1", &HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1, &b_HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl", &HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl, &b_HLT_HIEle20Gsf_PuAK4CaloJet40Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1", &HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1, &b_HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl", &HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl, &b_HLT_HIEle20Gsf_PuAK4CaloJet60Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1", &HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1, &b_HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl", &HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl, &b_HLT_HIEle20Gsf_PuAK4CaloJet80Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl", &HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl, &b_HLT_HIL3Mu3Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_FilterDr_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet100Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_FilterDr_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet40Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_FilterDr_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet60Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_FilterDr_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl", &HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl, &b_HLT_HIL3Mu5Eta2p5_PuAK4CaloJet80Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1", &HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1, &b_HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1_Prescl", &HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1_Prescl, &b_HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p75_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1", &HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1, &b_HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1_Prescl", &HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1_Prescl, &b_HLT_HIPuAK4CaloJet100Eta2p4_CSVv2WP0p8_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1", &HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1, &b_HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1_Prescl", &HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1_Prescl, &b_HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p4_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1", &HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1, &b_HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1_Prescl", &HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1_Prescl, &b_HLT_HIPuAK4CaloJet100Eta2p4_DeepCSV0p71_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1", &HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1, &b_HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1_Prescl", &HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1_Prescl, &b_HLT_HIPuAK4CaloJet100Eta5p1_Centrality_30_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1", &HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1, &b_HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1_Prescl", &HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1_Prescl, &b_HLT_HIPuAK4CaloJet100Eta5p1_Centrality_50_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta5p1_v1", &HLT_HIPuAK4CaloJet100Eta5p1_v1, &b_HLT_HIPuAK4CaloJet100Eta5p1_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Eta5p1_v1_Prescl", &HLT_HIPuAK4CaloJet100Eta5p1_v1_Prescl, &b_HLT_HIPuAK4CaloJet100Eta5p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Fwd_v1", &HLT_HIPuAK4CaloJet100Fwd_v1, &b_HLT_HIPuAK4CaloJet100Fwd_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100Fwd_v1_Prescl", &HLT_HIPuAK4CaloJet100Fwd_v1_Prescl, &b_HLT_HIPuAK4CaloJet100Fwd_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100_35_Eta0p7_v1", &HLT_HIPuAK4CaloJet100_35_Eta0p7_v1, &b_HLT_HIPuAK4CaloJet100_35_Eta0p7_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100_35_Eta0p7_v1_Prescl", &HLT_HIPuAK4CaloJet100_35_Eta0p7_v1_Prescl, &b_HLT_HIPuAK4CaloJet100_35_Eta0p7_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100_35_Eta1p1_v1", &HLT_HIPuAK4CaloJet100_35_Eta1p1_v1, &b_HLT_HIPuAK4CaloJet100_35_Eta1p1_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet100_35_Eta1p1_v1_Prescl", &HLT_HIPuAK4CaloJet100_35_Eta1p1_v1_Prescl, &b_HLT_HIPuAK4CaloJet100_35_Eta1p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet120Eta5p1_v1", &HLT_HIPuAK4CaloJet120Eta5p1_v1, &b_HLT_HIPuAK4CaloJet120Eta5p1_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet120Eta5p1_v1_Prescl", &HLT_HIPuAK4CaloJet120Eta5p1_v1_Prescl, &b_HLT_HIPuAK4CaloJet120Eta5p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet120Fwd_v1", &HLT_HIPuAK4CaloJet120Fwd_v1, &b_HLT_HIPuAK4CaloJet120Fwd_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet120Fwd_v1_Prescl", &HLT_HIPuAK4CaloJet120Fwd_v1_Prescl, &b_HLT_HIPuAK4CaloJet120Fwd_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1", &HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1, &b_HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1_Prescl", &HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1_Prescl, &b_HLT_HIPuAK4CaloJet40Eta5p1_Centrality_30_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1", &HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1, &b_HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1_Prescl", &HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1_Prescl, &b_HLT_HIPuAK4CaloJet40Eta5p1_Centrality_50_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet40Eta5p1_v1", &HLT_HIPuAK4CaloJet40Eta5p1_v1, &b_HLT_HIPuAK4CaloJet40Eta5p1_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet40Eta5p1_v1_Prescl", &HLT_HIPuAK4CaloJet40Eta5p1_v1_Prescl, &b_HLT_HIPuAK4CaloJet40Eta5p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet40Fwd_v1", &HLT_HIPuAK4CaloJet40Fwd_v1, &b_HLT_HIPuAK4CaloJet40Fwd_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet40Fwd_v1_Prescl", &HLT_HIPuAK4CaloJet40Fwd_v1_Prescl, &b_HLT_HIPuAK4CaloJet40Fwd_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1", &HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1, &b_HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1_Prescl", &HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1_Prescl, &b_HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p75_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1", &HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1, &b_HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1_Prescl", &HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1_Prescl, &b_HLT_HIPuAK4CaloJet60Eta2p4_CSVv2WP0p8_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1", &HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1, &b_HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1_Prescl", &HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1_Prescl, &b_HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p4_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1", &HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1, &b_HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1_Prescl", &HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1_Prescl, &b_HLT_HIPuAK4CaloJet60Eta2p4_DeepCSV0p71_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1", &HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1, &b_HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1_Prescl", &HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1_Prescl, &b_HLT_HIPuAK4CaloJet60Eta5p1_Centrality_30_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1", &HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1, &b_HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1_Prescl", &HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1_Prescl, &b_HLT_HIPuAK4CaloJet60Eta5p1_Centrality_50_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta5p1_v1", &HLT_HIPuAK4CaloJet60Eta5p1_v1, &b_HLT_HIPuAK4CaloJet60Eta5p1_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Eta5p1_v1_Prescl", &HLT_HIPuAK4CaloJet60Eta5p1_v1_Prescl, &b_HLT_HIPuAK4CaloJet60Eta5p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Fwd_v1", &HLT_HIPuAK4CaloJet60Fwd_v1, &b_HLT_HIPuAK4CaloJet60Fwd_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet60Fwd_v1_Prescl", &HLT_HIPuAK4CaloJet60Fwd_v1_Prescl, &b_HLT_HIPuAK4CaloJet60Fwd_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1", &HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1, &b_HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1_Prescl", &HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1_Prescl, &b_HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p75_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1", &HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1, &b_HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1_Prescl", &HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1_Prescl, &b_HLT_HIPuAK4CaloJet80Eta2p4_CSVv2WP0p8_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1", &HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1, &b_HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1_Prescl", &HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1_Prescl, &b_HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p4_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1", &HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1, &b_HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1_Prescl", &HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1_Prescl, &b_HLT_HIPuAK4CaloJet80Eta2p4_DeepCSV0p71_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1", &HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1, &b_HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1_Prescl", &HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1_Prescl, &b_HLT_HIPuAK4CaloJet80Eta5p1_Centrality_30_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1", &HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1, &b_HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1_Prescl", &HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1_Prescl, &b_HLT_HIPuAK4CaloJet80Eta5p1_Centrality_50_100_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta5p1_v1", &HLT_HIPuAK4CaloJet80Eta5p1_v1, &b_HLT_HIPuAK4CaloJet80Eta5p1_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Eta5p1_v1_Prescl", &HLT_HIPuAK4CaloJet80Eta5p1_v1_Prescl, &b_HLT_HIPuAK4CaloJet80Eta5p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Fwd_v1", &HLT_HIPuAK4CaloJet80Fwd_v1, &b_HLT_HIPuAK4CaloJet80Fwd_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80Fwd_v1_Prescl", &HLT_HIPuAK4CaloJet80Fwd_v1_Prescl, &b_HLT_HIPuAK4CaloJet80Fwd_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80_35_Eta0p7_v1", &HLT_HIPuAK4CaloJet80_35_Eta0p7_v1, &b_HLT_HIPuAK4CaloJet80_35_Eta0p7_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80_35_Eta0p7_v1_Prescl", &HLT_HIPuAK4CaloJet80_35_Eta0p7_v1_Prescl, &b_HLT_HIPuAK4CaloJet80_35_Eta0p7_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80_35_Eta1p1_v1", &HLT_HIPuAK4CaloJet80_35_Eta1p1_v1, &b_HLT_HIPuAK4CaloJet80_35_Eta1p1_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80_35_Eta1p1_v1_Prescl", &HLT_HIPuAK4CaloJet80_35_Eta1p1_v1_Prescl, &b_HLT_HIPuAK4CaloJet80_35_Eta1p1_v1_Prescl);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1", &HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1, &b_HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1);
   fChain->SetBranchAddress("HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl", &HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl, &b_HLT_HIPuAK4CaloJet80_45_45_Eta2p1_v1_Prescl);
   fChain->SetBranchAddress("L1_CastorHighJet", &L1_CastorHighJet, &b_L1_CastorHighJet);
   fChain->SetBranchAddress("L1_CastorHighJet_Prescl", &L1_CastorHighJet_Prescl, &b_L1_CastorHighJet_Prescl);
   fChain->SetBranchAddress("L1_CastorHighJet_BptxAND", &L1_CastorHighJet_BptxAND, &b_L1_CastorHighJet_BptxAND);
   fChain->SetBranchAddress("L1_CastorHighJet_BptxAND_Prescl", &L1_CastorHighJet_BptxAND_Prescl, &b_L1_CastorHighJet_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND", &L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND, &b_L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_CastorHighJet_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND", &L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND, &b_L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_CastorHighJet_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND", &L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND, &b_L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_CastorHighJet_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND", &L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND, &b_L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_CastorHighJet_OR_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND", &L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND, &b_L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND_Prescl", &L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_CastorHighJet_OR_MinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorMediumJet", &L1_CastorMediumJet, &b_L1_CastorMediumJet);
   fChain->SetBranchAddress("L1_CastorMediumJet_Prescl", &L1_CastorMediumJet_Prescl, &b_L1_CastorMediumJet_Prescl);
   fChain->SetBranchAddress("L1_CastorMediumJet_BptxAND", &L1_CastorMediumJet_BptxAND, &b_L1_CastorMediumJet_BptxAND);
   fChain->SetBranchAddress("L1_CastorMediumJet_BptxAND_Prescl", &L1_CastorMediumJet_BptxAND_Prescl, &b_L1_CastorMediumJet_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND", &L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND, &b_L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_CastorMediumJet_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND", &L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND, &b_L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_CastorMediumJet_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND", &L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND, &b_L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_CastorMediumJet_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND", &L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND, &b_L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_CastorMediumJet_SingleEG5_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND", &L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND, &b_L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_CastorMediumJet_SingleMu0_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND", &L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND, &b_L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_Centrality_20_100_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND", &L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND, &b_L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND", &L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND, &b_L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_DoubleEG2_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND", &L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND, &b_L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_DoubleEG2_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND", &L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND, &b_L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_DoubleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND", &L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND, &b_L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_DoubleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet16And12_MidEta2p7_BptxAND", &L1_DoubleJet16And12_MidEta2p7_BptxAND, &b_L1_DoubleJet16And12_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet16And12_MidEta2p7_BptxAND_Prescl", &L1_DoubleJet16And12_MidEta2p7_BptxAND_Prescl, &b_L1_DoubleJet16And12_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND", &L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND, &b_L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl", &L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl, &b_L1_DoubleJet16And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND", &L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND, &b_L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl", &L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl, &b_L1_DoubleJet16And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet16And8_MidEta2p7_BptxAND", &L1_DoubleJet16And8_MidEta2p7_BptxAND, &b_L1_DoubleJet16And8_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet16And8_MidEta2p7_BptxAND_Prescl", &L1_DoubleJet16And8_MidEta2p7_BptxAND_Prescl, &b_L1_DoubleJet16And8_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND", &L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND, &b_L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl", &L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl, &b_L1_DoubleJet16And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND", &L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND, &b_L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl", &L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl, &b_L1_DoubleJet16And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet20And12_MidEta2p7_BptxAND", &L1_DoubleJet20And12_MidEta2p7_BptxAND, &b_L1_DoubleJet20And12_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet20And12_MidEta2p7_BptxAND_Prescl", &L1_DoubleJet20And12_MidEta2p7_BptxAND_Prescl, &b_L1_DoubleJet20And12_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND", &L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND, &b_L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl", &L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl, &b_L1_DoubleJet20And12_MidEta2p7_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND", &L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND, &b_L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl", &L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl, &b_L1_DoubleJet20And12_MidEta2p7_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet20And8_MidEta2p7_BptxAND", &L1_DoubleJet20And8_MidEta2p7_BptxAND, &b_L1_DoubleJet20And8_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet20And8_MidEta2p7_BptxAND_Prescl", &L1_DoubleJet20And8_MidEta2p7_BptxAND_Prescl, &b_L1_DoubleJet20And8_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND", &L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND, &b_L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl", &L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl, &b_L1_DoubleJet20And8_MidEta2p7_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND", &L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND, &b_L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl", &L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl, &b_L1_DoubleJet20And8_MidEta2p7_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet28And16_MidEta2p7_BptxAND", &L1_DoubleJet28And16_MidEta2p7_BptxAND, &b_L1_DoubleJet28And16_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet28And16_MidEta2p7_BptxAND_Prescl", &L1_DoubleJet28And16_MidEta2p7_BptxAND_Prescl, &b_L1_DoubleJet28And16_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND", &L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND, &b_L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND_Prescl", &L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND_Prescl, &b_L1_DoubleJet28And16_MidEta2p7_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND", &L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND, &b_L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND_Prescl", &L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND_Prescl, &b_L1_DoubleJet28And16_MidEta2p7_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND", &L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND, &b_L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_DoubleMu0_Centrality_10_100_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND", &L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND, &b_L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_DoubleMu0_Centrality_30_100_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND", &L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND, &b_L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_DoubleMu0_Centrality_50_100_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND", &L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND, &b_L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_DoubleMu0_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND", &L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND, &b_L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_DoubleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND", &L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND, &b_L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_DoubleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND", &L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND, &b_L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_DoubleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND", &L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND, &b_L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_DoubleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND", &L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT10_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND", &L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT10_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND", &L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT10_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND", &L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT10_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND", &L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT10_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND", &L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT10_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym40_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym50_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym55_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT50_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND", &L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND", &L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND", &L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND", &L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND", &L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND", &L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND", &L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND", &L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT5_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_MinimumBiasHF1_OR_BptxAND", &L1_ETT5_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT5_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT5_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT5_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT5_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT5_NotMinimumBiasHF2_OR", &L1_ETT5_NotMinimumBiasHF2_OR, &b_L1_ETT5_NotMinimumBiasHF2_OR);
   fChain->SetBranchAddress("L1_ETT5_NotMinimumBiasHF2_OR_Prescl", &L1_ETT5_NotMinimumBiasHF2_OR_Prescl, &b_L1_ETT5_NotMinimumBiasHF2_OR_Prescl);
   fChain->SetBranchAddress("L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND", &L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT60_ETTAsym60_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND", &L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT60_ETTAsym65_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND", &L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT65_ETTAsym70_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND", &L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND, &b_L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETT65_ETTAsym80_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND", &L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT8_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND", &L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT8_ETTAsym55_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND", &L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT8_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND", &L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT8_ETTAsym65_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND", &L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT8_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND", &L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND, &b_L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETT8_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND", &L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND, &b_L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETTAsym40_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND", &L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETTAsym40_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND", &L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND, &b_L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETTAsym50_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND", &L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETTAsym50_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND", &L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND, &b_L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETTAsym60_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND", &L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETTAsym60_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND", &L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND, &b_L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETTAsym70_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND", &L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETTAsym70_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND", &L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND, &b_L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ETTAsym80_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND", &L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND, &b_L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ETTAsym80_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF0_AND_BptxAND", &L1_MinimumBiasHF0_AND_BptxAND, &b_L1_MinimumBiasHF0_AND_BptxAND);
   fChain->SetBranchAddress("L1_MinimumBiasHF0_AND_BptxAND_Prescl", &L1_MinimumBiasHF0_AND_BptxAND_Prescl, &b_L1_MinimumBiasHF0_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF0_OR_BptxAND", &L1_MinimumBiasHF0_OR_BptxAND, &b_L1_MinimumBiasHF0_OR_BptxAND);
   fChain->SetBranchAddress("L1_MinimumBiasHF0_OR_BptxAND_Prescl", &L1_MinimumBiasHF0_OR_BptxAND_Prescl, &b_L1_MinimumBiasHF0_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_AND", &L1_MinimumBiasHF1_AND, &b_L1_MinimumBiasHF1_AND);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_AND_Prescl", &L1_MinimumBiasHF1_AND_Prescl, &b_L1_MinimumBiasHF1_AND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_AND_BptxAND", &L1_MinimumBiasHF1_AND_BptxAND, &b_L1_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND", &L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND, &b_L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND_Prescl", &L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND_Prescl, &b_L1_MinimumBiasHF1_AND_OR_ETT10_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_OR", &L1_MinimumBiasHF1_OR, &b_L1_MinimumBiasHF1_OR);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_OR_Prescl", &L1_MinimumBiasHF1_OR_Prescl, &b_L1_MinimumBiasHF1_OR_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_OR_BptxAND", &L1_MinimumBiasHF1_OR_BptxAND, &b_L1_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_XOR_BptxAND", &L1_MinimumBiasHF1_XOR_BptxAND, &b_L1_MinimumBiasHF1_XOR_BptxAND);
   fChain->SetBranchAddress("L1_MinimumBiasHF1_XOR_BptxAND_Prescl", &L1_MinimumBiasHF1_XOR_BptxAND_Prescl, &b_L1_MinimumBiasHF1_XOR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF2_AND", &L1_MinimumBiasHF2_AND, &b_L1_MinimumBiasHF2_AND);
   fChain->SetBranchAddress("L1_MinimumBiasHF2_AND_Prescl", &L1_MinimumBiasHF2_AND_Prescl, &b_L1_MinimumBiasHF2_AND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF2_AND_BptxAND", &L1_MinimumBiasHF2_AND_BptxAND, &b_L1_MinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_MinimumBiasHF2_AND_BptxAND_Prescl", &L1_MinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_MinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF2_OR", &L1_MinimumBiasHF2_OR, &b_L1_MinimumBiasHF2_OR);
   fChain->SetBranchAddress("L1_MinimumBiasHF2_OR_Prescl", &L1_MinimumBiasHF2_OR_Prescl, &b_L1_MinimumBiasHF2_OR_Prescl);
   fChain->SetBranchAddress("L1_MinimumBiasHF2_OR_BptxAND", &L1_MinimumBiasHF2_OR_BptxAND, &b_L1_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT100_MinimumBiasHF1_AND_BptxAND", &L1_NotETT100_MinimumBiasHF1_AND_BptxAND, &b_L1_NotETT100_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_NotETT100_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_NotETT100_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_NotETT100_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT110_MinimumBiasHF1_OR_BptxAND", &L1_NotETT110_MinimumBiasHF1_OR_BptxAND, &b_L1_NotETT110_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT110_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_NotETT110_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_NotETT110_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT110_MinimumBiasHF2_OR_BptxAND", &L1_NotETT110_MinimumBiasHF2_OR_BptxAND, &b_L1_NotETT110_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT110_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_NotETT110_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_NotETT110_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT150_MinimumBiasHF1_AND_BptxAND", &L1_NotETT150_MinimumBiasHF1_AND_BptxAND, &b_L1_NotETT150_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_NotETT150_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_NotETT150_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_NotETT150_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT150_MinimumBiasHF1_OR_BptxAND", &L1_NotETT150_MinimumBiasHF1_OR_BptxAND, &b_L1_NotETT150_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT150_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_NotETT150_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_NotETT150_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT150_MinimumBiasHF2_OR_BptxAND", &L1_NotETT150_MinimumBiasHF2_OR_BptxAND, &b_L1_NotETT150_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT150_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_NotETT150_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_NotETT150_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT200_MinimumBiasHF1_AND_BptxAND", &L1_NotETT200_MinimumBiasHF1_AND_BptxAND, &b_L1_NotETT200_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_NotETT200_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_NotETT200_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_NotETT200_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT20_MinimumBiasHF1_AND_BptxAND", &L1_NotETT20_MinimumBiasHF1_AND_BptxAND, &b_L1_NotETT20_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_NotETT20_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_NotETT20_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_NotETT20_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT20_MinimumBiasHF1_OR_BptxAND", &L1_NotETT20_MinimumBiasHF1_OR_BptxAND, &b_L1_NotETT20_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT20_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_NotETT20_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_NotETT20_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT20_MinimumBiasHF2_OR_BptxAND", &L1_NotETT20_MinimumBiasHF2_OR_BptxAND, &b_L1_NotETT20_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT20_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_NotETT20_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_NotETT20_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT80_MinimumBiasHF1_AND_BptxAND", &L1_NotETT80_MinimumBiasHF1_AND_BptxAND, &b_L1_NotETT80_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_NotETT80_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_NotETT80_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_NotETT80_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT80_MinimumBiasHF1_OR_BptxAND", &L1_NotETT80_MinimumBiasHF1_OR_BptxAND, &b_L1_NotETT80_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT80_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_NotETT80_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_NotETT80_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT80_MinimumBiasHF2_OR_BptxAND", &L1_NotETT80_MinimumBiasHF2_OR_BptxAND, &b_L1_NotETT80_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT80_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_NotETT80_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_NotETT80_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT95_MinimumBiasHF1_AND_BptxAND", &L1_NotETT95_MinimumBiasHF1_AND_BptxAND, &b_L1_NotETT95_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_NotETT95_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_NotETT95_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_NotETT95_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT95_MinimumBiasHF1_OR_BptxAND", &L1_NotETT95_MinimumBiasHF1_OR_BptxAND, &b_L1_NotETT95_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT95_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_NotETT95_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_NotETT95_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotETT95_MinimumBiasHF2_OR_BptxAND", &L1_NotETT95_MinimumBiasHF2_OR_BptxAND, &b_L1_NotETT95_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotETT95_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_NotETT95_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_NotETT95_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_AND_BptxAND", &L1_NotMinimumBiasHF0_AND_BptxAND, &b_L1_NotMinimumBiasHF0_AND_BptxAND);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_AND_BptxAND_Prescl", &L1_NotMinimumBiasHF0_AND_BptxAND_Prescl, &b_L1_NotMinimumBiasHF0_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1", &L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1, &b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1_Prescl", &L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1_Prescl, &b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_1_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2", &L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2, &b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2_Prescl", &L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2_Prescl, &b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_2_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4", &L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4, &b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4_Prescl", &L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4_Prescl, &b_L1_NotMinimumBiasHF0_AND_BptxAND_TOTEM_4_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_OR_BptxAND", &L1_NotMinimumBiasHF0_OR_BptxAND, &b_L1_NotMinimumBiasHF0_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_OR_BptxAND_Prescl", &L1_NotMinimumBiasHF0_OR_BptxAND_Prescl, &b_L1_NotMinimumBiasHF0_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1", &L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1, &b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1_Prescl", &L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1_Prescl, &b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_1_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2", &L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2, &b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2_Prescl", &L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2_Prescl, &b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_2_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4", &L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4, &b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4_Prescl", &L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4_Prescl, &b_L1_NotMinimumBiasHF0_OR_BptxAND_TOTEM_4_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF1_AND", &L1_NotMinimumBiasHF1_AND, &b_L1_NotMinimumBiasHF1_AND);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF1_AND_Prescl", &L1_NotMinimumBiasHF1_AND_Prescl, &b_L1_NotMinimumBiasHF1_AND_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF1_OR", &L1_NotMinimumBiasHF1_OR, &b_L1_NotMinimumBiasHF1_OR);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF1_OR_Prescl", &L1_NotMinimumBiasHF1_OR_Prescl, &b_L1_NotMinimumBiasHF1_OR_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF1_OR_BptxAND", &L1_NotMinimumBiasHF1_OR_BptxAND, &b_L1_NotMinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF1_OR_BptxAND_Prescl", &L1_NotMinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_NotMinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF2_AND", &L1_NotMinimumBiasHF2_AND, &b_L1_NotMinimumBiasHF2_AND);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF2_AND_Prescl", &L1_NotMinimumBiasHF2_AND_Prescl, &b_L1_NotMinimumBiasHF2_AND_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF2_AND_BptxAND", &L1_NotMinimumBiasHF2_AND_BptxAND, &b_L1_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF2_OR", &L1_NotMinimumBiasHF2_OR, &b_L1_NotMinimumBiasHF2_OR);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF2_OR_Prescl", &L1_NotMinimumBiasHF2_OR_Prescl, &b_L1_NotMinimumBiasHF2_OR_Prescl);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF2_OR_BptxAND", &L1_NotMinimumBiasHF2_OR_BptxAND, &b_L1_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND", &L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND, &b_L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND_Prescl", &L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet28_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND", &L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND, &b_L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND_Prescl", &L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet32_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND", &L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND, &b_L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND_Prescl", &L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet40_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND", &L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND, &b_L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND_Prescl", &L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet44_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND", &L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND, &b_L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND_Prescl", &L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet56_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND", &L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND, &b_L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND_Prescl", &L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet60_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG12_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND", &L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND, &b_L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND_Prescl", &L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG15_SingleJet28_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG15_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND", &L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND, &b_L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND_Prescl", &L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG15_SingleJet44_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG15_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND", &L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND, &b_L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND_Prescl", &L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG15_SingleJet56_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG15_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND", &L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND, &b_L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND_Prescl", &L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG15_SingleJet60_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG15_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND", &L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND, &b_L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_SingleEG3_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND", &L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND, &b_L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_SingleEG3_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND", &L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND, &b_L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_SingleEG5_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND", &L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND, &b_L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_SingleEG5_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND", &L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND, &b_L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND_Prescl", &L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG5_SingleJet28_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND", &L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND, &b_L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND_Prescl", &L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG5_SingleJet32_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND", &L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND, &b_L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND_Prescl", &L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG5_SingleJet40_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND", &L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND, &b_L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND_Prescl", &L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet28_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet28_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND", &L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND, &b_L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND_Prescl", &L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet32_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND", &L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND, &b_L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND_Prescl", &L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet40_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND", &L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND, &b_L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND_Prescl", &L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet44_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet44_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND", &L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND, &b_L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND_Prescl", &L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet56_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet56_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND", &L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND, &b_L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND_Prescl", &L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet60_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND", &L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND, &b_L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND);
   fChain->SetBranchAddress("L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl", &L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl, &b_L1_SingleEG7_SingleJet60_MidEta2p7_MinDr0p4_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet120", &L1_SingleJet120, &b_L1_SingleJet120);
   fChain->SetBranchAddress("L1_SingleJet120_Prescl", &L1_SingleJet120_Prescl, &b_L1_SingleJet120_Prescl);
   fChain->SetBranchAddress("L1_SingleJet120_FWD3p0", &L1_SingleJet120_FWD3p0, &b_L1_SingleJet120_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet120_FWD3p0_Prescl", &L1_SingleJet120_FWD3p0_Prescl, &b_L1_SingleJet120_FWD3p0_Prescl);
   fChain->SetBranchAddress("L1_SingleJet120er2p5", &L1_SingleJet120er2p5, &b_L1_SingleJet120er2p5);
   fChain->SetBranchAddress("L1_SingleJet120er2p5_Prescl", &L1_SingleJet120er2p5_Prescl, &b_L1_SingleJet120er2p5_Prescl);
   fChain->SetBranchAddress("L1_SingleJet16_BptxAND", &L1_SingleJet16_BptxAND, &b_L1_SingleJet16_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet16_BptxAND_Prescl", &L1_SingleJet16_BptxAND_Prescl, &b_L1_SingleJet16_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet16_Centrality_30_100_BptxAND", &L1_SingleJet16_Centrality_30_100_BptxAND, &b_L1_SingleJet16_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet16_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet16_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet16_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet16_Centrality_50_100_BptxAND", &L1_SingleJet16_Centrality_50_100_BptxAND, &b_L1_SingleJet16_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet16_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet16_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet16_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet16_FWD_BptxAND", &L1_SingleJet16_FWD_BptxAND, &b_L1_SingleJet16_FWD_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet16_FWD_BptxAND_Prescl", &L1_SingleJet16_FWD_BptxAND_Prescl, &b_L1_SingleJet16_FWD_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet16_FWD_Centrality_30_100_BptxAND", &L1_SingleJet16_FWD_Centrality_30_100_BptxAND, &b_L1_SingleJet16_FWD_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet16_FWD_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet16_FWD_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet16_FWD_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet16_FWD_Centrality_50_100_BptxAND", &L1_SingleJet16_FWD_Centrality_50_100_BptxAND, &b_L1_SingleJet16_FWD_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet16_FWD_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet16_FWD_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet16_FWD_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet180er2p5", &L1_SingleJet180er2p5, &b_L1_SingleJet180er2p5);
   fChain->SetBranchAddress("L1_SingleJet180er2p5_Prescl", &L1_SingleJet180er2p5_Prescl, &b_L1_SingleJet180er2p5_Prescl);
   fChain->SetBranchAddress("L1_SingleJet200", &L1_SingleJet200, &b_L1_SingleJet200);
   fChain->SetBranchAddress("L1_SingleJet200_Prescl", &L1_SingleJet200_Prescl, &b_L1_SingleJet200_Prescl);
   fChain->SetBranchAddress("L1_SingleJet24_BptxAND", &L1_SingleJet24_BptxAND, &b_L1_SingleJet24_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet24_BptxAND_Prescl", &L1_SingleJet24_BptxAND_Prescl, &b_L1_SingleJet24_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet24_Centrality_30_100_BptxAND", &L1_SingleJet24_Centrality_30_100_BptxAND, &b_L1_SingleJet24_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet24_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet24_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet24_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet24_Centrality_50_100_BptxAND", &L1_SingleJet24_Centrality_50_100_BptxAND, &b_L1_SingleJet24_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet24_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet24_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet24_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet28_BptxAND", &L1_SingleJet28_BptxAND, &b_L1_SingleJet28_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet28_BptxAND_Prescl", &L1_SingleJet28_BptxAND_Prescl, &b_L1_SingleJet28_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet28_Centrality_30_100_BptxAND", &L1_SingleJet28_Centrality_30_100_BptxAND, &b_L1_SingleJet28_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet28_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet28_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet28_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet28_Centrality_50_100_BptxAND", &L1_SingleJet28_Centrality_50_100_BptxAND, &b_L1_SingleJet28_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet28_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet28_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet28_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet28_FWD_BptxAND", &L1_SingleJet28_FWD_BptxAND, &b_L1_SingleJet28_FWD_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet28_FWD_BptxAND_Prescl", &L1_SingleJet28_FWD_BptxAND_Prescl, &b_L1_SingleJet28_FWD_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet28_FWD_Centrality_30_100_BptxAND", &L1_SingleJet28_FWD_Centrality_30_100_BptxAND, &b_L1_SingleJet28_FWD_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet28_FWD_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet28_FWD_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet28_FWD_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet28_FWD_Centrality_50_100_BptxAND", &L1_SingleJet28_FWD_Centrality_50_100_BptxAND, &b_L1_SingleJet28_FWD_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet28_FWD_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet28_FWD_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet28_FWD_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet32_BptxAND", &L1_SingleJet32_BptxAND, &b_L1_SingleJet32_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet32_BptxAND_Prescl", &L1_SingleJet32_BptxAND_Prescl, &b_L1_SingleJet32_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet32_Centrality_30_100_BptxAND", &L1_SingleJet32_Centrality_30_100_BptxAND, &b_L1_SingleJet32_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet32_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet32_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet32_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet32_Centrality_50_100_BptxAND", &L1_SingleJet32_Centrality_50_100_BptxAND, &b_L1_SingleJet32_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet32_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet32_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet32_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet35", &L1_SingleJet35, &b_L1_SingleJet35);
   fChain->SetBranchAddress("L1_SingleJet35_Prescl", &L1_SingleJet35_Prescl, &b_L1_SingleJet35_Prescl);
   fChain->SetBranchAddress("L1_SingleJet35_FWD3p0", &L1_SingleJet35_FWD3p0, &b_L1_SingleJet35_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet35_FWD3p0_Prescl", &L1_SingleJet35_FWD3p0_Prescl, &b_L1_SingleJet35_FWD3p0_Prescl);
   fChain->SetBranchAddress("L1_SingleJet35er2p5", &L1_SingleJet35er2p5, &b_L1_SingleJet35er2p5);
   fChain->SetBranchAddress("L1_SingleJet35er2p5_Prescl", &L1_SingleJet35er2p5_Prescl, &b_L1_SingleJet35er2p5_Prescl);
   fChain->SetBranchAddress("L1_SingleJet36_BptxAND", &L1_SingleJet36_BptxAND, &b_L1_SingleJet36_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet36_BptxAND_Prescl", &L1_SingleJet36_BptxAND_Prescl, &b_L1_SingleJet36_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet36_Centrality_30_100_BptxAND", &L1_SingleJet36_Centrality_30_100_BptxAND, &b_L1_SingleJet36_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet36_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet36_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet36_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet36_Centrality_50_100_BptxAND", &L1_SingleJet36_Centrality_50_100_BptxAND, &b_L1_SingleJet36_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet36_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet36_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet36_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet36_FWD_BptxAND", &L1_SingleJet36_FWD_BptxAND, &b_L1_SingleJet36_FWD_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet36_FWD_BptxAND_Prescl", &L1_SingleJet36_FWD_BptxAND_Prescl, &b_L1_SingleJet36_FWD_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet36_FWD_Centrality_30_100_BptxAND", &L1_SingleJet36_FWD_Centrality_30_100_BptxAND, &b_L1_SingleJet36_FWD_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet36_FWD_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet36_FWD_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet36_FWD_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet36_FWD_Centrality_50_100_BptxAND", &L1_SingleJet36_FWD_Centrality_50_100_BptxAND, &b_L1_SingleJet36_FWD_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet36_FWD_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet36_FWD_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet36_FWD_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet40_BptxAND", &L1_SingleJet40_BptxAND, &b_L1_SingleJet40_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet40_BptxAND_Prescl", &L1_SingleJet40_BptxAND_Prescl, &b_L1_SingleJet40_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet40_Centrality_30_100_BptxAND", &L1_SingleJet40_Centrality_30_100_BptxAND, &b_L1_SingleJet40_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet40_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet40_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet40_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet40_Centrality_50_100_BptxAND", &L1_SingleJet40_Centrality_50_100_BptxAND, &b_L1_SingleJet40_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet40_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet40_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet40_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet44_BptxAND", &L1_SingleJet44_BptxAND, &b_L1_SingleJet44_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet44_BptxAND_Prescl", &L1_SingleJet44_BptxAND_Prescl, &b_L1_SingleJet44_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet44_Centrality_30_100_BptxAND", &L1_SingleJet44_Centrality_30_100_BptxAND, &b_L1_SingleJet44_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet44_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet44_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet44_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet44_Centrality_50_100_BptxAND", &L1_SingleJet44_Centrality_50_100_BptxAND, &b_L1_SingleJet44_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet44_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet44_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet44_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet44_FWD_BptxAND", &L1_SingleJet44_FWD_BptxAND, &b_L1_SingleJet44_FWD_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet44_FWD_BptxAND_Prescl", &L1_SingleJet44_FWD_BptxAND_Prescl, &b_L1_SingleJet44_FWD_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet44_FWD_Centrality_30_100_BptxAND", &L1_SingleJet44_FWD_Centrality_30_100_BptxAND, &b_L1_SingleJet44_FWD_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet44_FWD_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet44_FWD_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet44_FWD_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet44_FWD_Centrality_50_100_BptxAND", &L1_SingleJet44_FWD_Centrality_50_100_BptxAND, &b_L1_SingleJet44_FWD_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet44_FWD_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet44_FWD_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet44_FWD_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet48_BptxAND", &L1_SingleJet48_BptxAND, &b_L1_SingleJet48_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet48_BptxAND_Prescl", &L1_SingleJet48_BptxAND_Prescl, &b_L1_SingleJet48_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet48_Centrality_30_100_BptxAND", &L1_SingleJet48_Centrality_30_100_BptxAND, &b_L1_SingleJet48_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet48_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet48_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet48_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet48_Centrality_50_100_BptxAND", &L1_SingleJet48_Centrality_50_100_BptxAND, &b_L1_SingleJet48_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet48_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet48_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet48_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet56_BptxAND", &L1_SingleJet56_BptxAND, &b_L1_SingleJet56_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet56_BptxAND_Prescl", &L1_SingleJet56_BptxAND_Prescl, &b_L1_SingleJet56_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet56_Centrality_30_100_BptxAND", &L1_SingleJet56_Centrality_30_100_BptxAND, &b_L1_SingleJet56_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet56_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet56_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet56_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet56_Centrality_50_100_BptxAND", &L1_SingleJet56_Centrality_50_100_BptxAND, &b_L1_SingleJet56_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet56_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet56_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet56_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet56_FWD_BptxAND", &L1_SingleJet56_FWD_BptxAND, &b_L1_SingleJet56_FWD_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet56_FWD_BptxAND_Prescl", &L1_SingleJet56_FWD_BptxAND_Prescl, &b_L1_SingleJet56_FWD_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet56_FWD_Centrality_30_100_BptxAND", &L1_SingleJet56_FWD_Centrality_30_100_BptxAND, &b_L1_SingleJet56_FWD_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet56_FWD_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet56_FWD_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet56_FWD_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet56_FWD_Centrality_50_100_BptxAND", &L1_SingleJet56_FWD_Centrality_50_100_BptxAND, &b_L1_SingleJet56_FWD_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet56_FWD_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet56_FWD_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet56_FWD_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet60", &L1_SingleJet60, &b_L1_SingleJet60);
   fChain->SetBranchAddress("L1_SingleJet60_Prescl", &L1_SingleJet60_Prescl, &b_L1_SingleJet60_Prescl);
   fChain->SetBranchAddress("L1_SingleJet60_BptxAND", &L1_SingleJet60_BptxAND, &b_L1_SingleJet60_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet60_BptxAND_Prescl", &L1_SingleJet60_BptxAND_Prescl, &b_L1_SingleJet60_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet60_Centrality_30_100_BptxAND", &L1_SingleJet60_Centrality_30_100_BptxAND, &b_L1_SingleJet60_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet60_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet60_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet60_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet60_Centrality_50_100_BptxAND", &L1_SingleJet60_Centrality_50_100_BptxAND, &b_L1_SingleJet60_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet60_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet60_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet60_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet60_FWD3p0", &L1_SingleJet60_FWD3p0, &b_L1_SingleJet60_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet60_FWD3p0_Prescl", &L1_SingleJet60_FWD3p0_Prescl, &b_L1_SingleJet60_FWD3p0_Prescl);
   fChain->SetBranchAddress("L1_SingleJet60er2p5", &L1_SingleJet60er2p5, &b_L1_SingleJet60er2p5);
   fChain->SetBranchAddress("L1_SingleJet60er2p5_Prescl", &L1_SingleJet60er2p5_Prescl, &b_L1_SingleJet60er2p5_Prescl);
   fChain->SetBranchAddress("L1_SingleJet64_BptxAND", &L1_SingleJet64_BptxAND, &b_L1_SingleJet64_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet64_BptxAND_Prescl", &L1_SingleJet64_BptxAND_Prescl, &b_L1_SingleJet64_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet64_Centrality_30_100_BptxAND", &L1_SingleJet64_Centrality_30_100_BptxAND, &b_L1_SingleJet64_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet64_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet64_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet64_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet64_Centrality_50_100_BptxAND", &L1_SingleJet64_Centrality_50_100_BptxAND, &b_L1_SingleJet64_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet64_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet64_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet64_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet64_FWD_BptxAND", &L1_SingleJet64_FWD_BptxAND, &b_L1_SingleJet64_FWD_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet64_FWD_BptxAND_Prescl", &L1_SingleJet64_FWD_BptxAND_Prescl, &b_L1_SingleJet64_FWD_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet64_FWD_Centrality_30_100_BptxAND", &L1_SingleJet64_FWD_Centrality_30_100_BptxAND, &b_L1_SingleJet64_FWD_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet64_FWD_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet64_FWD_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet64_FWD_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet64_FWD_Centrality_50_100_BptxAND", &L1_SingleJet64_FWD_Centrality_50_100_BptxAND, &b_L1_SingleJet64_FWD_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet64_FWD_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet64_FWD_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet64_FWD_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet72_BptxAND", &L1_SingleJet72_BptxAND, &b_L1_SingleJet72_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet72_BptxAND_Prescl", &L1_SingleJet72_BptxAND_Prescl, &b_L1_SingleJet72_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet8", &L1_SingleJet8, &b_L1_SingleJet8);
   fChain->SetBranchAddress("L1_SingleJet8_Prescl", &L1_SingleJet8_Prescl, &b_L1_SingleJet8_Prescl);
   fChain->SetBranchAddress("L1_SingleJet80_BptxAND", &L1_SingleJet80_BptxAND, &b_L1_SingleJet80_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet80_BptxAND_Prescl", &L1_SingleJet80_BptxAND_Prescl, &b_L1_SingleJet80_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet8_BptxAND", &L1_SingleJet8_BptxAND, &b_L1_SingleJet8_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet8_BptxAND_Prescl", &L1_SingleJet8_BptxAND_Prescl, &b_L1_SingleJet8_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet8_Centrality_30_100_BptxAND", &L1_SingleJet8_Centrality_30_100_BptxAND, &b_L1_SingleJet8_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet8_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet8_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet8_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet8_Centrality_50_100_BptxAND", &L1_SingleJet8_Centrality_50_100_BptxAND, &b_L1_SingleJet8_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet8_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet8_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet8_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet8_FWD_BptxAND", &L1_SingleJet8_FWD_BptxAND, &b_L1_SingleJet8_FWD_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet8_FWD_BptxAND_Prescl", &L1_SingleJet8_FWD_BptxAND_Prescl, &b_L1_SingleJet8_FWD_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet8_FWD_Centrality_30_100_BptxAND", &L1_SingleJet8_FWD_Centrality_30_100_BptxAND, &b_L1_SingleJet8_FWD_Centrality_30_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet8_FWD_Centrality_30_100_BptxAND_Prescl", &L1_SingleJet8_FWD_Centrality_30_100_BptxAND_Prescl, &b_L1_SingleJet8_FWD_Centrality_30_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet8_FWD_Centrality_50_100_BptxAND", &L1_SingleJet8_FWD_Centrality_50_100_BptxAND, &b_L1_SingleJet8_FWD_Centrality_50_100_BptxAND);
   fChain->SetBranchAddress("L1_SingleJet8_FWD_Centrality_50_100_BptxAND_Prescl", &L1_SingleJet8_FWD_Centrality_50_100_BptxAND_Prescl, &b_L1_SingleJet8_FWD_Centrality_50_100_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleJet90", &L1_SingleJet90, &b_L1_SingleJet90);
   fChain->SetBranchAddress("L1_SingleJet90_Prescl", &L1_SingleJet90_Prescl, &b_L1_SingleJet90_Prescl);
   fChain->SetBranchAddress("L1_SingleJet90_FWD3p0", &L1_SingleJet90_FWD3p0, &b_L1_SingleJet90_FWD3p0);
   fChain->SetBranchAddress("L1_SingleJet90_FWD3p0_Prescl", &L1_SingleJet90_FWD3p0_Prescl, &b_L1_SingleJet90_FWD3p0_Prescl);
   fChain->SetBranchAddress("L1_SingleJet90er2p5", &L1_SingleJet90er2p5, &b_L1_SingleJet90er2p5);
   fChain->SetBranchAddress("L1_SingleJet90er2p5_Prescl", &L1_SingleJet90er2p5_Prescl, &b_L1_SingleJet90er2p5_Prescl);
   fChain->SetBranchAddress("L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND", &L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND, &b_L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_SingleMu0_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND", &L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND, &b_L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_SingleMu0_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu12_MinimumBiasHF1_AND_BptxAND", &L1_SingleMu12_MinimumBiasHF1_AND_BptxAND, &b_L1_SingleMu12_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_SingleMu12_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu16_MinimumBiasHF1_AND_BptxAND", &L1_SingleMu16_MinimumBiasHF1_AND_BptxAND, &b_L1_SingleMu16_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_SingleMu16_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu3_MinimumBiasHF1_AND_BptxAND", &L1_SingleMu3_MinimumBiasHF1_AND_BptxAND, &b_L1_SingleMu3_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu3_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_SingleMu3_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_SingleMu3_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND", &L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND, &b_L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_SingleMu3_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND", &L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND, &b_L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND_Prescl", &L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND_Prescl, &b_L1_SingleMu3_SingleJet28_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND", &L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND, &b_L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND_Prescl", &L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND_Prescl, &b_L1_SingleMu3_SingleJet32_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND", &L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND, &b_L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND_Prescl", &L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND_Prescl, &b_L1_SingleMu3_SingleJet40_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu5_MinimumBiasHF1_AND_BptxAND", &L1_SingleMu5_MinimumBiasHF1_AND_BptxAND, &b_L1_SingleMu5_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu5_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_SingleMu5_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_SingleMu5_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMu7_MinimumBiasHF1_AND_BptxAND", &L1_SingleMu7_MinimumBiasHF1_AND_BptxAND, &b_L1_SingleMu7_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMu7_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_SingleMu7_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_SingleMu7_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND", &L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND, &b_L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_SingleMuOpen_Centrality_70_100_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND", &L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND, &b_L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_SingleMuOpen_Centrality_80_100_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND", &L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND, &b_L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl", &L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_SingleMuOpen_NotMinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND", &L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND, &b_L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl", &L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_SingleMuOpen_NotMinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND", &L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND, &b_L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND_Prescl", &L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND_Prescl, &b_L1_SingleMuOpen_SingleJet28_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND", &L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND, &b_L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND_Prescl", &L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND_Prescl, &b_L1_SingleMuOpen_SingleJet44_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND", &L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND, &b_L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND_Prescl", &L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND_Prescl, &b_L1_SingleMuOpen_SingleJet56_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND", &L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND, &b_L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND);
   fChain->SetBranchAddress("L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND_Prescl", &L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND_Prescl, &b_L1_SingleMuOpen_SingleJet64_MidEta2p7_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND", &L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND, &b_L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND);
   fChain->SetBranchAddress("L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND_Prescl", &L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND_Prescl, &b_L1_ZDC_AND_OR_MinimumBiasHF1_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND", &L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND, &b_L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ZDC_AND_OR_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND", &L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND, &b_L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND);
   fChain->SetBranchAddress("L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND_Prescl", &L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND_Prescl, &b_L1_ZDC_AND_OR_MinimumBiasHF2_AND_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND", &L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND, &b_L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ZDC_AND_OR_MinimumBiasHF2_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND", &L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND, &b_L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND);
   fChain->SetBranchAddress("L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND_Prescl", &L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND_Prescl, &b_L1_ZDC_OR_OR_MinimumBiasHF1_OR_BptxAND_Prescl);
   fChain->SetBranchAddress("L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND", &L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND, &b_L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND);
   fChain->SetBranchAddress("L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND_Prescl", &L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND_Prescl, &b_L1_ZDC_OR_OR_MinimumBiasHF2_OR_BptxAND_Prescl);
   Notify();
}

Bool_t hltTreeReaderPbPbDATA::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void hltTreeReaderPbPbDATA::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t hltTreeReaderPbPbDATA::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef hltTreeReaderPbPbDATA_cxx
