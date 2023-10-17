#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - recieves argument to print out
 * @format: this is the string passed to it
 *
 * Return: 0 on failure and value on success
 */

int _printf(const char *format, ...)
{
	int ch_printed, i;
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
		if (format[i] == 's')
		{
			ch_printed = check_str(args, ch_printed);
		}
		if (format[i] != 's' && format[i] != 'd')
		{
			ch_printed = format_specifier(ch_printed, args, &format[i], i);
		}
	}
}
va_end(args);
return (ch_printed);
}
