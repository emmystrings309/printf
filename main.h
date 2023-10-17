#ifndef MAIN_H
#define MAIN_H
#define ABS(x) ((x) < (0) ? -(x) : (x))
#include <stdarg.h>

int _printf(const char *format, ...);
int power(int base, int exponent);
int _putchar(char c);
int check_int(va_list args, int ch_printed);
int check_str(va_list args, int ch_printed);
int check_char(va_list args, int ch_printed);
int format_specifier(int ch_printed, va_list args, char *format[i]);

#endif /* MAIN_H */
