#ifndef vtsAnalyser_H
#define vtsAnalyser_H

#include "hadAnalyser.h"

class vtsAnalyser : public hadAnalyser 
{
private:
  // for Test()
  int nTotHadKS = 0; int nMatchedKS = 0; int nHadKSDauCut = 0; int nRealKSFromTop = 0; int nRealKSWithJet = 0; int nRealKSWithJetAndCut = 0; int nKSWithCut =0; int nKSWithDauCut =0;

  std::vector<int>   b_GenPart_isGenFrom_vec; std::vector<bool> b_GenPart_isGenFromTop_vec; std::vector<bool> b_GenPart_isGenFromW_vec; std::vector<bool> b_GenPart_isFromKstar_vec;
  std::vector<float> b_GenPart_d_vec; 
  std::vector<float> b_GenPart_pt_vec; std::vector<float> b_GenPart_eta_vec; std::vector<float> b_GenPart_phi_vec; std::vector<float> b_GenPart_mass_vec;

  std::vector<int>   b_GenPart_isGenFrom_jetMat_vec; std::vector<bool> b_GenPart_isGenFromTop_jetMat_vec; std::vector<bool> b_GenPart_isGenFromW_jetMat_vec; std::vector<bool> b_GenPart_isFromKstar_jetMat_vec; 
  std::vector<float> b_GenPart_d_jetMat_vec; std::vector<float> b_GenPart_x_jetMat_vec; std::vector<float> b_GenPart_dr_jetMat_vec;
  std::vector<float> b_GenPart_pt_jetMat_vec; std::vector<float> b_GenPart_eta_jetMat_vec; std::vector<float> b_GenPart_phi_jetMat_vec; std::vector<float> b_GenPart_mass_jetMat_vec;

  std::vector<int>   b_GenPart_isGenFrom_gjetMat_vec; std::vector<bool> b_GenPart_isGenFromTop_gjetMat_vec; std::vector<bool> b_GenPart_isGenFromW_gjetMat_vec; std::vector<bool> b_GenPart_isFromKstar_gjetMat_vec;
  std::vector<float> b_GenPart_d_gjetMat_vec; std::vector<float> b_GenPart_x_gjetMat_vec; std::vector<float> b_GenPart_dr_gjetMat_vec;
  std::vector<float> b_GenPart_pt_gjetMat_vec; std::vector<float> b_GenPart_eta_gjetMat_vec; std::vector<float> b_GenPart_phi_gjetMat_vec; std::vector<float> b_GenPart_mass_gjetMat_vec;

  std::vector<int>   b_GenPart_isFrom_j_vec; std::vector<int> b_GenPart_nMatched_j_vec; std::vector<bool> b_GenPart_isInJet_j_vec; std::vector<bool> b_GenPart_isCorrectMat_j_vec; std::vector<float> b_GenPart_d_j_vec; std::vector<float> b_GenPart_x_j_vec; std::vector<float> b_GenPart_dr_j_vec; std::vector<float> b_GenPart_pt_j_vec;
  
  std::vector<int>   b_GenPart_isFrom_gj_vec; std::vector<int> b_GenPart_nMatched_gj_vec; std::vector<bool> b_GenPart_isInJet_gj_vec; std::vector<bool> b_GenPart_isCorrectMat_gj_vec; std::vector<float> b_GenPart_d_gj_vec; std::vector<float> b_GenPart_x_gj_vec; std::vector<float> b_GenPart_dr_gj_vec; std::vector<float> b_GenPart_pt_gj_vec;

  std::vector<int>   b_hadTruth_nMatched_vec; std::vector<int> b_hadTruth_isFrom_vec; std::vector<bool> b_hadTruth_isHadFromTop_vec; std::vector<bool> b_hadTruth_isHadFromW_vec; std::vector<bool> b_hadTruth_isHadFromS_vec; std::vector<bool> b_hadTruth_isHadFromC_vec; std::vector<bool> b_hadTruth_isHadFromB_vec;
  std::vector<float> b_hadTruth_d_vec;
  std::vector<float> b_hadTruth_pt_vec; std::vector<float> b_hadTruth_eta_vec; std::vector<float> b_hadTruth_phi_vec; std::vector<float> b_hadTruth_mass_vec;
  std::vector<float> b_hadTruth_lxy_vec; std::vector<float> b_hadTruth_lxySig_vec; std::vector<float> b_hadTruth_angleXY_vec; std::vector<float> b_hadTruth_angleXYZ_vec; std::vector<float> b_hadTruth_chi2_vec; std::vector<float> b_hadTruth_dca_vec;
  std::vector<float> b_hadTruth_l3D_vec; std::vector<float> b_hadTruth_l3DSig_vec; std::vector<float> b_hadTruth_legDR_vec; std::vector<int> b_hadTruth_pdgId_vec;
  std::vector<float> b_hadTruth_dau1_chi2_vec; std::vector<float> b_hadTruth_dau1_ipsigXY_vec; std::vector<float> b_hadTruth_dau1_ipsigZ_vec; std::vector<float> b_hadTruth_dau1_pt_vec;
  std::vector<float> b_hadTruth_dau2_chi2_vec; std::vector<float> b_hadTruth_dau2_ipsigXY_vec; std::vector<float> b_hadTruth_dau2_ipsigZ_vec; std::vector<float> b_hadTruth_dau2_pt_vec;

  std::vector<int>   b_hadTruth_nMatched_jetMat_vec; std::vector<int> b_hadTruth_isFrom_jetMat_vec; std::vector<bool> b_hadTruth_isHadFromTop_jetMat_vec; std::vector<bool> b_hadTruth_isHadFromW_jetMat_vec; std::vector<bool> b_hadTruth_isHadFromS_jetMat_vec; std::vector<bool> b_hadTruth_isHadFromC_jetMat_vec; std::vector<bool> b_hadTruth_isHadFromB_jetMat_vec; std::vector<int> b_hadTruth_qjMapForMC_jetMat_vec;
  std::vector<float> b_hadTruth_d_jetMat_vec; std::vector<float> b_hadTruth_x_jetMat_vec; std::vector<float> b_hadTruth_dr_jetMat_vec;
  std::vector<float> b_hadTruth_pt_jetMat_vec; std::vector<float> b_hadTruth_eta_jetMat_vec; std::vector<float> b_hadTruth_phi_jetMat_vec; std::vector<float> b_hadTruth_mass_jetMat_vec;
  std::vector<float> b_hadTruth_lxy_jetMat_vec; std::vector<float> b_hadTruth_lxySig_jetMat_vec; std::vector<float> b_hadTruth_angleXY_jetMat_vec; std::vector<float> b_hadTruth_angleXYZ_jetMat_vec; std::vector<float> b_hadTruth_chi2_jetMat_vec; std::vector<float> b_hadTruth_dca_jetMat_vec;
  std::vector<float> b_hadTruth_l3D_jetMat_vec; std::vector<float> b_hadTruth_l3DSig_jetMat_vec; std::vector<float> b_hadTruth_legDR_jetMat_vec; std::vector<int> b_hadTruth_pdgId_jetMat_vec;
  std::vector<float> b_hadTruth_dau1_chi2_jetMat_vec; std::vector<float> b_hadTruth_dau1_ipsigXY_jetMat_vec; std::vector<float> b_hadTruth_dau1_ipsigZ_jetMat_vec; std::vector<float> b_hadTruth_dau1_pt_jetMat_vec;
  std::vector<float> b_hadTruth_dau2_chi2_jetMat_vec; std::vector<float> b_hadTruth_dau2_ipsigXY_jetMat_vec; std::vector<float> b_hadTruth_dau2_ipsigZ_jetMat_vec; std::vector<float> b_hadTruth_dau2_pt_jetMat_vec;

  std::vector<int>   b_hadTruth_nMatched_gjetMat_vec; std::vector<int> b_hadTruth_isFrom_gjetMat_vec; std::vector<bool> b_hadTruth_isHadFromTop_gjetMat_vec; std::vector<bool> b_hadTruth_isHadFromW_gjetMat_vec; std::vector<bool> b_hadTruth_isHadFromS_gjetMat_vec; std::vector<bool> b_hadTruth_isHadFromC_gjetMat_vec; std::vector<bool> b_hadTruth_isHadFromB_gjetMat_vec; std::vector<int> b_hadTruth_qjMapForMC_gjetMat_vec;
  std::vector<float> b_hadTruth_d_gjetMat_vec; std::vector<float> b_hadTruth_x_gjetMat_vec; std::vector<float> b_hadTruth_dr_gjetMat_vec;
  std::vector<float> b_hadTruth_pt_gjetMat_vec; std::vector<float> b_hadTruth_eta_gjetMat_vec; std::vector<float> b_hadTruth_phi_gjetMat_vec; std::vector<float> b_hadTruth_mass_gjetMat_vec;
  std::vector<float> b_hadTruth_lxy_gjetMat_vec; std::vector<float> b_hadTruth_lxySig_gjetMat_vec; std::vector<float> b_hadTruth_angleXY_gjetMat_vec; std::vector<float> b_hadTruth_angleXYZ_gjetMat_vec; std::vector<float> b_hadTruth_chi2_gjetMat_vec; std::vector<float> b_hadTruth_dca_gjetMat_vec;
  std::vector<float> b_hadTruth_l3D_gjetMat_vec; std::vector<float> b_hadTruth_l3DSig_gjetMat_vec; std::vector<float> b_hadTruth_legDR_gjetMat_vec; std::vector<int> b_hadTruth_pdgId_gjetMat_vec;
  std::vector<float> b_hadTruth_dau1_chi2_gjetMat_vec; std::vector<float> b_hadTruth_dau1_ipsigXY_gjetMat_vec; std::vector<float> b_hadTruth_dau1_ipsigZ_gjetMat_vec; std::vector<float> b_hadTruth_dau1_pt_gjetMat_vec;
  std::vector<float> b_hadTruth_dau2_chi2_gjetMat_vec; std::vector<float> b_hadTruth_dau2_ipsigXY_gjetMat_vec; std::vector<float> b_hadTruth_dau2_ipsigZ_gjetMat_vec; std::vector<float> b_hadTruth_dau2_pt_gjetMat_vec;

  std::vector<int>   b_hadTruth_isFrom_j_vec; std::vector<int> b_hadTruth_nMatched_j_vec; std::vector<bool> b_hadTruth_isInJet_j_vec; std::vector<bool> b_hadTruth_isCorrectMat_j_vec; 
  std::vector<float> b_hadTruth_d_j_vec; std::vector<float> b_hadTruth_x_j_vec; std::vector<float> b_hadTruth_dr_j_vec; 
  std::vector<float> b_hadTruth_pt_j_vec;

  std::vector<int>   b_hadTruth_isFrom_gj_vec; std::vector<int> b_hadTruth_nMatched_gj_vec; std::vector<bool> b_hadTruth_isInJet_gj_vec; std::vector<bool> b_hadTruth_isCorrectMat_gj_vec; 
  std::vector<float> b_hadTruth_d_gj_vec; std::vector<float> b_hadTruth_x_gj_vec; std::vector<float> b_hadTruth_dr_gj_vec; 
  std::vector<float> b_hadTruth_pt_gj_vec;

  std::vector<int>   b_hadTruth_isFrom_closest_j_vec; std::vector<int> b_hadTruth_nMatched_closest_j_vec; std::vector<bool> b_hadTruth_isInJet_closest_j_vec; std::vector<bool> b_hadTruth_isCorrectMat_closest_j_vec; 
  std::vector<float> b_hadTruth_d_closest_j_vec; std::vector<float> b_hadTruth_x_closest_j_vec; std::vector<float> b_hadTruth_dr_closest_j_vec;
  std::vector<float> b_hadTruth_pt_closest_j_vec; std::vector<float> b_hadTruth_eta_closest_j_vec; std::vector<float> b_hadTruth_phi_closest_j_vec; std::vector<float> b_hadTruth_mass_closest_j_vec;

  std::vector<int>   b_hadTruth_isFrom_highest_j_vec; std::vector<int> b_hadTruth_nMatched_highest_j_vec; std::vector<bool> b_hadTruth_isInJet_highest_j_vec; std::vector<bool> b_hadTruth_isCorrectMat_highest_j_vec; 
  std::vector<float> b_hadTruth_d_highest_j_vec; std::vector<float> b_hadTruth_x_highest_j_vec; std::vector<float> b_hadTruth_dr_highest_j_vec;
  std::vector<float> b_hadTruth_pt_highest_j_vec; std::vector<float> b_hadTruth_eta_highest_j_vec; std::vector<float> b_hadTruth_phi_highest_j_vec; std::vector<float> b_hadTruth_mass_highest_j_vec;

  // for CollectVar()
  std::vector<float> b_lep_pt_vec; std::vector<float> b_dilep_pt_vec; std::vector<float> b_elec_pt_vec; std::vector<float> b_mu_pt_vec;
  std::vector<float> b_lep_eta_vec; std::vector<float> b_dilep_eta_vec; std::vector<float> b_elec_eta_vec; std::vector<float> b_mu_eta_vec;
  std::vector<float> b_lep_phi_vec; std::vector<float> b_dilep_phi_vec; std::vector<float> b_elec_phi_vec; std::vector<float> b_mu_phi_vec;
  std::vector<float> b_lep_mass_vec; std::vector<float> b_dilep_mass_vec; std::vector<float> b_elec_mass_vec; std::vector<float> b_mu_mass_vec;
  std::vector<float> b_lep_dxy_vec; std::vector<float> b_elec_dxy_vec; std::vector<float> b_mu_dxy_vec;
  float b_MET_pt, b_MET_phi, b_MET_sumEt;

  // for MatchingForMC()
  std::map<unsigned int, int> qjMapForMC_; std::map<unsigned int, int> qgjMapForMC_;
  std::vector<int> tqMC_;
  std::vector<int> wqMC_;
  std::vector<struct JetStat> recoJet_; std::vector<struct JetStat> genJet_;

  //functions
  void ResetBranch();
  void MakeBranch(TTree* t);
  void MatchingForMC();
  void HadronAnalysis();

  bool isGenFrom(int count, int idx, int & isFrom, bool & isFromTop, bool & isFromW, bool & isFromKstar);
  int Test();
  void CollectVar();

public:
  void setOutput(std::string outputName);

  vtsAnalyser(TTree *tree=0, TTree *had=0, TTree *hadTruth=0, Bool_t isMC = false, Bool_t dl = false, Bool_t sle = false, Bool_t slm = false);
  vtsAnalyser(TTree *tree=0, Bool_t isMC=false, Bool_t dl=false, Bool_t sle=false, Bool_t slm=false) : vtsAnalyser(tree, 0, 0, isMC, dl, sle, slm) {}
  ~vtsAnalyser();
  virtual void     Loop();
};

vtsAnalyser::vtsAnalyser(TTree *tree, TTree *had, TTree *hadTruth, Bool_t isMC, Bool_t dl, Bool_t sle, Bool_t slm) : hadAnalyser(tree, had, hadTruth, isMC, dl, sle, slm)
{ }

vtsAnalyser::~vtsAnalyser()
{ }

#endif
