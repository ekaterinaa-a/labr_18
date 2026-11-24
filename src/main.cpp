#include <iostream>
#include <vector>
#include "matrix_io.h"
#include "matrix_processor.h"

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    std::cout << "enter size: n (1 <= n <= 10): ";
    if (!(std::cin >> n) || n < 1 || n > 10) {
        std::cout << "Error: matrix size must be an integer from 1 to 10.\n";
        return 1;
    }

    int choice;
    std::cout << "\n1 - Enter matrix manually\n";
    std::cout << "2 - Use test matrix\n";
    std::cout << "Your choice: ";

    if (!(std::cin >> choice) || (choice != 1 && choice != 2)) {
        std::cout << "Error: choose option 1 or 2.\n";
        return 1;
    }

    std::vector<std::vector<int>> matrix;

    if (choice == 1) {
        if (!inputMatrix(matrix, n)) {
            return 1;
        }
    } else {
        if (n != 3) {
            std::cout << "The demo matrix has size 3 x 3. "
                         "Please enter n = 3 for it.\n";
            return 1;
        }
        createDemoMatrix(matrix);
    }

    std::cout << "\nOriginal matrix:\n";
    printMatrix(matrix);

    int sum = sumSecondaryDiagonalDivisibleBy3(matrix);
    replaceBelowSecondaryDiagonal(matrix);

    std::cout << "\nSum of suitable elements of the secondary diagonal: "
              << sum << '\n';

    std::cout << "\nMatrix after replacing elements below the secondary diagonal:\n";
    printMatrix(matrix);

    return 0;
}
