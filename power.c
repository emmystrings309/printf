#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * power - function to calculate power
 * @base:This is the base of the digit
 * @exponent: This is the exponent of the digit
 *
 * Return: This returns the relult
 */

int power(int base, int exponent)
{
	int i, result;

	result = 1;
	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
