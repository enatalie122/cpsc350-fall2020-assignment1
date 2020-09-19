/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

main.cpp is the main method for processing DNA.
*/

#include "file_reader.h"
#include "calculator.h"
#include "generator.h"
#include "file_writer.h"

int main(int argc, char** argv){
  FileReader *reader = new FileReader(argv[1]);
  int count = 0;
  bool has_file = true;
  while(has_file == true){

    if (count > 0){
      cout << "Enter file name: " << endl;
      string user_input;
      cin >> user_input;
      FileReader *reader = new FileReader(user_input);
    }

    reader->ReadFile();

    Calculator *calc = new Calculator(reader->get_dna_strings(), reader->get_number_of_lines(),
    reader->get_line_length_sum());
    calc->Calculate();

    Generator *gen = new Generator(calc->get_aa_probability(), calc->get_at_probability(),
    calc->get_ag_probability(), calc->get_ac_probability(), calc->get_ta_probability(),
    calc->get_tt_probability(), calc->get_tg_probability(), calc->get_tc_probability(),
    calc->get_ga_probability(), calc->get_gt_probability(), calc->get_gg_probability(),
    calc->get_gc_probability(), calc->get_ca_probability(), calc->get_ct_probability(),
    calc->get_cg_probability(), calc->get_cc_probability(), calc->get_standard_deviation(),
    calc->get_mean());

    FileWriter *writer = new FileWriter(calc->get_sum(), calc->get_mean(), calc->get_variance(),
    calc->get_standard_deviation(), calc->get_a_probability(), calc->get_t_probability(),
    calc->get_g_probability(), calc->get_c_probability(), calc->get_aa_probability(),
    calc->get_at_probability(), calc->get_ag_probability(), calc->get_ac_probability(),
    calc->get_ta_probability(), calc->get_tt_probability(), calc->get_tg_probability(),
    calc->get_tc_probability(), calc->get_ga_probability(), calc->get_gt_probability(),
    calc->get_gg_probability(), calc->get_gc_probability(), calc->get_ca_probability(),
    calc->get_ct_probability(), calc->get_cg_probability(), calc->get_cc_probability(),
    gen->GenerateDna());

    if (count == 0){
      writer->WriteHeader();
    }
    writer->WriteData();
    writer->WriteDna();

    delete reader;
    delete calc;
    delete gen;
    delete writer;

    count += 1;

    cout << "Would you like to process another file (y/n): " << endl;
    char user_answer;
    cin >> user_answer;
    if (user_answer == 'n'){
      has_file = false;
    }
  }

  return 0;
}
