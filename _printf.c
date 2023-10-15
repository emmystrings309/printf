#include <stdio.h>
#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int ch_printed = 0;

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            _putchar(format[i]);
            ch_printed++;
        } else {
            // Handle format specifier
            i++; // Move to the next character after '%'

            if (format[i] == 'd') {
                // Retrieve integer argument
                int num = va_arg(args, int);

                // Print each digit individually
                int temp = num;
                int num_digits = 0;

                // Count the number of digits in the number
                while (temp != 0) {
                    temp /= 10;
                    num_digits++;
                }

                // Extract each digit and print it
                for (int j = num_digits - 1; j >= 0; j--) {
                    int digit = (num / power(10, j)) % 10;
                    _putchar('0' + digit);  // Convert the digit to character and print
                    ch_printed++;
                }
            }
            // Add other format specifiers (e.g., %s, %c) as needed
        }
    }

    va_end(args);
    return ch_printed;
}

