/*
Natalie Ewing
2313895
ewing@chapman.edu
CPSC 350-01
Assignment 1

file_reader.h is the header file for the FileReader class.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


/*The FileReader class reads a user-provided file, and assigns the file's
contents to a variable. The class also stores pertinent data about the lines
contained in the file.*/
class FileReader{

public:
  /*Default constructor name: FileReader
  Constructs empty strings and sets integer values to 0.*/
  FileReader();
  /*Overloaded constructor name: FileReader
  Parameters:
  - string file_name: name of the file the user wishes to process*/
  FileReader(string file_name);
  //Destructor name: ~FileReader
  ~FileReader();

  /*Accessor name: get_dna_strings
  Returns a string containing the DNA sequences provided from user file.*/
  string get_dna_strings();
  /*Accessor name: get_number_of_lines
  Returns an int representing the number of lines in user file.*/
  int get_number_of_lines();
  /*Accessor name: get_line_length_sum
  Returns an int representing the sum of the length of the lines in user file.*/
  int get_line_length_sum();

  /*Method name: ReadFile
  Opens and reads user file. Stores user provided DNA sequence, and records total
  number of lines and sum of the line lengths.*/
  void ReadFile();

private:
  /*Method name: ToUpper
  Parameters:
  - string str: a DNA sequence that will be converted to uppercase.
  Returns a string representing a DNA sequence that is completely uppercase.*/
  string ToUpper(string str);

  /*Member variable name: file_name_
  A string representing the name of the file the user wishes to process.*/
  string file_name_;
  /*Member variable name: dna_strings_
  A string representing the DNA sequences provided in user file.*/
  string dna_strings_;
  /*Member variable name: number_of_lines_
  An int reprsenting the number of lines in user file.*/
  int number_of_lines_;
  /*Member variable name: line_length_sum_
  An int representing the sum of the length of the lines in user file.*/
  int line_length_sum_;

};
