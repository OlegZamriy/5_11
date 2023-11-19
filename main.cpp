#include <iostream>
#include "header.h"

int main() {
    const int size = 5; 
    int myArray[size];

    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> myArray[i];
    }

    reverseArray(myArray, size);

    std::cout << "Reversed array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": " << myArray[i] << "\n";
    }

    return 0;
}
