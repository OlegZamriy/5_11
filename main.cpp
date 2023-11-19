#include <iostream>
#include "header.h"

int main() {
    const int size = 5; 
    int arr[size];

    std::cout << "Enter " << size << " whole numbers:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int sum = calculateSum(arr, size);

    std::cout << "The sum of array elements: " << sum << std::endl;

    return 0;
}
