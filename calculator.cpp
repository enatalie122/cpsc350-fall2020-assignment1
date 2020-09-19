/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

calculator.cpp is the implementation file for the calculator.h header file.
*/

#include "calculator.h"

Calculator::Calculator(){
  dna_sequence_ = "";
  nucleotides_ = "";
  number_of_lines_ = 0.0;
  length_sum_ = 0.0;
  length_mean_ = 0.0;
  length_variance_ = 0.0;
  length_standard_deviation_ = 0.0;
  a_probability_ = 0.0;
  t_probability_ = 0.0;
  g_probability_ = 0.0;
  c_probability_ = 0.0;
  aa_probability_ = 0.0;
  at_probability_ = 0.0;
  ag_probability_ = 0.0;
  ac_probability_ = 0.0;
  ta_probability_ = 0.0;
  tt_probability_ = 0.0;
  tg_probability_ = 0.0;
  tc_probability_ = 0.0;
  ga_probability_ = 0.0;
  gt_probability_ = 0.0;
  gg_probability_ = 0.0;
  gc_probability_ = 0.0;
  ca_probability_ = 0.0;
  ct_probability_ = 0.0;
  cg_probability_ = 0.0;
  cc_probability_ = 0.0;
}

Calculator::Calculator(string dna_sequence, int number_of_lines, int length_sum){
  dna_sequence_ = dna_sequence;
  nucleotides_ = "";
  number_of_lines_ = number_of_lines;
  length_sum_ = length_sum;
  length_mean_ = 0.0;
  length_variance_ = 0.0;
  length_standard_deviation_ = 0.0;
  a_probability_ = 0.0;
  t_probability_ = 0.0;
  g_probability_ = 0.0;
  c_probability_ = 0.0;
  aa_probability_ = 0.0;
  at_probability_ = 0.0;
  ag_probability_ = 0.0;
  ac_probability_ = 0.0;
  ta_probability_ = 0.0;
  tt_probability_ = 0.0;
  tg_probability_ = 0.0;
  tc_probability_ = 0.0;
  ga_probability_ = 0.0;
  gt_probability_ = 0.0;
  gg_probability_ = 0.0;
  gc_probability_ = 0.0;
  ca_probability_ = 0.0;
  ct_probability_ = 0.0;
  cg_probability_ = 0.0;
  cc_probability_ = 0.0;
}

Calculator::~Calculator(){}

double Calculator::get_sum(){
  return length_sum_;
}

double Calculator::get_variance(){
  return length_variance_;
}

double Calculator::get_mean(){
  return length_mean_;
}

double Calculator::get_standard_deviation(){
  return length_standard_deviation_;
}

double Calculator::get_a_probability(){
  return a_probability_;
}

double Calculator::get_t_probability(){
  return t_probability_;
}

double Calculator::get_g_probability(){
  return g_probability_;
}

double Calculator::get_c_probability(){
  return t_probability_;
}

double Calculator::get_aa_probability(){
  return aa_probability_;
}

double Calculator::get_at_probability(){
  return at_probability_;
}

double Calculator::get_ag_probability(){
  return ag_probability_;
}

double Calculator::get_ac_probability(){
  return ac_probability_;
}

double Calculator::get_ta_probability(){
  return ta_probability_;
}

double Calculator::get_tt_probability(){
  return tt_probability_;
}

double Calculator::get_tg_probability(){
  return tg_probability_;
}

double Calculator::get_tc_probability(){
  return tc_probability_;
}

double Calculator::get_ga_probability(){
  return ga_probability_;
}

double Calculator::get_gt_probability(){
  return gt_probability_;
}

double Calculator::get_gg_probability(){
  return gg_probability_;
}

double Calculator::get_gc_probability(){
  return gc_probability_;
}

double Calculator::get_ca_probability(){
  return ca_probability_;
}

double Calculator::get_ct_probability(){
  return ct_probability_;
}

double Calculator::get_cg_probability(){
  return cg_probability_;
}

double Calculator::get_cc_probability(){
  return cc_probability_;
}

void Calculator::Calculate(){
  CalculateMean();
  CalculateVariance();
  CalculateStandardDeviation();
  Count();
  CalculateProbability();
}

void Calculator::CalculateMean(){
  length_mean_ = length_sum_ / number_of_lines_;
}

void Calculator::CalculateVariance(){
  for(int i = 0; i < dna_sequence_.length(); ++i){
    int j = i;
    i = dna_sequence_.find_first_of('\n', j);
    string current_line = dna_sequence_.substr(j, i - j - 1);
    double lineVar = current_line.length() - length_mean_;
    length_variance_ += pow(lineVar, 2);
    nucleotides_ += current_line;
  }
  length_variance_ /= number_of_lines_;
}

void Calculator::CalculateStandardDeviation(){
  length_standard_deviation_ = sqrt(length_variance_);
}

void Calculator::Count(){
  for(int i = 0; i < nucleotides_.length(); ++i){
    string current_bigram;
    if (i == nucleotides_.length() - 1){
      current_bigram = nucleotides_.substr(i, 1) + nucleotides_.substr(0, 1);
    } else {
      current_bigram = nucleotides_.substr(i, 2);
    }

    if (current_bigram == "AA"){
      aa_probability_ += 1;
      a_probability_ += 2;
    } else if (current_bigram == "AT"){
      at_probability_ += 1;
      a_probability_ += 1;
      t_probability_ += 1;
    } else if (current_bigram == "AG"){
      ag_probability_ += 1;
      a_probability_ += 1;
      g_probability_ += 1;
    } else if (current_bigram == "AC"){
      ac_probability_ += 1;
      a_probability_ += 1;
      c_probability_ += 1;
    } else if (current_bigram == "TA"){
      ta_probability_ += 1;
      t_probability_ += 1;
      a_probability_ += 1;
    } else if (current_bigram == "TT"){
      tt_probability_ += 1;
      t_probability_ += 2;
    } else if (current_bigram == "TG"){
      tg_probability_ += 1;
      t_probability_ += 1;
      g_probability_ += 1;
    } else if (current_bigram == "TC"){
      tc_probability_ += 1;
      t_probability_ += 1;
      c_probability_ += 1;
    } else if (current_bigram == "GA"){
      ga_probability_ += 1;
      g_probability_ += 1;
      a_probability_ += 1;
    } else if (current_bigram == "GT"){
      gt_probability_ += 1;
      g_probability_ += 1;
      t_probability_ += 1;
    } else if (current_bigram == "GG"){
      gg_probability_ += 1;
      g_probability_ += 2;
    } else if (current_bigram == "GC"){
      gc_probability_ += 1;
      g_probability_ += 1;
      c_probability_ += 1;
    } else if (current_bigram == "CA"){
      ca_probability_ += 1;
      c_probability_ += 1;
      a_probability_ += 1;
    } else if (current_bigram == "CT"){
      ct_probability_ += 1;
      c_probability_ += 1;
      t_probability_ += 1;
    } else if (current_bigram == "CG"){
      cg_probability_ += 1;
      c_probability_ += 1;
      g_probability_ += 1;
    } else if (current_bigram == "CC"){
      cc_probability_ += 1;
      c_probability_ += 2;
    }
    ++i;
  }
}

void Calculator::CalculateProbability(){
  a_probability_ /= nucleotides_.length();
  t_probability_ /= nucleotides_.length();
  g_probability_ /= nucleotides_.length();
  c_probability_ /= nucleotides_.length();
  aa_probability_ /= (nucleotides_.length()/2);
  at_probability_ /= (nucleotides_.length()/2);
  ag_probability_ /= (nucleotides_.length()/2);
  ac_probability_ /= (nucleotides_.length()/2);
  ta_probability_ /= (nucleotides_.length()/2);
  tt_probability_ /= (nucleotides_.length()/2);
  tg_probability_ /= (nucleotides_.length()/2);
  tc_probability_ /= (nucleotides_.length()/2);
  ga_probability_ /= (nucleotides_.length()/2);
  gt_probability_ /= (nucleotides_.length()/2);
  gg_probability_ /= (nucleotides_.length()/2);
  gc_probability_ /= (nucleotides_.length()/2);
  ca_probability_ /= (nucleotides_.length()/2);
  ct_probability_ /= (nucleotides_.length()/2);
  cg_probability_ /= (nucleotides_.length()/2);
  cc_probability_ /= (nucleotides_.length()/2);
}
