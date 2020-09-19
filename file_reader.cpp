/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

file_reader.cpp is the implementation of the file_reader.h header file.
*/

#include "file_reader.h"

FileReader::FileReader(){
  file_name_ =  "";
  dna_strings_ = "";
  number_of_lines_ = 0;
  line_length_sum_ = 0;
}

FileReader::FileReader(string file_name){
  file_name_ = file_name;
  dna_strings_ = "";
  number_of_lines_ = 0;
  line_length_sum_ = 0;
}

FileReader::~FileReader(){}


string FileReader::get_dna_strings(){
  return dna_strings_;
}

int FileReader::get_number_of_lines(){
  return number_of_lines_;
}

int FileReader::get_line_length_sum(){
  return line_length_sum_;
}


void FileReader::ReadFile(){
  string line;
  ifstream dna_file;
  cout << endl;
  dna_file.open(file_name_);
  if (dna_file.is_open()){
    while (getline (dna_file, line)){
      line = ToUpper(line);
      dna_strings_ += line + '\n';
      number_of_lines_ += 1;
      line_length_sum_ += line.length() - 1;
    }
    dna_file.close();
  } else cout << "Unable to open file." << endl;;
}


string FileReader::ToUpper(string str){
  for (int i = 0; i < str.length(); ++i){
    if (str.at(i) == 'a'){
      str = str.replace(i, 1, "A");
    } else if (str.at(i) == 't'){
      str = str.replace(i, 1, "T");
    } else if (str.at(i) == 'g'){
      str = str.replace(i, 1, "G");
    } else if (str.at(i) == 'c'){
      str = str.replace(i, 1, "C");
    }
  }
  return str;
}
