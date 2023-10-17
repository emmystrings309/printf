#include <stdio.h>
#include "main.h"
#include <stdarg.h>

int format_specifier(int ch_printed, va_list args, const char *format, int i)
{
    switch (format[i]) {
        case 'b': // Custom 'b' specifier for binary
            {
                unsigned int num = va_arg(args, unsigned int);
                int binary[32]; // Assuming 32-bit integers
                int i = 0;

                // Calculate binary representation
                do {
                    binary[i] = num % 2;
                    num /= 2;
                    i++;
                } while (num > 0);

                // Print binary digits in reverse order
                for (i--; i >= 0; i--) {
                    _putchar(binary[i] + '0');
                    ch_printed++;
                }
            }
            break;
        default:
            // Handle unsupported or unknown specifiers
            _putchar('%'); // Print '%' character
            _putchar(format[i]); // Print the unknown specifier
            ch_printed += 2; // Increment the count by 2
            break;
    }

    return ch_printed;
}