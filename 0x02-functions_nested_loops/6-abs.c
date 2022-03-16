#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - entry point
 * @n: parameter
 *
 * Return: 0 if successful
*/
int _abs(int n)
{
	int r;

	r = abs(n);
	_putchar((r) + '0');
	return (0);
}
