#include <stdio.h>
#include "main.h"
#include <stdarg.h>

int check_char(va_list args, int ch_printed)
{
    char cha = va_arg(args, int);
    _putchar((char)cha);
    ch_printed++;
    return ch_printed;
}