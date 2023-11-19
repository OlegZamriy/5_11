#include <iostream>
#include "header.h"

int main() {
    int num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Initial values: " << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    swapValues(&num1, &num2);

    std::cout << "Value after exchange: " << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}
