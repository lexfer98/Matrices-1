#ifndef FUNCTIONS_H
#define FUNCTIONS_H




void  print_matrix (const std::string & FILE_NAME, const int ROWS, const int COLS);

std::vector<std::vector<double>>  read_matrix(const std::string & FILE_NAME);

std::vector<std::vector<double>> multiplymatrices(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2);

std::vector<std::vector<double>> additionmatrices(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2);

std::vector<std::vector<double>> subtractionmatrices(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2);

std::vector<std::vector<double>> transposematrix(std::vector<std::vector<double>> m1);


#endif
