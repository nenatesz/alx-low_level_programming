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
	char r;

	r = abs(n);
	_putchar(r);
	return (0);
}
