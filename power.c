#include <stdio.h>
#include "main.h"
#include <stdarg.h>


/* Function to calculate power */
int power(int base, int exponent) {
    int i, result;
    result = 1;
    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
