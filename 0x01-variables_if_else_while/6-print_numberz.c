#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if executed successfully
*/
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
