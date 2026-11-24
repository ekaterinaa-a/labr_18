#include "matrix_io.h"
#include <iostream>

bool inputMatrix(std::vector<std::vector<int>>& matrix, int n) {
    matrix.assign(n, std::vector<int>(n));

    std::cout << "enter matrix elements (" << n * n << " integers):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!(std::cin >> matrix[i][j])) {
                std::cout << "error: you must enter integers.\n";
                return false;
            }
        }
    }
    return true;
}

void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << "\t";
        }
        std::cout << '\n';
    }
}

void createDemoMatrix(std::vector<std::vector<int>>& matrix) {
    matrix = {
        { 1,  2,  3},
        { 4,  6,  9},
        {12, 15, 18}
    };
}
