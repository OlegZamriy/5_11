
#include <iostream>
#include "header.h"

int main() {
    int inputNumber;

    std::cout << "Enter number: ";
    std::cin >> inputNumber;

    int* ptrNumber = &inputNumber;

    char sign = determineSign(ptrNumber);
    std::cout << "Number sign: " << sign << std::endl;

    return 0;
}
