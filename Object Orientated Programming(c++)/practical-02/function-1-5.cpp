#include <iostream>
//function to...
void print_summed_matrices(int array1[3][3],int array2[3][3]){ 
    for (int i = 0; i < 3; i++) {
    	for (int j = 0; j < 3; j++){
            array1[i][j] += array2[i][j]; 
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            std::cout << array1[i][j] << " ";
        }
    std::cout << std::endl;
    }
}
   