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
}
else
{
/* Handle format specifier */
i++; /* Move to the next character after '%' */
if (format[i] == 'd' || format[i] == 'i')
{
ch_printed = check_int(args, ch_printed);
}
if (format[i] == 's' /* condition */)
{
/*code*/
ch_printed = check_str(args, ch_printed);
}
if (format[i] == 'c' /* condition */)
{
/* code */
ch_printed = check_char(args, ch_printed);
}
}
}
va_end(args);
return (ch_printed);
}
