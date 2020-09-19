/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

calculator.h is the header file for the Calculator class.
*/

#ifndef CALCULATOR_H
#define CALCULAOR_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//The Calculator class calculates summary statistics for user provided DNA sequences.
class Calculator{

public:
  /*Default constructor name: Calculator
  Constructs empty strings and sets double values to 0.0.*/
  Calculator();
  /*Overloaded constructor name: Calculator
  Parameters:
  - dna_sequence: string containing the DNA sequences provided from user file.
  - number_of_lines: int representing the number of lines in user file.
  - length_sum: int representing the sum of the length of the lines in user file.*/
  Calculator(string dna_sequence, int number_of_lines, int length_sum);
  //Destructor name: ~Calculator
  ~Calculator();

  /*Accessor name: get_sum
  Returns a double representing the sum of the length of the lines in user file.*/
  double get_sum();
  /*Acessor name: get_mean
  Returns a double reprsenting the mean of the line lengths in user file.*/
  double get_mean();
  /*Acessor name: get_variance
  Returns a double representing the variance of the line lengths in user file.*/
  double get_variance();
  /*Acessor name: get_standard_deviation
  Returns a double representing the standard deviation of the line lengths in user file.*/
  double get_standard_deviation();
  /*Acessor name: get_a_probability
  Returns a double representing the relative probability of the nucleotide 'A' occurring in user file.*/
  double get_a_probability();
  /*Acessor name: get_t_probability
  Returns a double representing the relative probability of the nucleotide 'T' occurring in user file.*/
  double get_t_probability();
  /*Acessor name: get_g_probability
  Returns a double representing the relative probability of the nucleotide 'G' occurring in user file.*/
  double get_g_probability();
  /*Acessor name: get_c_probability
  Returns a double representing the relative probability of the nucleotide 'C' occurring in user file.*/
  double get_c_probability();
  /*Acessor name: get_aa_probability
  Returns a double representing the relative probability of the nucleotide bigram 'AA' occurring in user file.*/
  double get_aa_probability();
  /*Acessor name: get_at_probability
  Returns a double representing the relative probability of the nucleotide bigram 'AT' occurring in user file.*/
  double get_at_probability();
  /*Acessor name: get_ag_probability
  Returns a double representing the relative probability of the nucleotide bigram 'AG' occurring in user file.*/
  double get_ag_probability();
  /*Acessor name: get_ac_probability
  Returns a double representing the relative probability of the nucleotide bigram 'AC' occurring in user file.*/
  double get_ac_probability();
  /*Acessor name: get_ta_probability
  Returns a double representing the relative probability of the nucleotide bigram 'TA' occurring in user file.*/
  double get_ta_probability();
  /*Acessor name: get_tt_probability
  Returns a double representing the relative probability of the nucleotide bigram 'TT' occurring in user file.*/
  double get_tt_probability();
  /*Acessor name: get_tg_probability
  Returns a double representing the relative probability of the nucleotide bigram 'TG' occurring in user file.*/
  double get_tg_probability();
  /*Acessor name: get_tc_probability
  Returns a double representing the relative probability of the nucleotide bigram 'TC' occurring in user file.*/
  double get_tc_probability();
  /*Acessor name: get_ga_probability
  Returns a double representing the relative probability of the nucleotide bigram 'GA' occurring in user file.*/
  double get_ga_probability();
  /*Acessor name: get_gt_probability
  Returns a double representing the relative probability of the nucleotide bigram 'GT' occurring in user file.*/
  double get_gt_probability();
  /*Acessor name: get_gg_probability
  Returns a double representing the relative probability of the nucleotide bigram 'GG' occurring in user file.*/
  double get_gg_probability();
  /*Acessor name: get_gc_probability
  Returns a double representing the relative probability of the nucleotide bigram 'GC' occurring in user file.*/
  double get_gc_probability();
  /*Acessor name: get_ca_probability
  Returns a double representing the relative probability of the nucleotide bigram 'CA' occurring in user file.*/
  double get_ca_probability();
  /*Acessor name: get_ct_probability
  Returns a double representing the relative probability of the nucleotide bigram 'CT' occurring in user file.*/
  double get_ct_probability();
  /*Acessor name: get_cg_probability
  Returns a double representing the relative probability of the nucleotide bigram 'CG' occurring in user file.*/
  double get_cg_probability();
  /*Acessor name: get_cc_probability
  Returns a double representing the relative probability of the nucleotide bigram 'CC' occurring in user file.*/
  double get_cc_probability();

  /*Method name: Calculate
  Calls member methods to calculate summary statistics and updates appropriate member variables accordingly.*/
  void Calculate();

private:
  /*Method name: CalculateMean
  Calculates the mean line length from user file.*/
  void CalculateMean();
  /*Method name: CalculateVariance
  Calculates the variance of the line lengths from user file.*/
  void CalculateVariance();
  /*Method name: CalculateStandardDeviation
  Calculates the standard deviation of the line lengths from user file.*/
  void CalculateStandardDeviation();
  /*Method name: Count
  Counts the occurrence of each nucleotide and each nucleotide bigram.*/
  void Count();
  /*Method name: CalculateProbability
  Calculates the relative probability of each nucleotide and each nucleotide bigram occurring in user file.*/
  void CalculateProbability();

  /*Member variable name: dna_sequence_
  A string containing the DNA sequences provided from user file.*/
  string dna_sequence_;
  /*Member variable name: nucleotides_
  A string representing the DNA sequence from user file without whitespace.*/
  string nucleotides_;
  /*Member variable name: number_of_lines_
  A double representing the number of lines in user file.*/
  double number_of_lines_;
  /*Member variable name: length_sum_
  A double representing the sum of the length of the lines in user file.*/
  double length_sum_;
  /*Member variable name: length_mean_
  Double representing the variance of the line lengths in user file.*/
  double length_mean_;
  /*Member variable name: length_variance_
  Double representing the variance of the line lengths in user file.*/
  double length_variance_;
  /*Member variable name: length_standard_deviation_
  Double representing the standard deviation of the line lengths in user file.*/
  double length_standard_deviation_;
  /*Member variable name: a_probability_
  Double representing the relative probability of the nucleotide 'A' occurring in user file.*/
  double a_probability_;
  /*Member variable name: t_probability_
  Double representing the relative probability of the nucleotide 'T' occurring in user file.*/
  double t_probability_;
  /*Member variable name: g_probability_
  Double representing the relative probability of the nucleotide 'G' occurring in user file.*/
  double g_probability_;
  /*Member variable name: c_probability_
  Double representing the relative probability of the nucleotide 'C' occurring in user file.*/
  double c_probability_;
  /*Member variable name: aa_probability_
  Double representing the relative probability of the nucleotide bigram 'AA' occurring in user file.*/
  double aa_probability_;
  /*Member variable name: at_probability_
  Double representing the relative probability of the nucleotide bigram 'AT' occurring in user file.*/
  double at_probability_;
  /*Member variable name: ag_probability_
  Double representing the relative probability of the nucleotide bigram 'AG' occurring in user file.*/
  double ag_probability_;
  /*Member variable name: ac_probability_
  Double representing the relative probability of the nucleotide bigram 'AC' occurring in user file.*/
  double ac_probability_;
  /*Member variable name: ta_probability_
  Double representing the relative probability of the nucleotide bigram 'TA' occurring in user file.*/
  double ta_probability_;
  /*Member variable name: tt_probability_
  Double representing the relative probability of the nucleotide bigram 'TT' occurring in user file.*/
  double tt_probability_;
  /*Member variable name: tg_probability_
  Double representing the relative probability of the nucleotide bigram 'TG' occurring in user file.*/
  double tg_probability_;
  /*Member variable name: tc_probability_
  Double representing the relative probability of the nucleotide bigram 'TC' occurring in user file.*/
  double tc_probability_;
  /*Member variable name: ga_probability_
  Double representing the relative probability of the nucleotide bigram 'GA' occurring in user file.*/
  double ga_probability_;
  /*Member variable name: gt_probability_
  Double representing the relative probability of the nucleotide bigram 'GT' occurring in user file.*/
  double gt_probability_;
  /*Member variable name: gg_probability_
  Double representing the relative probability of the nucleotide bigram 'GG' occurring in user file.*/
  double gg_probability_;
  /*Member variable name: gc_probability_
  Double representing the relative probability of the nucleotide bigram 'GC' occurring in user file.*/
  double gc_probability_;
  /*Member variable name: ca_probability_
  Double representing the relative probability of the nucleotide bigram 'CA' occurring in user file.*/
  double ca_probability_;
  /*Member variable name: ct_probability_
  Double representing the relative probability of the nucleotide bigram 'CT' occurring in user file.*/
  double ct_probability_;
  /*Member variable name: cg_probability_
  Double representing the relative probability of the nucleotide bigram 'cg' occurring in user file.*/
  double cg_probability_;
  /*Member variable name: cc_probability_
  Double representing the relative probability of the nucleotide bigram 'CC' occurring in user file.*/
  double cc_probability_;
};

#endif
