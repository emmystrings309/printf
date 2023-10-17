#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * check_str - writes the character c to stdout
 * @str: The character pointer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int check_str(va_list args, int ch_printed)
{
const char *str;
str = va_arg(args, const char *);
while (*str != '\0')
/* code */
_putchar(*str);
str++;
ch_printed++;
}
return (ch_printed);
}
