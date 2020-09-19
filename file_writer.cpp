/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

file_writer.cpp is the implementation of the file_writer.h header file.
*/

#ifndef FILE_WRITER_H
#define FILE_WRITER_H

#include "file_writer.h"

FileWriter::FileWriter(){
  sum_ = 0.0;
  mean_ = 0.0;
  variance_ = 0.0;
  standard_deviation_ = 0.0;
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
  dna_sequence_ = "";
}

FileWriter::FileWriter(double sum, double mean, double var, double sd, double a, double t, double g, double c,
double aa, double at, double ag, double ac, double ta, double tt, double tg, double tc, double ga, double gt,
double gg, double gc, double ca, double ct, double cg, double cc, string dna){
  sum_ = sum;
  mean_ = mean;
  variance_ = var;
  standard_deviation_ = sd;
  a_probability_ = a;
  t_probability_ = t;
  g_probability_ = g;
  c_probability_ = c;
  aa_probability_ = aa;
  at_probability_ = at;
  ag_probability_ = ag;
  ac_probability_ = ac;
  ta_probability_ = ta;
  tt_probability_ = tt;
  tg_probability_ = tg;
  tc_probability_ = tc;
  ga_probability_ = ga;
  gt_probability_ = gt;
  gg_probability_ = gg;
  gc_probability_ = gc;
  ca_probability_ = ca;
  ct_probability_ = ct;
  cg_probability_ = cg;
  cc_probability_ = cc;
  dna_sequence_ = dna;
}

FileWriter::~FileWriter(){}

void FileWriter::WriteHeader(){
    ofstream my_file;
    my_file.open ("ewing.out", ios::in | ios::out | ios::app);

    if (my_file.is_open()){
      my_file << "Natalie Ewing" << endl;
      my_file << "2313895" << endl;
      my_file << "ewing@chapman.edu" << endl;
      my_file << "CPSC 350-01" << endl;
      my_file << "Assignment 1\n" << endl;
      my_file.close();
    } else {
      cout << "Unable to open file." << endl;
    }
}

void FileWriter::WriteData(){
  ofstream my_file;
  my_file.open ("ewing.out", ios::in | ios::out | ios::app);

  if (my_file.is_open()){
    my_file << "The Sum of the length of the DNA strings is: " << sum_ << endl;
    my_file << "The Mean of the length of the DNA strings is " << mean_ << endl;
    my_file << "The Variance of the length of the DNA strings is: " << variance_ << endl;
    my_file << "The Standard Deviation of the length of the DNA strings is: " << standard_deviation_ << endl;
    my_file << "Here is the relative probability of each nucleotide: \n" << endl;

    my_file << "A:               " << a_probability_ << endl;
    my_file << "T:               " << t_probability_ << endl;
    my_file << "G:               " << g_probability_ << endl;
    my_file << "C:               " << c_probability_ << endl;
    my_file << endl;
    my_file << "Here is the relative probability of each nucleotide bigram: \n" << endl;
    my_file << "AA:              " << aa_probability_ << endl;
    my_file << "AT:              " << at_probability_ << endl;
    my_file << "AG:              " << ag_probability_ << endl;
    my_file << "AC:              " << ac_probability_ << endl;
    my_file << "TA:              " << ta_probability_ << endl;
    my_file << "TT:              " << tt_probability_ << endl;
    my_file << "TG:              " << tg_probability_ << endl;
    my_file << "TC:              " << tc_probability_ << endl;
    my_file << "GA:              " << ga_probability_ << endl;
    my_file << "GT:              " << gt_probability_ << endl;
    my_file << "GG:              " << gg_probability_ << endl;
    my_file << "GC:              " << gc_probability_ << endl;
    my_file << "CA:              " << ca_probability_ << endl;
    my_file << "CT:              " << ct_probability_ << endl;
    my_file << "CG:              " << cg_probability_ << endl;
    my_file << "CC:              " << cc_probability_ << endl;
    my_file << endl;
    my_file.close();
  } else {
    cout << "Unable to open file.";
  }
}

void FileWriter::WriteDna(){
  ofstream my_file;
  my_file.open ("ewing.out", ios::in | ios::out | ios::app);
  if (my_file.is_open()){
    my_file << "Here is a sequence of DNA matching the statistics above: \n" << endl;
    my_file << dna_sequence_ << endl;
    my_file.close();
  } else {
    cout << "Unable to open file.";
  }
}

#endif
