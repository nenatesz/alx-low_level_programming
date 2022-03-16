#include <stdio.h>
#include "main.h"
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
		_putchar((n % 10) + '0');
		return ((n % 10));
	}
	else if ((n / 100) >= 1)
	{
		return ((n % 100));
	}
}
