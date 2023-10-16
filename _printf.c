#include <stdio.h>
#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
int ch_printed, num, num_digits, temp, digit, i, j;
va_list args;
va_start(args, format);
ch_printed = 0;
for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
ch_printed++;
i}
else
{
/* Handle format specifier */
i++; /* Move to the next character after '%' */

if (format[i] == 'd' || format[i] == 'i')
{
/* Retrieve integer argument */
num = va_arg(args, int);
if (num < 0 /* condition */)
{
/* code */
_putchar('-');
num = ABS(num);
}

/* Print each digit individually */
temp = num;
num_digits = 0;

/* Count the number of digits in the number */
while (temp != 0)
{
temp /= 10;
num_digits++;
}

/* Extract each digit and print it */
for (j = num_digits - 1; j >= 0; j--)
{
digit = (num / power(10, j)) % 10;
_putchar('0' + digit); /* Convert the digit to character and print */
ch_printed++;
}
}
if (format[i] == 's' /* condition */)
{
/*code*/
const char *str = va_arg(args, const char *);

while (*str != '\0')
{
/* code */
_putchar(*str);
str++;
ch_printed++;
}
}

if (format[i] == 'c' /* condition */)
{
/* code */
char cha = va_arg(args, int);
_putchar((char)cha);
ch_printed++;
}

/* Add other format specifiers (e.g., %s, %c) as needed*/
}
}

va_end(args);
return ch_printed ;
}
