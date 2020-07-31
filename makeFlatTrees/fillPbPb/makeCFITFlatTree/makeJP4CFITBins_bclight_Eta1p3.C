#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"
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

void makeJP4CFITBins_bclight_Eta1p3(int centr_bin = 0, int pt_bin = 0) {

  TFile *dataFile = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_JP_PbPb_DATA_HISingleMuonPD_Mu3Jet60_Mu3Jet40_Mu5Jet60_Mu5Jet40_jteta1p3.root");
  TTree *dataTree = (TTree*)dataFile->Get("jetTree/tree");

  TFile *mcFile_light = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_JP_PbPb_MC_DiJet_MuJetOnly_HYDJETFlavor_jteta1p3_V2.root");
  TTree *mcTree_light = (TTree*)mcFile_light->Get("jetTree/tree");

  TFile *mcFile_b = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_JP_PbPb_MC_BJet_MuJetOnly_jteta1p3.root");
  TTree *mcTree_b = (TTree*)mcFile_b->Get("jetTree/tree");

  TFile *mcFile_c = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_JP_PbPb_MC_CJet_MuJetOnly_jteta1p3.root");
  TTree *mcTree_c = (TTree*)mcFile_c->Get("jetTree/tree");

  Long64_t nentries_data = dataTree->GetEntries();
  cout << "data entries total = " << nentries_data << endl;

  Long64_t nentries_mc = mcTree_light->GetEntries();
  cout << "mc entries total in the inclusive dijet sample = " << nentries_mc << endl;

  Long64_t nentries_mc_b = mcTree_b->GetEntries();
  cout << "mc entries total in the bjet sample = " << nentries_mc_b << endl;

  Long64_t nentries_mc_c = mcTree_c->GetEntries();
  cout << "mc entries total in the c-jet sample = " << nentries_mc_c << endl;

  int nbins = 30;
  float min = 0.;
  float max = 3.;

  TH1D* h_data = new TH1D("h_data", "h_data", nbins, min, max);
  TH1D* h_data_tag = new TH1D("h_data_tag", "h_data_tag", nbins, min, max);
  TH1D* h_data_untag = new TH1D("h_data_untag", "h_data_untag", nbins, min, max);

  //b-jet
  TH1D* h_mc1 = new TH1D("h_mc1", "h_mc1", nbins, min, max);
  TH1D* h_mc1_tag = new TH1D("h_mc1_tag", "h_mc1_tag", nbins, min, max);
  TH1D* h_mc1_untag = new TH1D("h_mc1_untag", "h_mc1_untag", nbins, min, max);

  //c-jet
  TH1D* h_mc2 = new TH1D("h_mc2", "h_mc2", nbins, min, max);
  TH1D* h_mc2_tag = new TH1D("h_mc2_tag", "h_mc2_tag", nbins, min, max);
  TH1D* h_mc2_untag = new TH1D("h_mc2_untag", "h_mc2_untag", nbins, min, max);

  //light jet

  TH1D* h_mc3 = new TH1D("h_mc3", "h_mc3", nbins, min, max);
  TH1D* h_mc3_tag = new TH1D("h_mc3_tag", "h_mc3_tag", nbins, min, max);
  TH1D* h_mc3_untag = new TH1D("h_mc3_untag", "h_mc3_untag", nbins, min, max);


  //total strings 
  string data_cut = "";
  string mc_bjet_cut = "";
  string mc_cjet_cut = "";
  string mc_lightjet_cut = "";

  string data_cut_tag = "";
  string mc_bjet_cut_tag = "";
  string mc_cjet_cut_tag = "";
  string mc_lightjet_cut_tag = "";

  string data_cut_untag = "";
  string mc_bjet_cut_untag = "";
  string mc_cjet_cut_untag = "";
  string mc_lightjet_cut_untag = "";

  //common 

  string centr_str = "";
  if(centr_bin == 0){
    centr_str = "hiBin < 20";
  }
  if(centr_bin == 1){
    centr_str = "hiBin >=20 && hiBin < 60";
  }
  if(centr_bin == 2){
    centr_str = "hiBin >=60 && hiBin < 180";
  }
  if(centr_bin == 3){
    centr_str = "hiBin >= 0 && hiBin < 180";
  }
  if(centr_bin == 4){
    centr_str = "hiBin >= 0 && hiBin < 60";
  }

  string jtpt_str = "";
  if(pt_bin == 0){
    jtpt_str = "jtpt>=70 && jtpt<90";
  }
  if(pt_bin == 1){
    jtpt_str = "jtpt>=90 && jtpt<110";
  }
  if(pt_bin == 2){
    jtpt_str = "jtpt>=110 && jtpt<140";
  }
  if(pt_bin == 3){
    jtpt_str = "jtpt>=140 && jtpt<200";
  }
  if(pt_bin == 4){
    jtpt_str = "jtpt>=200 && jtpt<500";
  }


  string discr_tag_str = "discr_csvV2>0.856";
  string discr_untag_str = "discr_csvV2<0.856";

  //data 
  string data_weight_str = "weight"; 

  //common mc

  //  string refpt_str = "refpt > 10 && pthat>17./46.*(jtpt-70.)+15.";
  string refpt_str = "refpt>10 && pthat>0.35*jtpt";

  /*
  if(pt_bin == 0){
    refpt_str = "refpt>30";
  }
  if(pt_bin == 1){
    refpt_str = "refpt>40";
  }
  if(pt_bin == 2){
    refpt_str = "refpt>50";
  }
  if(pt_bin == 3){
    refpt_str = "refpt>90";
  }
  if(pt_bin == 4){
    refpt_str = "refpt>150";
  }
  */

  string mc_weight_str = "weight*nColl";

  //b-jet mc
  string bjet_flavor_str = "matchedHadronFlavor==5";

  //c-jet mc
  string mc_c_weight_cut_str = "weight < 0.005";
  string cjet_flavor_str = "matchedHadronFlavor==4";

  //light-jet mc
  string mc_light_weight_cut_str = "weight < 0.0006";
  //  string lightjet_flavor_str = "matchedHadronFlavor<4 && !(abs(refparton_flavorForB)==4 || abs(refparton_flavorForB)==5) ";
  // b-jet SFs, consider b's and c's from UE as a part of light template
  string lightjet_flavor_str = "matchedHadronFlavor<4";

  data_cut = "(" + centr_str + " && " + jtpt_str + ")*" + data_weight_str;
  data_cut_tag = "(" + centr_str + " && " + jtpt_str + " && " + discr_tag_str + ")*" + data_weight_str;
  data_cut_untag = "(" + centr_str + " && " + jtpt_str + " && " + discr_untag_str + ")*" + data_weight_str;

  mc_bjet_cut = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + bjet_flavor_str + ")*" + mc_weight_str;
  mc_bjet_cut_tag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + bjet_flavor_str + " && " + discr_tag_str + ")*" + mc_weight_str;
  mc_bjet_cut_untag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + bjet_flavor_str + " && " + discr_untag_str + ")*" + mc_weight_str;

  mc_cjet_cut = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + ")*" + mc_weight_str;
  mc_cjet_cut_tag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + " && " + discr_tag_str + ")*" + mc_weight_str;
  mc_cjet_cut_untag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + " && " + discr_untag_str + ")*" + mc_weight_str;

  /*
  mc_cjet_cut = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + " && " + mc_c_weight_cut_str + ")*" + mc_weight_str;
  mc_cjet_cut_tag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + " && " + discr_tag_str + " && " + mc_c_weight_cut_str + ")*" + mc_weight_str;
  mc_cjet_cut_untag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + " && " + discr_untag_str + " && " + mc_c_weight_cut_str + ")*" + mc_weight_str;
  */

  mc_lightjet_cut = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + ")*" + mc_weight_str;
  mc_lightjet_cut_tag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + " && " + discr_tag_str + ")*" + mc_weight_str;
  mc_lightjet_cut_untag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + " && " + discr_untag_str + ")*" + mc_weight_str;

  /*
  mc_lightjet_cut = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + " && " + mc_light_weight_cut_str + ")*" + mc_weight_str;
  mc_lightjet_cut_tag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + " && " + discr_tag_str + " && " + mc_light_weight_cut_str + ")*" + mc_weight_str;
  mc_lightjet_cut_untag = "(" + centr_str + " && " + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + " && " + discr_untag_str + " && " + mc_light_weight_cut_str + ")*" + mc_weight_str;
  */

  cout << data_cut << endl;
  cout << data_cut_tag << endl;
  cout << data_cut_untag << endl;

  cout << mc_bjet_cut << endl;
  cout << mc_bjet_cut_tag << endl;
  cout << mc_bjet_cut_untag << endl;

  cout << mc_cjet_cut << endl;
  cout << mc_cjet_cut_tag << endl;
  cout << mc_cjet_cut_untag << endl;

  cout << mc_lightjet_cut << endl;
  cout << mc_lightjet_cut_tag << endl;
  cout << mc_lightjet_cut_untag << endl;

  Long64_t nentries_data_cut = dataTree->GetEntries(data_cut.c_str());
  cout << "data entries in bin = " << nentries_data_cut << endl;
  Long64_t nentries_mc_cut_b = mcTree_b->GetEntries(mc_bjet_cut.c_str());
  Long64_t nentries_mc_cut_c = mcTree_c->GetEntries(mc_cjet_cut.c_str());
  Long64_t nentries_mc_cut_light = mcTree_light->GetEntries(mc_lightjet_cut.c_str());
  cout << "mc entries in bin ; b = " << nentries_mc_cut_b << " , c = " << nentries_mc_cut_c << " , light = " << nentries_mc_cut_light << endl;

  dataTree->Draw("discr_prob>>h_data",data_cut.c_str(),"goff");
  dataTree->Draw("discr_prob>>h_data_tag",data_cut_tag.c_str(),"goff");
  dataTree->Draw("discr_prob>>h_data_untag",data_cut_untag.c_str(),"goff");

  mcTree_b->Draw("discr_prob>>h_mc1",mc_bjet_cut.c_str(),"goff");
  mcTree_b->Draw("discr_prob>>h_mc1_tag",mc_bjet_cut_tag.c_str(),"goff");
  mcTree_b->Draw("discr_prob>>h_mc1_untag",mc_bjet_cut_untag.c_str(),"goff");

  mcTree_c->Draw("discr_prob>>h_mc2",mc_cjet_cut.c_str(),"goff");
  mcTree_c->Draw("discr_prob>>h_mc2_tag",mc_cjet_cut_tag.c_str(),"goff");
  mcTree_c->Draw("discr_prob>>h_mc2_untag",mc_cjet_cut_untag.c_str(),"goff");

  mcTree_light->Draw("discr_prob>>h_mc3",mc_lightjet_cut.c_str(),"goff");
  mcTree_light->Draw("discr_prob>>h_mc3_tag",mc_lightjet_cut_tag.c_str(),"goff");
  mcTree_light->Draw("discr_prob>>h_mc3_untag",mc_lightjet_cut_untag.c_str(),"goff");

  h_data->SetLineColor(kBlack);
  h_data->SetLineWidth(2);
  h_data->SetMarkerColor(kBlack);
  h_data->SetMarkerStyle(20);

  h_data_tag->SetLineColor(kBlack);
  h_data_tag->SetLineWidth(2);
  h_data_tag->SetMarkerColor(kBlack);
  h_data_tag->SetMarkerStyle(20);

  h_data_untag->SetLineColor(kBlack);
  h_data_untag->SetLineWidth(2);
  h_data_untag->SetMarkerColor(kBlack);
  h_data_untag->SetMarkerStyle(20);

  h_mc1->SetLineColor(kBlack);
  h_mc1->SetLineWidth(2);
  h_mc1->SetMarkerColor(kBlack);
  h_mc1->SetMarkerStyle(20);

  h_mc1_tag->SetLineColor(kBlack);
  h_mc1_tag->SetLineWidth(2);
  h_mc1_tag->SetMarkerColor(kBlack);
  h_mc1_tag->SetMarkerStyle(20);

  h_mc1_untag->SetLineColor(kBlack);
  h_mc1_untag->SetLineWidth(2);
  h_mc1_untag->SetMarkerColor(kBlack);
  h_mc1_untag->SetMarkerStyle(20);

  h_mc2->SetLineColor(kBlack);
  h_mc2->SetLineWidth(2);
  h_mc2->SetMarkerColor(kBlack);
  h_mc2->SetMarkerStyle(20);

  h_mc2_tag->SetLineColor(kBlack);
  h_mc2_tag->SetLineWidth(2);
  h_mc2_tag->SetMarkerColor(kBlack);
  h_mc2_tag->SetMarkerStyle(20);

  h_mc2_untag->SetLineColor(kBlack);
  h_mc2_untag->SetLineWidth(2);
  h_mc2_untag->SetMarkerColor(kBlack);
  h_mc2_untag->SetMarkerStyle(20);

  h_mc3->SetLineColor(kBlack);
  h_mc3->SetLineWidth(2);
  h_mc3->SetMarkerColor(kBlack);
  h_mc3->SetMarkerStyle(20);

  h_mc3_tag->SetLineColor(kBlack);
  h_mc3_tag->SetLineWidth(2);
  h_mc3_tag->SetMarkerColor(kBlack);
  h_mc3_tag->SetMarkerStyle(20);

  h_mc3_untag->SetLineColor(kBlack);
  h_mc3_untag->SetLineWidth(2);
  h_mc3_untag->SetMarkerColor(kBlack);
  h_mc3_untag->SetMarkerStyle(20);

  //write histograms to the file

  string outputFileName = "";
  string outputCentr ="";
  string outputJetPt = "";
  string outputNBins = "";
  string path = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/CFIT/";
  string name_common = "JP_PbPb_CFIT_INPUT_HYDJETHF_INLIGHT_PTHAT_";

  if(centr_bin == 0) outputCentr = "centr0to10_";
  if(centr_bin == 1) outputCentr = "centr10to30_";
  if(centr_bin == 2) outputCentr = "centr30to90_";
  if(centr_bin == 3) outputCentr = "centr0to90_";
  if(centr_bin == 4) outputCentr = "centr0to30_";

  if(pt_bin == 0) outputJetPt = "jteta1p3_jetpt70to90_";
  if(pt_bin == 1) outputJetPt = "jteta1p3_jetpt90to110_";
  if(pt_bin == 2) outputJetPt = "jteta1p3_jetpt110to140_";
  if(pt_bin == 3) outputJetPt = "jteta1p3_jetpt140to200_";
  if(pt_bin == 4) outputJetPt = "jteta1p3_jetpt200to500_";

  if(nbins==30) outputNBins = "30bins";

  outputFileName = path + name_common + outputCentr + outputJetPt + outputNBins + ".root";

  cout << outputFileName << endl;

  TFile *fout = new TFile(outputFileName.c_str(),"RECREATE");

  h_data->Write();
  h_data_tag->Write();
  h_data_untag->Write();

  h_mc1->Write();
  h_mc1_tag->Write();
  h_mc1_untag->Write();

  h_mc2->Write();
  h_mc2_tag->Write();
  h_mc2_untag->Write();

  h_mc3->Write();
  h_mc3_tag->Write();
  h_mc3_untag->Write();

  fout->Close();

}

