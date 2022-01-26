#ifndef FUNCTIONS_H
#define FUNCTIONS_H



/** @return random value from the normal distribution N(170,15). */
double random_value(); 

/** The function prints a matrix of random numbers in a file
  @param FILE_NAME  file name :-)
  @param ROWS       number of rows
  @param COLS       number of columns
 */
void  print_matrix (const std::string & FILE_NAME, const int ROWS, const int COLS);

/** The function reads a matrix of numbers from a text file.
  @param FILE_NAME file name 
  @return a matrix of doubles*/



std::vector<std::vector<double>>  read_matrix(const std::string & FILE_NAME);

#endif
