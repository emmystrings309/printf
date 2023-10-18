#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * format_specifier - checks for the rem specifier
 * @ch_printed: Take track of the value printed
 * @args: This is the argument passed to _printf
 * @format: This is the first argument
 * @i: To know where the increment is
 *
 * Return: it returns the ch_printed
 */

int format_specifier(int ch_printed, va_list args, const char *format, int i)
{
	if (format[i] == 'c')
	{
		ch_printed = check_char(args, ch_printed);
	}
	return (ch_printed);
}
