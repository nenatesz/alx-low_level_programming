#include <stdio.h>
#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * print_last_digit - entry point
 * @n: parameter
 *
 * Return: last digit
*/
int print_last_digit(int n)
{
	if ((n / 100) < 1)
	{
		_putchar(abs(n % 10) + '0');
		return (abs(n % 10));
	}
	else if ((n / 100) >= 1)
	{
		return (abs(n % 100));
	}
	return (0);
}
