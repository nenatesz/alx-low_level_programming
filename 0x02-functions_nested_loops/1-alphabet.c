#include <stdio.h>
#include "main.h"
/**
 * main - entry point and print_alhabet - print alphabets
 * Return: 0 if successful
*/
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - entry point and print_alhabet - print alphabets
 * Return: 0 if successful
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}
