#include <stdio.h>
#include "main.h"
#include <stdarg.h>


// Function to calculate power
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
