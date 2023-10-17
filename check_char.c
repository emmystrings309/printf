#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * check_char - print char value
 * @cha: The character to print
 * @args: argument from printf func
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
