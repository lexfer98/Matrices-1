#include <chrono>
#include <random>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "functions.h"





std::vector<std::vector<double>> read_matrix(const std::string& FILE_NAME)
{
	std::vector<std::vector<double>> matrix; 

	std::ifstream file (FILE_NAME);  // input file stream + open
	if (file)
	{
		std::string line; // string!!!
		while (getline(file, line))
		{
			//             std::cout << "[" << line << "]" << std::endl;

			std::stringstream ss;
			ss << line;

			std::vector<double> row; // the blue vector
			double number;
			while(ss >> number)
			{
				//                 std::cout << "[" << number << "]";
				row.push_back(number);
			}

			//  std::cout << std::endl;
			matrix.push_back(row);
		}
	}

	return matrix;
}

void print_matrix(const std::string& FILE_NAME, std::vector<std::vector<double>> matrix)
{
	std::ofstream file (FILE_NAME); // output file stream + open 
	if (file) // Is the file open? Can we write into the file?
	{ 
		for (int fil = 0; fil < matrix.size(); fil++) // for each row 
		{
			for (int col = 0; col < matrix[0].size(); col++) // for each column in a row 
			{
				file << matrix[fil][col] << " ";
			}
			// the row has been printed
			file << std::endl;
		}
	}
}


std::vector<std::vector<double>> multiplymatrices(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2){
	std::vector<std::vector<double>> resultMat(m1.size(), std::vector<double> (m1.size(), 0));

	for (int fil = 0; fil < m1.size(); fil++){
		for (int col = 0; col < m1[0].size(); col++){
			resultMat[fil][col] = m1[fil][col] * m2[fil][col];
		}
	}
	return resultMat;
}



std::vector<std::vector<double>> additionmatrices(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2){
	std::vector<std::vector<double>> resultMat = m1;
	for (int fil = 0; fil < m1.size(); fil++){
		for (int col = 0; col < m1[0].size(); col++){
			resultMat[fil][col] = m1[fil][col] + m2[fil][col];
		}
	}
	return resultMat;
}

std::vector<std::vector<double>> subtractionmatrices(std::vector<std::vector<double>> m1, std::vector<std::vector<double>> m2){
	std::vector<std::vector<double>> resultMat = m1;
	for (int fil = 0; fil < m1.size(); fil++){
		for (int col = 0; col < m1[0].size(); col++){
			resultMat[fil][col] = m1[fil][col] - m2[fil][col];
		}
	}
	return resultMat;
}


std::vector<std::vector<double>> transposematrix(std::vector<std::vector<double>> m1){
	std::vector<std::vector<double>> resultMat = m1;
	for (int fil = 0; fil < m1.size(); fil++){
		for (int col = 0; col < m1[0].size(); col++){
			resultMat[fil][col] = m1[col][fil];
		}
	}
	return resultMat;
}

