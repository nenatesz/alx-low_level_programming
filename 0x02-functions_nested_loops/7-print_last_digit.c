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
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
