#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * check_char - print char value
 * @args: The argument passed to the printf funct
 * @ch_printed: The storage var fir tge printf return value
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int check_char(va_list args, int ch_printed)
{
	char cha;

	cha = va_arg(args, int);
	_putchar((char)cha);
	ch_printed++;
	return (ch_printed);
}
