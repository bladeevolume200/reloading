#include <iostream>
#include <algorithm>
#include "Header.h"
using namespace std;



int main() {
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    int** matrix = new int* [size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    initializeMatrix(matrix, size);
    printMatrix(matrix, size);
    findMinMax(matrix, size);
    sortRows(matrix, size);
    printMatrix(matrix, size);

 
    
    delete[] matrix;


}
