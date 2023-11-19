#include "header.h"

void reverseArray(int* arr, int size) {
    int* start = arr;           
    int* end = arr + size - 1;   

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

