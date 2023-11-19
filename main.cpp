#include <iostream>
#include "header.h"

int main() {
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    int maxNum = findMax(&num1, &num2);

    std::cout << "The largest number: " << maxNum << std::endl;

    return 0;
}
