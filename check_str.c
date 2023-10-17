#include <stdio.h>
#include "main.h"
#include <stdarg.h>

int check_str(va_list args, int ch_printed)
{
const char *str = va_arg(args, const char *);
    while (*str != '\0')
    {
        /* code */
        _putchar(*str);
        str++;
        ch_printed++;
    }
    return ch_printed;
}