#include "TROOT.h"
#include "TKey.h"
#include "TFile.h"
#include "TSystem.h"
#include "TCanvas.h"
#include "TTree.h"
#include "TH1D.h"
#include "TH2F.h"
#include "TObjArray.h"
#include "THStack.h"
#include "TLegend.h"
#include "TEfficiency.h"
#include "TGraphAsymmErrors.h"
#include "TF1.h"
#include "TMath.h"
#include "TCut.h"
#include "TPaletteAxis.h"
#include "TStyle.h"

#include "TMVA/Reader.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

void rLight(int hltThr_=0){

  string input;
  input = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_CSVv2_PP_MC_HLTJet30_JetEta1p3.root";

  TFile *file_mc = new TFile(input.c_str());
  TTree *t_mc = (TTree*)file_mc->Get("jetTree/tree");

  Float_t bins_pt[] = { 20, 40, 60, 80, 110, 140, 200, 500 };
  Int_t  binnum_pt = sizeof(bins_pt)/sizeof(Float_t) - 1;

  TH1D * histo_mc_total_light = new TH1D("histo_mc_total_light","histo_mc_total_light",binnum_pt,bins_pt);
  TH1D * histo_mc_total = new TH1D("histo_mc_total","histo_mc_total",binnum_pt,bins_pt);

  TH1D * histo_mc_mistag_light = new TH1D("histo_mc_mistag_light","histo_mc_mistag_light",binnum_pt,bins_pt);
  TH1D * histo_mc_negtag = new TH1D("histo_mc_negtag","histo_mc_negtag",binnum_pt,bins_pt);

  histo_mc_total_light->Sumw2();
  histo_mc_total->Sumw2();
  histo_mc_mistag_light->Sumw2();
  histo_mc_negtag->Sumw2();

  string s_mc_tot = "jtpt>>histo_mc_total";
  string s_mc_tot_light = "jtpt>>histo_mc_total_light";

  string s_mc_negtag = "jtpt>>histo_mc_negtag";
  string s_mc_mistag_light = "jtpt>>histo_mc_mistag_light";

  string jet_eta = "abs(jteta)<1.34";
  string ref_pt = "refpt>10";
  string flavor = "jtHadronFlavor<4";
  string mc_weight = "weight";
  string negtag = "ndiscr_csvV2>0.8";
  string tag = "discr_csvV2>0.8";
  string hlt = "HLT_HIAK4PFJet80_v1==1";
  if(hltThr_==0) hlt = "HLT_HIAK4PFJet80_v1==1";
  if(hltThr_==1) hlt = "HLT_HIAK4PFJet60_v1==1";
  if(hltThr_==2) hlt = "HLT_HIAK4PFJet40_v1==1";
  if(hltThr_==3) hlt = "HLT_HIAK4PFJet30_v1==1";

  string jetsCut_mc_total = "(" + hlt + "&&" + jet_eta + "&&" + ref_pt + ")*" + mc_weight;
  string jetsCut_mc_negtag = "("+ hlt + "&&" + jet_eta + "&&" + ref_pt + "&&" + negtag + ")*" + mc_weight;

  string jetsCut_mc_total_light = "(" + hlt + "&&" + jet_eta + "&&" + ref_pt + "&&" + flavor + ")*" + mc_weight;
  string jetsCut_mc_mistag_light = "(" + hlt + "&&" + jet_eta + "&&" + ref_pt + "&&" + flavor + "&&" + tag + ")*"+mc_weight;

  cout << "jetsCut_mc_total = " << jetsCut_mc_total << endl;
  cout << "jetsCut_mc_negtag = " << jetsCut_mc_negtag << endl;
  cout << "jetsCut_mc_total_light = " << jetsCut_mc_total_light << endl;
  cout << "jetsCut_mc_mistag_light = " << jetsCut_mc_mistag_light << endl;

  t_mc->Draw(s_mc_tot.c_str(),jetsCut_mc_total.c_str(),"goff");
  t_mc->Draw(s_mc_tot_light.c_str(),jetsCut_mc_total_light.c_str(),"goff");
  t_mc->Draw(s_mc_negtag.c_str(),jetsCut_mc_negtag.c_str(),"goff");
  t_mc->Draw(s_mc_mistag_light.c_str(),jetsCut_mc_mistag_light.c_str(),"goff");

  TGraphAsymmErrors * gr_mc_mistag = 0;
  TGraphAsymmErrors * gr_mc_negtag = 0;
  TGraphAsymmErrors * gr_mc_RLight = 0;

  gr_mc_mistag = new TGraphAsymmErrors(histo_mc_mistag_light,histo_mc_total_light,"");
  gr_mc_negtag = new TGraphAsymmErrors(histo_mc_negtag,histo_mc_total,"");

  TH1D * histo_gr_mc_mistag = new TH1D("histo_gr_mc_mistag","histo_gr_mc_mistag",binnum_pt,bins_pt);
  TH1D * histo_gr_mc_negtag = new TH1D("histo_gr_mc_negtag","histo_gr_mc_negtag",binnum_pt,bins_pt);

  auto nPoints_mistag = gr_mc_mistag->GetN();
  cout << "nPoints_mistag = " << nPoints_mistag << endl;
  double err_mistag[8];
  for(int i=0; i < nPoints_mistag; ++i) {
    double x,y;
    gr_mc_mistag->GetPoint(i, x, y);
    double eyl;
    eyl=gr_mc_mistag->GetErrorYlow(i);
    err_mistag[i+1] = eyl;
    histo_gr_mc_mistag->Fill(x,y);
  }

  histo_gr_mc_mistag->SetError(err_mistag);

  auto nPoints_negtag = gr_mc_negtag->GetN();
  cout << "nPoints_negtag = " << nPoints_negtag << endl;
  double err_negtag[8];
  for(int i=0; i < nPoints_negtag; ++i) {
    double x,y;
    double eyl;
    gr_mc_negtag->GetPoint(i, x, y);
    histo_gr_mc_negtag->Fill(x,y);
    eyl=gr_mc_negtag->GetErrorYlow(i);
    err_negtag[i+1] = eyl;
    //cout << " negtag: i = " << i << err_negtag[i+1] << endl;
  }
  histo_gr_mc_negtag->SetError(err_negtag);

  gr_mc_RLight =  new TGraphAsymmErrors(histo_gr_mc_mistag,histo_gr_mc_negtag,"");

  TH1D * histo_gr_mc_RLight = new TH1D("histo_gr_mc_RLight","histo_gr_mc_RLight",binnum_pt,bins_pt);

  auto nPoints_rlight = gr_mc_RLight->GetN();
  double err_rlight[8];
  for(int i=0; i < nPoints_rlight; ++i) {
    double x,y;
    double eyl;
    gr_mc_RLight->GetPoint(i, x, y);
    histo_gr_mc_RLight->Fill(x,y);
    eyl=gr_mc_RLight->GetErrorYlow(i);
    err_rlight[i+1] = eyl;
    //cout << " rLight: i = " << i << err_rlight[i+1] << endl;
  }
  histo_gr_mc_RLight->SetError(err_rlight);


  TCanvas * can_mistag_negtag = new TCanvas("can_mistag_negtag","can_mistag_negtag",1200,600);
  
  can_mistag_negtag->SetRightMargin(0.1);
  can_mistag_negtag->SetLeftMargin(0.1);
  can_mistag_negtag->SetTopMargin(0.1);
  can_mistag_negtag->SetBottomMargin(0.1);
  
  can_mistag_negtag->Divide(2,1);

  can_mistag_negtag->cd(1);

  histo_gr_mc_mistag->SetStats(0);
  histo_gr_mc_mistag->SetTitle("MC mistag");
  histo_gr_mc_mistag->GetXaxis()->SetTitle("jet p_{T}");
  histo_gr_mc_mistag->GetYaxis()->SetTitle("");
  histo_gr_mc_mistag->GetYaxis()->SetTitleOffset(1.9);
  histo_gr_mc_mistag->GetYaxis()->SetRangeUser(0.0,0.02);
  histo_gr_mc_mistag->GetYaxis()->SetTitleSize(0.03);
  histo_gr_mc_mistag->GetXaxis()->SetTitleOffset(1.2);
  histo_gr_mc_mistag->GetXaxis()->SetTitleSize(0.03);
  histo_gr_mc_mistag->SetLineColor(kBlack);
  histo_gr_mc_mistag->SetLineWidth(2);
  histo_gr_mc_mistag->Draw("EP");

  can_mistag_negtag->cd(2);

  histo_gr_mc_negtag->SetStats(0);
  histo_gr_mc_negtag->SetTitle("MC negative tag");
  histo_gr_mc_negtag->GetXaxis()->SetTitle("jet p_{T}");
  histo_gr_mc_negtag->GetYaxis()->SetTitle("");
  histo_gr_mc_negtag->GetYaxis()->SetRangeUser(0.,0.04);
  histo_gr_mc_negtag->GetYaxis()->SetTitleOffset(1.9);
  histo_gr_mc_negtag->GetYaxis()->SetTitleSize(0.03);
  histo_gr_mc_negtag->GetXaxis()->SetTitleOffset(1.2);
  histo_gr_mc_negtag->GetXaxis()->SetTitleSize(0.03);
  histo_gr_mc_negtag->SetLineColor(kBlack);
  histo_gr_mc_negtag->SetLineWidth(2);
  histo_gr_mc_negtag->Draw("EP");

  string hltStr = "hltJet80";
  if(hltThr_==0) hltStr = "hltJet80";
  if(hltThr_==1) hltStr = "hltJet60";
  if(hltThr_==2) hltStr = "hltJet40";
  if(hltThr_==3) hltStr = "hltJet30";

  string s_mistag_negtag = "mc_mistag_negtag_pp_" + hltStr + ".pdf";
  can_mistag_negtag->SaveAs(s_mistag_negtag.c_str());

  TCanvas * can_RLight = new TCanvas("can_RLight","can_RLight",600,600);
  can_RLight->SetRightMargin(0.1);
  can_RLight->SetLeftMargin(0.1);
  can_RLight->SetTopMargin(0.1);
  can_RLight->SetBottomMargin(0.1);

  histo_gr_mc_RLight->SetStats(0);
  histo_gr_mc_RLight->SetTitle("R_{light} factor");
  histo_gr_mc_RLight->GetXaxis()->SetTitle("jet p_{T}");
  histo_gr_mc_RLight->GetYaxis()->SetTitle("");
  histo_gr_mc_RLight->GetYaxis()->SetTitleOffset(1.7);
  histo_gr_mc_RLight->GetYaxis()->SetRangeUser(0.2,0.6);
  histo_gr_mc_RLight->GetYaxis()->SetTitleSize(0.04);
  histo_gr_mc_RLight->GetXaxis()->SetTitleSize(0.04);
  histo_gr_mc_RLight->SetLineColor(kBlack);
  histo_gr_mc_RLight->SetLineWidth(2);
  histo_gr_mc_RLight->Draw("EP");

  string s_rLight = "rLight_pp_" + hltStr + ".pdf";
  can_RLight->SaveAs(s_rLight.c_str());


  string outputFileName = "";
  string outputCentr ="pp_";
  string path = "";
  string name_common = "RLight_";

  outputFileName = path + name_common + outputCentr + hltStr + ".root";
  cout << outputFileName << endl;

  //TFile *fout = new TFile("TEST.root","RECREATE");
  TFile *fout = new TFile(outputFileName.c_str(),"RECREATE");

  gr_mc_mistag->Write();
  gr_mc_negtag->Write();
  gr_mc_RLight->Write();
  histo_gr_mc_mistag->Write();
  histo_gr_mc_negtag->Write();
  histo_gr_mc_RLight->Write();

  fout->Close();
}

void dataMisTagNegTag(int hltThr_=0){

  string input_highPD;
  if(hltThr_==0) input_highPD = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_CSVv2_PP_DATA_HighEG_JetEta1p3.root";
  if(hltThr_==1 || hltThr_==2 || hltThr_==3) input_highPD = "/eos/cms/store/group/phys_heavyions/ikucher/bjetFrac/compact_ntuples/final/jetTree_CSVv2_PP_DATA_LowEG_JetEta1p3.root";

  TFile *file_highPD = new TFile(input_highPD.c_str());
  TTree *t_highPD = (TTree*)file_highPD->Get("jetTree/tree");

  string input_rlight = "RLight_pp_hltJet80.root";
  if(hltThr_==0) input_rlight = "RLight_pp_hltJet80.root";
  if(hltThr_==1) input_rlight = "RLight_pp_hltJet60.root";
  if(hltThr_==2) input_rlight = "RLight_pp_hltJet40.root";
  if(hltThr_==3) input_rlight = "RLight_pp_hltJet30.root";

  TFile *file_mc = new TFile(input_rlight.c_str());
  TH1D *histo_gr_mc_RLight = (TH1D*)file_mc->Get("histo_gr_mc_RLight");
  TH1D *histo_gr_mc_mistag = (TH1D*)file_mc->Get("histo_gr_mc_mistag");

  Float_t bins_pt[] = { 20, 40, 60, 80, 110, 140, 200, 500 };
  Int_t  binnum_pt = sizeof(bins_pt)/sizeof(Float_t) - 1;

  TH1D * histo_data_total_hlt80 = new TH1D("histo_data_total_hlt80","histo_data_total_hlt80",binnum_pt,bins_pt);
  TH1D * histo_data_negtag_hlt80 = new TH1D("histo_data_negtag_hlt80","histo_data_negtag_hlt80",binnum_pt,bins_pt);

  string s_data_tot_hlt80 = "jtpt>>histo_data_total_hlt80";
  string s_data_negtag_hlt80 = "jtpt>>histo_data_negtag_hlt80";

  string jet_eta = "abs(jteta)<1.34";
  string negtag = "ndiscr_csvV2>0.8";
  string hiHF = "hiHF < 5200";

  string pt_cut = "jtpt>=20&&jtpt<500";
  string hlt_hlt80 = "HLT_HIAK4PFJet80_v1==1";
  if(hltThr_==0) hlt_hlt80 = "HLT_HIAK4PFJet80_v1==1";
  if(hltThr_==1) hlt_hlt80 = "HLT_HIAK4PFJet60_v1==1";
  if(hltThr_==2) hlt_hlt80 = "HLT_HIAK4PFJet40_v1==1";
  if(hltThr_==3) hlt_hlt80 = "HLT_HIAK4PFJet30_v1==1";

  string jetsCut_data_total_hlt80 = "(" + jet_eta + "&&" + pt_cut + "&&" + hlt_hlt80 + ")";
  string jetsCut_data_negtag_hlt80 = "("+ jet_eta + "&&" + pt_cut + "&&" + hlt_hlt80  + "&&" + negtag + ")";

  t_highPD->Draw(s_data_tot_hlt80.c_str(),jetsCut_data_total_hlt80.c_str(),"goff");
  t_highPD->Draw(s_data_negtag_hlt80.c_str(),jetsCut_data_negtag_hlt80.c_str(),"goff");

  TGraphAsymmErrors * gr_data_negtag_hlt80 = 0;
  gr_data_negtag_hlt80 = new TGraphAsymmErrors(histo_data_negtag_hlt80,histo_data_total_hlt80,"");
  TH1D * histo_gr_data_negtag_hlt80 = new TH1D("histo_gr_data_negtag_hlt80","histo_gr_data_negtag_hlt80",binnum_pt,bins_pt);

  auto nPoints_negtag_hlt80 = gr_data_negtag_hlt80->GetN();
  double err_negtag_hlt80[8];
  for(int i=0; i < nPoints_negtag_hlt80; ++i) {
    double x,y;
    double eyl;
    gr_data_negtag_hlt80->GetPoint(i, x, y);
    histo_gr_data_negtag_hlt80->Fill(x,y);
    eyl=gr_data_negtag_hlt80->GetErrorYlow(i);
    err_negtag_hlt80[i+1] = eyl;
  }
  histo_gr_data_negtag_hlt80->SetError(err_negtag_hlt80);

  string hltStr = "hltJet80";
  if(hltThr_==0) hltStr = "hltJet80";
  if(hltThr_==1) hltStr = "hltJet60";
  if(hltThr_==2) hltStr = "hltJet40";
  if(hltThr_==3) hltStr = "hltJet30";

  TLegend *legend = new TLegend(0.55,0.9,0.9,0.6,"","brNDC");
  legend->SetHeader("");

  legend->SetBorderSize(0);
  legend->SetFillStyle(0);
  legend->SetTextFont(42);

  TCanvas * can_negtag = new TCanvas("can_negtag","can_negtag",600,600);
  can_negtag->SetRightMargin(0.1);
  can_negtag->SetLeftMargin(0.1);
  can_negtag->SetTopMargin(0.1);
  can_negtag->SetBottomMargin(0.1);

  histo_gr_data_negtag_hlt80->SetStats(0);
  histo_gr_data_negtag_hlt80->SetTitle("Data negative tag");
  histo_gr_data_negtag_hlt80->GetXaxis()->SetTitle("jet p_{T}");
  histo_gr_data_negtag_hlt80->GetYaxis()->SetTitle("");
  histo_gr_data_negtag_hlt80->GetYaxis()->SetTitleOffset(1.7);
  histo_gr_data_negtag_hlt80->GetYaxis()->SetRangeUser(0.,0.040);
  histo_gr_data_negtag_hlt80->GetYaxis()->SetTitleSize(0.04);
  histo_gr_data_negtag_hlt80->GetXaxis()->SetTitleSize(0.04);
  histo_gr_data_negtag_hlt80->SetLineColor(kBlue+3);
  histo_gr_data_negtag_hlt80->SetLineWidth(2);
  histo_gr_data_negtag_hlt80->Draw("EP");

  string dataLegStr = "data " + hltStr;
  legend->AddEntry(histo_gr_data_negtag_hlt80,dataLegStr.c_str(),"epl");
  legend->Draw("same");

  string s_data_negtag = "data_negtag_pp_"+hltStr+".pdf";
  can_negtag->SaveAs(s_data_negtag.c_str());

  TH1D * histo_data_mistag_hlt80 = (TH1D*) histo_gr_data_negtag_hlt80->Clone();
  histo_data_mistag_hlt80->SetName("histo_data_mistag_hlt80");
  histo_data_mistag_hlt80->Multiply(histo_gr_mc_RLight);

  TCanvas * can_mistag = new TCanvas("can_mistag","can_mistag",600,600);
  can_mistag->SetRightMargin(0.1);
  can_mistag->SetLeftMargin(0.1);
  can_mistag->SetTopMargin(0.1);
  can_mistag->SetBottomMargin(0.1);

  TLegend *legend2 = new TLegend(0.55,0.9,0.9,0.6,"","brNDC");
  legend2->SetHeader("");

  legend2->SetBorderSize(0);
  legend2->SetFillStyle(0);
  legend2->SetTextFont(42);

  histo_data_mistag_hlt80->SetStats(0);
  histo_data_mistag_hlt80->SetTitle("Mistag rate");
  histo_data_mistag_hlt80->GetXaxis()->SetTitle("jet p_{T}");
  histo_data_mistag_hlt80->GetYaxis()->SetTitle("");
  histo_data_mistag_hlt80->GetYaxis()->SetTitleOffset(1.7);
  histo_data_mistag_hlt80->GetYaxis()->SetRangeUser(0.0,0.02);
  histo_data_mistag_hlt80->GetYaxis()->SetTitleSize(0.04);
  histo_data_mistag_hlt80->GetXaxis()->SetTitleSize(0.04);
  histo_data_mistag_hlt80->SetLineColor(kBlue+3);
  histo_data_mistag_hlt80->SetLineWidth(2);
  histo_data_mistag_hlt80->Draw("EP");

  histo_gr_mc_mistag->SetLineColor(kGreen+3);
  histo_gr_mc_mistag->SetLineWidth(2);
  histo_gr_mc_mistag->Draw("EPsame");

  string mcLegStr = "mc " + hltStr; 

  legend2->AddEntry(histo_data_mistag_hlt80,dataLegStr.c_str(),"epl");
  legend2->AddEntry(histo_gr_mc_mistag,mcLegStr.c_str(),"epl");

  legend2->Draw("same");

  string s_data_mistag = "data_mistag_pp_"+ hltStr + ".pdf";
  can_mistag->SaveAs(s_data_mistag.c_str());

  TH1D * SF_mistag_hlt80= (TH1D*) histo_data_mistag_hlt80->Clone();
  SF_mistag_hlt80->SetName("SF_mistag_hlt80");
  SF_mistag_hlt80->Divide(histo_gr_mc_mistag);

  TCanvas * can_mistagSF = new TCanvas("can_mistagSF","can_mistagSF",600,600);
  can_mistagSF->SetRightMargin(0.1);
  can_mistagSF->SetLeftMargin(0.1);
  can_mistagSF->SetTopMargin(0.1);
  can_mistagSF->SetBottomMargin(0.1);

  SF_mistag_hlt80->SetStats(0);
  SF_mistag_hlt80->SetTitle("Mistag rate SF");
  SF_mistag_hlt80->GetXaxis()->SetTitle("jet p_{T}");
  SF_mistag_hlt80->GetYaxis()->SetTitle("");
  SF_mistag_hlt80->GetYaxis()->SetTitleOffset(1.7);
  SF_mistag_hlt80->GetYaxis()->SetRangeUser(0.8,1.3);
  SF_mistag_hlt80->GetYaxis()->SetTitleSize(0.04);
  SF_mistag_hlt80->GetXaxis()->SetTitleSize(0.04);
  SF_mistag_hlt80->SetLineColor(kBlue+3);
  SF_mistag_hlt80->SetLineWidth(2);
  SF_mistag_hlt80->Draw("EP");

  legend->Draw("same");

  string s_mistag_SF = "mistag_SF_pp_"+hltStr+".pdf";
  can_mistagSF->SaveAs(s_mistag_SF.c_str());

  //save to root file all 

  string outputFileNameSF = "";
  string outputCentr ="pp_";
  string path = "";
  string name_common = "mistagSF_";

  outputFileNameSF = path + name_common + outputCentr + hltStr + ".root";
  cout << outputFileNameSF << endl;

  TFile *foutSF = new TFile(outputFileNameSF.c_str(),"RECREATE");
  histo_gr_mc_RLight->Write();

  gr_data_negtag_hlt80->Write();
  histo_gr_data_negtag_hlt80->Write();
  histo_data_mistag_hlt80->Write();
  SF_mistag_hlt80->Write();

  foutSF->Close();


}
