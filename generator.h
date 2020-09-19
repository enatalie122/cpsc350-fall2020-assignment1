/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

generator.h is the header file for the Generator class.
*/

#ifndef GENERATOR_H
#define GENERATOR_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>

using namespace std;

//The Generator class generates DNA sequences based on the summary statistics of user provided file.
class Generator{

public:
  /*Default constructor name: Generator
  Constructs empty strings and sets int values to 0.*/
  Generator();
  /*Overloaded constructor name: Generator
  Parameters:
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
  */
  Generator(double aa, double at, double ag, double ac, double ta, double tt, double tg,
           double tc, double ga, double gt, double gg, double gc, double ca, double ct,
           double cg, double cc, double sd, double m);
  //Destructor name: ~Generator
  ~Generator();

  /*Method name: GenerateDna
  Returns a string of 1000 lines of DNA sequences.*/
  string GenerateDna();

private:
  /*Method name: GaussianLength
  Returns a double representing the length of a DNA sequence. The length is calculated using a
  Gaussian Distribution with the same mean and standard deviation of the line lengths from the user file.*/
  double GaussianLength();
  /*Method name: AddBigram
  Parameters:
  - frequency: an int representing the relative frequency that a specific nucleotide bigram occured in a
    user provided file.
  - bigram: a string representing a specific nucleotide bigram.
  Returns a string of repeated bigrams whose length is determined by the bigram's relative probability.*/
  string AddBigram(int frequency, string bigram);
  /*Method name: GenerateBigramFrequencies
  Updates member variable bigram_frequencies_ using the relative frequencies of all the nucleotide bigrams.*/
  void GenerateBigramFrequencies();
  /*Method name: GenerateLine
  Returns a string representing a sequence of DNA. Length of line is determined by a Gaussian Distribution
  and the bigrams are choosen randomly from the member variable bigram_frequencies_.*/
  string GenerateLine();

  /*Member variable name: bigram_frequencies_
  String representing the 'physical embodiment' of each bigram's relative probability. Bigrams are choosen randomly from
  this string to ensure their probability of occuring remains intact.*/
  string bigram_frequencies_;

  /*Member variable name: aa_frequency_
  Int representing the relative frequency of the nucleotide bigram 'AA' as a whole number.*/
  int aa_frequency_;
  /*Member variable name: at_frequency_
  Int representing the relative frequency of the nucleotide bigram 'AT' as a whole number.*/
  int at_frequency_;
  /*Member variable name: ag_frequency_
  Int representing the relative frequency of the nucleotide bigram 'AG' as a whole number.*/
  int ag_frequency_;
  /*Member variable name: ac_frequency_
  Int representing the relative frequency of the nucleotide bigram 'AC' as a whole number.*/
  int ac_frequency_;
  /*Member variable name: ta_frequency_
  Int representing the relative frequency of the nucleotide bigram 'TA' as a whole number.*/
  int ta_frequency_;
  /*Member variable name: tt_frequency_
  Int representing the relative frequency of the nucleotide bigram 'TT' as a whole number.*/
  int tt_frequency_;
  /*Member variable name: tg_frequency_
  Int representing the relative frequency of the nucleotide bigram 'TG' as a whole number.*/
  int tg_frequency_;
  /*Member variable name: tc_frequency_
  Int representing the relative frequency of the nucleotide bigram 'TC' as a whole number.*/
  int tc_frequency_;
  /*Member variable name: ga_frequency_
  Int representing the relative frequency of the nucleotide bigram 'GA' as a whole number.*/
  int ga_frequency_;
  /*Member variable name: gt_frequency_
  Int representing the relative frequency of the nucleotide bigram 'GT' as a whole number.*/
  int gt_frequency_;
  /*Member variable name: gg_frequency_
  Int representing the relative frequency of the nucleotide bigram 'GG' as a whole number.*/
  int gg_frequency_;
  /*Member variable name: gc_frequency_
  Int representing the relative frequency of the nucleotide bigram 'GC' as a whole number.*/
  int gc_frequency_;
  /*Member variable name: ca_frequency_
  Int representing the relative frequency of the nucleotide bigram 'CA' as a whole number.*/
  int ca_frequency_;
  /*Member variable name: ct_frequency_
  Int representing the relative frequency of the nucleotide bigram 'CT' as a whole number.*/
  int ct_frequency_;
  /*Member variable name: cg_frequency_
  Int representing the relative frequency of the nucleotide bigram 'CG' as a whole number.*/
  int cg_frequency_;
  /*Member variable name: cc_frequency_
  Int representing the relative frequency of the nucleotide bigram 'CC' as a whole number.*/
  int cc_frequency_;

  /*Member variable: standard_deviation_
  Double representing the standard deviation of the line lengths from user file.*/
  double standard_deviation_;
  /*Member variable: mean_
  Double representing the mean of the line lengths from user file.*/
  double mean_;
};
#endif
