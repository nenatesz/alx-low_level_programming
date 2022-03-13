#include <stdio.h>
/**
 * main - entry point
 * ReturnL 0 if successful
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
