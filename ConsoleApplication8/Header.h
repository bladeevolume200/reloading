#pragma once
using namespace std;
template <typename T>
void initializeMatrix(T** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

template <typename T>
void printMatrix(T** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

template <typename T>
void findMinMax(T** matrix, int size) {
    T min = matrix[0][0];
    T max = matrix[0][0];

    for (int i = 1; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }

    cout << "Min element on main diagonal: " << min << endl;
    cout << "Max element on main diagonal: " << max << endl;
}

template <typename T>
void sortRows(T** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            for (int k = 0; k < size - j - 1; k++) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    T tmp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = tmp;
                }
            }
        }
    }
}
