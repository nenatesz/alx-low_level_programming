#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - entry point
 * @n: parameter
 *
*/
int _abs(int n)
{
	int r;

	r = abs(n);
	_putchar(r + '0');
}
