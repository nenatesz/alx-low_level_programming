#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - entry point
 * @c: parameter
 *
 * Return: 0 if successful
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
