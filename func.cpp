#include "header.h"

void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; ++i) {
        *(destination + i) = *(source + i); 
    }
}

