#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Return: 0 if successful
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - entry point
*/
void print_alphabet_x10(void)
{
	char i, j;

	i = 0;
	while (i <= 10)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
	}
	i++;
}
