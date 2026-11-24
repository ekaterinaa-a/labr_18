#include "matrix_processor.h"
#include "math_utils.h"

int sumSecondaryDiagonalDivisibleBy3(
    const std::vector<std::vector<int>>& matrix
) {
    int n = static_cast<int>(matrix.size());
    int sum = 0;

    // Для побочной диагонали сумма индексов равна n - 1.
    for (int i = 0; i < n; ++i) {
        int j = n - 1 - i;

        if (isDivisibleBy3(matrix[i][j])) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

void replaceBelowSecondaryDiagonal(
    std::vector<std::vector<int>>& matrix
) {
    int n = static_cast<int>(matrix.size());

    // Ниже побочной диагонали находятся элементы, для которых i + j > n - 1.
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j > n - 1) {
                matrix[i][j] = sumDigits(matrix[i][j]);
            }
        }
    }
}
