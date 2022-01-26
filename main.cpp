#include <iostream>  // input-output stream
#include <fstream>   // file stream
#include <sstream>   // string stream 
#include <iomanip>   // stream manipulators
#include <vector>
#include <string>
#include <string.h>

#include "functions.h"
#include "structures.h"
#include "functions.cpp"


using namespace std;

int main (int argc, char * argv[])
{   
    if (argc == 7 || argc == 5){
 
        if (strcmp(argv[1], "-i") == 0){
        //This program should read 7 parameters (0 -> name of the program, 1 -> -i, 2 -> first txt, 3 -> second txt, 4 -> option (-m, -a, -s),5 -> -o, 6 -> file of exit)
    
            if (argc == 7){
        
                //We save the first txt and convert it into a matrix.    
                string file1 = argv[2];
                std::vector<std::vector<double>> m1 = read_matrix(file1);


                //We save the second txt and convert it into a matrix.
                string file2 = argv[3];
                std::vector<std::vector<double>> m2 = read_matrix(file2);


                if (strcmp (argv[4], "-m") == 0){
                    std::vector<std::vector<double>> multiplymatrix = multiplymatrices (m1,m2);
                    print_matrix(argv[6], multiplymatrix);
                        for (int fil= 0; fil < multiplymatrix.size(); fil++){
                            for (int col = 0; col < multiplymatrix[0].size(); col++){
                                cout << multiplymatrix[fil][col] << " ";
                            }
                            cout << "" << endl;
                        }                     
                    }

                else if (strcmp (argv[4],"-a") == 0){
                        std::vector<std::vector<double>> addmatrix = additionmatrices (m1,m2);
                        print_matrix(argv[6], addmatrix);
                        for (int fil= 0; fil < addmatrix.size(); fil++){
                            for (int col = 0; col < addmatrix[0].size(); col++){
                                cout << addmatrix[fil][col] << " ";
                            }
                            cout << "" << endl;
                        }
                    }   

                else if (strcmp (argv[4],"-s") == 0){
                    std::vector<std::vector<double>> submatrix = subtractionmatrices (m1,m2);
                    print_matrix(argv[6], submatrix);
                    for (int fil= 0; fil < submatrix.size(); fil++){
                        for (int col = 0; col < submatrix[0].size(); col++){
                            cout << submatrix[fil][col] << " ";
                        }
                        cout << "" << endl;
                    }
                }
        

            }           
            else if (argc == 5){
                //We save the txt and convert it into a matrix.    
                string file1 = argv[2];
                std::vector<std::vector<double>> matrix = read_matrix(file1);

                std::vector<std::vector<double>> resultmatrix = transposematrix(matrix);
                print_matrix(argv[4], resultmatrix);
                for (int fil= 0; fil < resultmatrix.size(); fil++){
                    for (int col = 0; col < resultmatrix[0].size(); col++){
                        cout << resultmatrix[fil][col] << " ";
                        }
                        cout << "" << endl;
                }
            }
        }
        
        else if (strcmp(argv[1], "-o") == 0){
        //This program should read 7 parameters (0 -> name of the program, 1 -> -o, 2 -> file output, 3 -> -i, 4, first matrix, 5 -> second matrix, 6 -> option (-m, -a, -s))
    
            if (argc == 7){
                
                //We save the first txt and convert it into a matrix.    
                string file1 = argv[4];
                std::vector<std::vector<double>> m1 = read_matrix(file1);


                //We save the second txt and convert it into a matrix.
                string file2 = argv[5];
                std::vector<std::vector<double>> m2 = read_matrix(file2);
                
vscode://vscode.github-authentication/did-authenticate?windowid=1&code=a08581e462d7c165f88d&state=e8978991-f3f7-407b-9d70-83b240c7d9db

                if (strcmp (argv[6], "-m") == 0){
                    std::vector<std::vector<double>> multiplymatrix = multiplymatrices (m1,m2);
                    print_matrix(argv[2], multiplymatrix);
                        for (int fil= 0; fil < multiplymatrix.size(); fil++){
                            for (int col = 0; col < multiplymatrix[0].size(); col++){
                                cout << multiplymatrix[fil][col] << " ";
                            }
                            cout << "" << endl;
                        }                     
                    }

                else if (strcmp (argv[6],"-a") == 0){
                        std::vector<std::vector<double>> addmatrix = additionmatrices (m1,m2);
                        print_matrix(argv[2], addmatrix);
                        for (int fil= 0; fil < addmatrix.size(); fil++){
                            for (int col = 0; col < addmatrix[0].size(); col++){
                                cout << addmatrix[fil][col] << " ";
                            }
                            cout << "" << endl;
                        }
                    }   

                else if (strcmp (argv[6],"-s") == 0){
                    std::vector<std::vector<double>> submatrix = subtractionmatrices (m1,m2);
                    print_matrix(argv[2], submatrix);
                    for (int fil= 0; fil < submatrix.size(); fil++){
                        for (int col = 0; col < submatrix[0].size(); col++){
                            cout << submatrix[fil][col] << " ";
                        }
                        cout << "" << endl;
                    }
                }
        

            }           
            else if (argc == 5){
                //We save the txt and convert it into a matrix.    
                string file1 = argv[4];
                std::vector<std::vector<double>> matrix = read_matrix(file1);

                std::vector<std::vector<double>> resultmatrix = transposematrix(matrix);
                print_matrix(argv[2], resultmatrix);
                for (int fil= 0; fil < resultmatrix.size(); fil++){
                    for (int col = 0; col < resultmatrix[0].size(); col++){
                        cout << resultmatrix[fil][col] << " ";
                        }
                        cout << "" << endl;
                }
            }      
    
        }      
    }
    else if (argc == 1){
        cout << "Type -h if you need help" << endl;
    }
    else if (argc == 2 and strcmp (argv[1],"-h") == 0){
        cout << "" << endl;
        cout << "" << endl;
        cout << "Welcome to the matrices calculator guide." << endl;
        cout << "Here you have a short manual explaining how to use it." << endl;
        cout << "" << endl;
        cout << "If you put 7 parameters: " << endl;
        cout << "   ./main, -i, file_1, file_2, operation (-a, -s, -m), -o, file_output. " << endl;
        cout << "   ./main, -o, file_output, -i, file_1, file_2, operation (-a, -s, -m). " << endl;
        cout << "   " << endl;
        cout << "Here you have the operations that con you can realise: " << endl;
        cout << "" << endl;
        cout << "       -a : if you want to add 2 matrices" << endl;
        cout << "       -s : if you want to subtract 2 matrices" << endl;
        cout << "       -m : if you want to multiply 2 matrices" << endl;
        
        cout << "" << endl;
        cout << "If you want to calculate the transpose of a matrix, just 5 parameters: " << endl;
        cout << "   ./main, -i, file, -o, file_output. " << endl;
        cout << "   ./main, -o, file_output, -i, file. " << endl;
        cout << "" << endl;
        cout << "" << endl;
        
    }
    else (cout << "Wrong number of parameters.") << endl;
}
