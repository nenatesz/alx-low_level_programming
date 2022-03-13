#include <stdio.h>
/**
 * main - entry point
 * ReturnL 0 if successful
*/
int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
	{
		if (num != 9)
		{
			putchar(num);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
