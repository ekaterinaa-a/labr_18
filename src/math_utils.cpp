#include "math_utils.h"
#include <cstdlib>

int sumDigits(int number) {
    number = std::abs(number);

    // Базовый случай рекурсии: у числа осталась одна цифра.
    if (number < 10) {
        return number;
    }

    // Рекурсивный случай: последняя цифра + сумма остальных цифр.
    return number % 10 + sumDigits(number / 10);
}

bool isDivisibleBy3(int number) {
    return number % 3 == 0;
}
