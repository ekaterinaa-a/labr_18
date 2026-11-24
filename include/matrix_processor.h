#ifndef MATRIX_PROCESSOR_H
#define MATRIX_PROCESSOR_H

#include <vector>

// Находит сумму элементов побочной диагонали, которые делятся на 3.
int sumSecondaryDiagonalDivisibleBy3(
    const std::vector<std::vector<int>>& matrix
);

// Заменяет элементы ниже побочной диагонали суммой их цифр.
void replaceBelowSecondaryDiagonal(
    std::vector<std::vector<int>>& matrix
);

#endif
