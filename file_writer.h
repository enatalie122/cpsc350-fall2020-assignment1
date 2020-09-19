/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

file_writer.h is a header file for the FileWriter class.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*The FileWriter class writes a header, summary statistics, and generated DNA to a file.*/
class FileWriter{

public:
  /*Default constructor name: FileWriter
  Constructs empty strings and sets double values to 0.0*/
  FileWriter();
  /*Overloaded constructor name: FileWriter
  Parameters:
  - sum: Double representing the sum of the length of the lines in user file.
  - mean: Double representing the mean of the length of the lines in user file.
  - var: Double representing the variance of the length of the lines in user file.
  - sd: Double representing the standard deviation of the length of the lines in user file.
  - a: Double representing the relative probability of the nucleotide 'A' occurring in user file.
  - t: Double representing the relative probability of the nucleotide 'T' occurring in user file.
  - g: Double representing the relative probability of the nucleotide 'G' occurring in user file.
  - c: Double representing the relative probability of the nucleotide 'C' occurring in user file.
  - aa: Double representing the relative probability of the nucleotide bigram 'AA' occurring in user file.
  - at: Double representing the relative probability of the nucleotide bigram 'AT' occurring in user file.
  - ag: Double representing the relative probability of the nucleotide bigram 'AG' occurring in user file.
  - ac: Double representing the relative probability of the nucleotide bigram 'AC' occurring in user file.
  - ta: Double representing the relative probability of the nucleotide bigram 'TA' occurring in user file.
  - tt: Double representing the relative probability of the nucleotide bigram 'TT' occurring in user file.
  - tg: Double representing the relative probability of the nucleotide bigram 'TG' occurring in user file.
  - tc: Double representing the relative probability of the nucleotide bigram 'TC' occurring in user file.
  - ga: Double representing the relative probability of the nucleotide bigram 'GA' occurring in user file.
  - gt: Double representing the relative probability of the nucleotide bigram 'GT' occurring in user file.
  - gg: Double representing the relative probability of the nucleotide bigram 'GG' occurring in user file.
  - gc: Double representing the relative probability of the nucleotide bigram 'GC' occurring in user file.
  - ca: Double representing the relative probability of the nucleotide bigram 'CA' occurring in user file.
  - ct: Double representing the relative probability of the nucleotide bigram 'CT' occurring in user file.
  - cg: Double representing the relative probability of the nucleotide bigram 'CG' occurring in user file.
  - cc: Double representing the relative probability of the nucleotide bigram 'CC' occurring in user file.
  - dna: String representing 1000 lines of DNA generated based on summary statistics of user provided DNA.
  */
  FileWriter(double sum, double mean, double var, double sd, double a, double t, double g, double c,
  double aa, double at, double ag, double ac, double ta, double tt, double tg, double tc, double ga,
  double gt, double gg, double gc, double ca, double ct, double cg, double cc, string dna);
  //Destructor name: ~FileWriter
  ~FileWriter();

  /*Method name: WriteHeader
  Writes a header to a file.*/
  void WriteHeader();
  /*Method name: WriteData
  Writes summary statistics to a file.*/
  void WriteData();
  /*Method name: WriteDna
  Writes generated DNA sequence to a file.*/
  void WriteDna();

private:
  /*Member variable name: sum_
  Double representing the sum of the length of the lines in user file.*/
  double sum_;
  /*Member variable name: mean_
  Double representing the mean of the length of the lines in user file.*/
  double mean_;
  /*Member variable name: variance_
  Double representing the variance of the length of the lines in user file.*/
  double variance_;
  /*Member variable name: standard_deviation_
  Double representing the standard deviation of the length of the lines in user file.*/
  double standard_deviation_;
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
  /*Member variable name: dna_sequence_
  String representing 1000 lines of DNA generated based on summary statistics of user provided DNA.*/
  string dna_sequence_;
};
