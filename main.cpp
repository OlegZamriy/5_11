#include <iostream>
#include "header.h"

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int* ptrNum1 = &num1;
    int* ptrNum2 = &num2;

    std::cout << "Sum: " << add(ptrNum1, ptrNum2) << std::endl;
    std::cout << "Difference: " << subtract(ptrNum1, ptrNum2) << std::endl;

    return 0;
}
