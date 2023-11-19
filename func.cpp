#include "header.h"

char determineSign(int* number) {
    if (*number > 0) {
        return '+';
    }
    else if (*number < 0) {
        return '-';
    }
    else {
        return '0';
    }
}

