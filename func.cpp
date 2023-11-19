#include "header.h"

void copyAndReverseArray(int* source, int* destination, int size) {
    int* sourceEnd = source + size - 1;  

    for (int i = 0; i < size; ++i) {
        *(destination + i) = *sourceEnd; 
        sourceEnd--;                      
    }
}

