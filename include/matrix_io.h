#ifndef MATRIX_IO_H
#define MATRIX_IO_H

#include <vector>

// Вводит квадратную матрицу размера n x n с клавиатуры.
// Возвращает true, если все элементы успешно введены.
bool inputMatrix(std::vector<std::vector<int>>& matrix, int n);

// Выводит матрицу на экран в табличном виде.
void printMatrix(const std::vector<std::vector<int>>& matrix);

// Создаёт демонстрационную матрицу для проверки программы.
void createDemoMatrix(std::vector<std::vector<int>>& matrix);

#endif
