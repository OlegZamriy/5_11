#include <iostream>
#include "header.h"

int main() {
    const int size = 5; 
    int sourceArray[size];
    int destinationArray[size];

    std::cout << "Enter " << size << " of integers for the initial array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> sourceArray[i];
    }

    copyArray(sourceArray, destinationArray, size);

    std::cout << "Copied array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": " << destinationArray[i] << "\n";
    }

    return 0;
}
