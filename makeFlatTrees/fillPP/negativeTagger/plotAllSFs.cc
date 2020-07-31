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



void plotAllSFs(){

  TFile *file_sf_jet80 = new TFile("mistagSF_pp_hltJet80.root");
  TH1D *histo_sf_jet80 = (TH1D*)file_sf_jet80->Get("SF_mistag_hlt80");

  TFile *file_sf_jet60 = new TFile("mistagSF_pp_hltJet60.root");
  TH1D *histo_sf_jet60 = (TH1D*)file_sf_jet60->Get("SF_mistag_hlt80");

  TFile *file_sf_jet40 = new TFile("mistagSF_pp_hltJet40.root");
  TH1D *histo_sf_jet40 = (TH1D*)file_sf_jet40->Get("SF_mistag_hlt80");

  TFile *file_sf_jet30 = new TFile("mistagSF_pp_hltJet30.root");
  TH1D *histo_sf_jet30 = (TH1D*)file_sf_jet30->Get("SF_mistag_hlt80");

  TLegend *legend = new TLegend(0.55,0.9,0.9,0.6,"","brNDC");
  legend->SetHeader("");

  legend->SetBorderSize(0);
  legend->SetFillStyle(0);
  legend->SetTextFont(42);

  TCanvas * can_sf_all = new TCanvas("can_sf_all","can_sf_all",600,600);
  can_sf_all->SetRightMargin(0.1);
  can_sf_all->SetLeftMargin(0.1);
  can_sf_all->SetTopMargin(0.1);
  can_sf_all->SetBottomMargin(0.1);

  histo_sf_jet80->SetStats(0);
  histo_sf_jet80->SetTitle("mistag SF");
  histo_sf_jet80->GetXaxis()->SetTitle("jet p_{T}");
  histo_sf_jet80->GetYaxis()->SetTitle("");
  histo_sf_jet80->GetYaxis()->SetTitleOffset(1.7);
  histo_sf_jet80->GetYaxis()->SetRangeUser(0.8,1.3);
  histo_sf_jet80->GetYaxis()->SetTitleSize(0.04);
  histo_sf_jet80->GetXaxis()->SetTitleSize(0.04);
  histo_sf_jet80->SetLineColor(kGray+3);
  histo_sf_jet80->SetLineWidth(2);
  histo_sf_jet80->Draw("EP");

  histo_sf_jet60->SetLineColor(kBlue-7);
  histo_sf_jet60->SetLineWidth(2);
  histo_sf_jet60->Draw("EPsame");

  histo_sf_jet40->SetLineColor(kRed-7);
  histo_sf_jet40->SetLineWidth(2);
  histo_sf_jet40->Draw("EPsame");

  histo_sf_jet30->SetLineColor(kOrange-3);
  histo_sf_jet30->SetLineWidth(2);
  histo_sf_jet30->Draw("EPsame");

  legend->AddEntry(histo_sf_jet80,"jet80","epl");
  legend->AddEntry(histo_sf_jet60,"jet60","epl");
  legend->AddEntry(histo_sf_jet40,"jet40","epl");
  legend->AddEntry(histo_sf_jet30,"jet30","epl");
  legend->Draw("same");

  can_sf_all->SaveAs("allSFs.pdf");



}
