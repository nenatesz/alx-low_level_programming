#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 if successful
*/
int main(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 8; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n != 9 || m != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
