/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

generator.cpp is the implementation of the generator.h header file.
*/

#include "generator.h"

Generator::Generator(){
  bigram_frequencies_ = "";
  aa_frequency_ = 0;
  at_frequency_ = 0;
  ag_frequency_ = 0;
  ac_frequency_ = 0;
  ta_frequency_ = 0;
  tt_frequency_ = 0;
  tg_frequency_ = 0;
  tc_frequency_ = 0;
  ga_frequency_ = 0;
  gt_frequency_ = 0;
  gg_frequency_ = 0;
  gc_frequency_ = 0;
  ca_frequency_ = 0;
  ct_frequency_ = 0;
  cg_frequency_ = 0;
  cc_frequency_ = 0;
  standard_deviation_ = 0;
  mean_ = 0;
}

Generator::Generator(double aa, double at, double ag, double ac, double ta, double tt, double tg,
double tc, double ga, double gt, double gg, double gc, double ca, double ct, double cg, double cc,
double sd, double m){
  bigram_frequencies_ = "";
  aa_frequency_ = round(aa * 10000);
  at_frequency_ = round(at * 10000);
  ag_frequency_ = round(ag * 10000);
  ac_frequency_ = round(ac * 10000);
  ta_frequency_ = round(ta * 10000);
  tt_frequency_ = round(tt * 10000);
  tg_frequency_ = round(tg * 10000);
  tc_frequency_ = round(tc * 10000);
  ga_frequency_ = round(ga * 10000);
  gt_frequency_ = round(gt * 10000);
  gg_frequency_ = round(gg * 10000);
  gc_frequency_ = round(gc * 10000);
  ca_frequency_ = round(ca * 10000);
  ct_frequency_ = round(ct * 10000);
  cg_frequency_ = round(cg * 10000);
  cc_frequency_ = round(cc * 10000);
  standard_deviation_ = sd;
  mean_ = m;
}

Generator::~Generator(){}

string Generator::GenerateDna(){
  string dna = "";
  GenerateBigramFrequencies();
  for (int i = 0; i < 1000; ++i){
    dna += GenerateLine();
  }
  return dna;
}

double Generator::GaussianLength(){
  double a = rand() / (RAND_MAX + 1.0);
  double b = rand() / (RAND_MAX + 1.0);
  double c = (sqrt(-2 * log(a))) * (cos(2 * M_PI * b));
  double d = (standard_deviation_ * c) + mean_;
  return d;
}

string Generator::AddBigram(int frequency, string bigram){
  string bigram_frequency = "";
  for (int i = 0; i < frequency; ++i){
    bigram_frequency.append(bigram);
  }
  return bigram_frequency;
}

void Generator::GenerateBigramFrequencies(){
  bigram_frequencies_ += AddBigram(aa_frequency_, "AA");
  bigram_frequencies_ += AddBigram(at_frequency_, "AT");
  bigram_frequencies_ += AddBigram(ag_frequency_, "AG");
  bigram_frequencies_ += AddBigram(ac_frequency_, "AC");
  bigram_frequencies_ += AddBigram(ta_frequency_, "TA");
  bigram_frequencies_ += AddBigram(tt_frequency_, "TT");
  bigram_frequencies_ += AddBigram(tg_frequency_, "TG");
  bigram_frequencies_ += AddBigram(tc_frequency_, "TC");
  bigram_frequencies_ += AddBigram(ga_frequency_, "GA");
  bigram_frequencies_ += AddBigram(gt_frequency_, "GT");
  bigram_frequencies_ += AddBigram(gg_frequency_, "GG");
  bigram_frequencies_ += AddBigram(gc_frequency_, "GC");
  bigram_frequencies_ += AddBigram(ca_frequency_, "CA");
  bigram_frequencies_ += AddBigram(ct_frequency_, "CT");
  bigram_frequencies_ += AddBigram(cg_frequency_, "CG");
  bigram_frequencies_ += AddBigram(cc_frequency_, "CC");
}

string Generator::GenerateLine(){
  double length = round(GaussianLength());
  int test_length = length;
  string line = "";
  for (int i = 0; i < length/2; ++i){
    int bigram_chooser = (rand() % bigram_frequencies_.length());
    if (bigram_chooser % 2 != 0){                                               //chooses only even indices to ensure proper bigrams are choosen
      bigram_chooser -= 1;
    }
    string bigram = bigram_frequencies_.substr(bigram_chooser, 2);
    line += bigram;
  }
  if (test_length % 2 != 0){                                                    //removes last element of string if the length determined by the
    line.erase(length);                                                         //Gaussian Distribution is odd.
  }
  line += '\n';
  return line;
}
