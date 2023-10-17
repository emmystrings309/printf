#include <stdio.h>
#include "main.h"
#include "stdarg.h"

int check_int(va_list args, int ch_printed)
{
int temp, digit, num_digits, j, num;
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
return ch_printed;
}
