#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Return: 0 if executed successfully
*/
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
