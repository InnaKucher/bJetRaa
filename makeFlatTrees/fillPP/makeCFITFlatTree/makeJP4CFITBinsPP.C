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

void makeJP4CFITBinsPP(int pt_bin = 0) {

  TFile *dataFile = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_JP_PP_DATA_HighEG_MuonJetsOnly_JetEta1p3.root");
  TTree *dataTree = (TTree*)dataFile->Get("jetTree/tree");

  TFile *mcFile = new TFile("/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_JP_PP_MC_MuonJetsOnly_GSP_JetEta1p3.root");
  TTree *mcTree = (TTree*)mcFile->Get("jetTree/tree");

  Long64_t nentries_data = dataTree->GetEntries();
  cout << "data entries total = " << nentries_data << endl;

  Long64_t nentries_mc = mcTree->GetEntries();
  cout << "mc entries total in the inclusive dijet sample = " << nentries_mc << endl;

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

  //etc

  //common 

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


  string discr_tag_str = "discr_csvV2>0.8";
  string discr_untag_str = "discr_csvV2<0.8";

  //common mc

  string refpt_str = "";
  if(pt_bin == 0){
    refpt_str = "refpt>10";
  }
  if(pt_bin == 1){
    refpt_str = "refpt>30";
  }
  if(pt_bin == 2){
    refpt_str = "refpt>50";
  }
  if(pt_bin == 3){
    refpt_str = "refpt>100";
  }
  if(pt_bin == 4){
    refpt_str = "refpt>150";
  }

  string mc_weight_str = "weight";

  //b-jet mc
  string bjet_flavor_str = "jtHadronFlavor==5";

  //c-jet mc
  string cjet_flavor_str = "jtHadronFlavor==4";

  //light-jet mc
  string lightjet_flavor_str = "jtHadronFlavor<4";

  data_cut = "(" + jtpt_str + ")";
  data_cut_tag = "(" + jtpt_str + " && " + discr_tag_str + ")";
  data_cut_untag = "(" + jtpt_str + " && " + discr_untag_str + ")";

  mc_bjet_cut = "(" + jtpt_str + " && " + refpt_str + " && " + bjet_flavor_str + ")*" + mc_weight_str;
  mc_bjet_cut_tag = "(" + jtpt_str + " && " + refpt_str + " && " + bjet_flavor_str + " && " + discr_tag_str + ")*" + mc_weight_str;
  mc_bjet_cut_untag = "(" + jtpt_str + " && " + refpt_str + " && " + bjet_flavor_str + " && " + discr_untag_str + ")*" + mc_weight_str;

  mc_cjet_cut = "(" + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + ")*" + mc_weight_str;
  mc_cjet_cut_tag = "(" + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + " && " + discr_tag_str + ")*" + mc_weight_str;
  mc_cjet_cut_untag = "(" + jtpt_str + " && " + refpt_str + " && " + cjet_flavor_str + " && " + discr_untag_str + ")*" + mc_weight_str;

  mc_lightjet_cut = "(" + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + ")*" + mc_weight_str;
  mc_lightjet_cut_tag = "(" + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + " && " + discr_tag_str + ")*" + mc_weight_str;
  mc_lightjet_cut_untag = "(" + jtpt_str + " && " + refpt_str + " && " + lightjet_flavor_str + " && " + discr_untag_str + ")*" + mc_weight_str;

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
  Long64_t nentries_mc_cut = mcTree->GetEntries(mc_lightjet_cut.c_str());
  cout << "mc entries in bin ; light = " << nentries_mc_cut << endl;

  dataTree->Draw("discr_prob>>h_data",data_cut.c_str(),"goff");
  dataTree->Draw("discr_prob>>h_data_tag",data_cut_tag.c_str(),"goff");
  dataTree->Draw("discr_prob>>h_data_untag",data_cut_untag.c_str(),"goff");

  mcTree->Draw("discr_prob>>h_mc1",mc_bjet_cut.c_str(),"goff");
  mcTree->Draw("discr_prob>>h_mc1_tag",mc_bjet_cut_tag.c_str(),"goff");
  mcTree->Draw("discr_prob>>h_mc1_untag",mc_bjet_cut_untag.c_str(),"goff");

  mcTree->Draw("discr_prob>>h_mc2",mc_cjet_cut.c_str(),"goff");
  mcTree->Draw("discr_prob>>h_mc2_tag",mc_cjet_cut_tag.c_str(),"goff");
  mcTree->Draw("discr_prob>>h_mc2_untag",mc_cjet_cut_untag.c_str(),"goff");

  mcTree->Draw("discr_prob>>h_mc3",mc_lightjet_cut.c_str(),"goff");
  mcTree->Draw("discr_prob>>h_mc3_tag",mc_lightjet_cut_tag.c_str(),"goff");
  mcTree->Draw("discr_prob>>h_mc3_untag",mc_lightjet_cut_untag.c_str(),"goff");

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
  string outputJetPt = "";
  string outputNBins = "";
  string path = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/CFIT/";
  string name_common = "JP_PP_CFIT_INPUT_";

  if(pt_bin == 0) outputJetPt = "jetpt70to90_";
  if(pt_bin == 1) outputJetPt = "jetpt90to110_";
  if(pt_bin == 2) outputJetPt = "jetpt110to140_";
  if(pt_bin == 3) outputJetPt = "jetpt140to200_";
  if(pt_bin == 4) outputJetPt = "jetpt200to500_";

  if(nbins==30) outputNBins = "30bins";

  outputFileName = path + name_common + outputJetPt + outputNBins + ".root";

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

