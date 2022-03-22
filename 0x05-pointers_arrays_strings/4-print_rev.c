#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 *  @str: pointer to the string to print
*/
void _puts(char *str)
{
	int i;

	i = strlen(str) - 1;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
