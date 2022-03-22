#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @str: string to be reversed
*/
void rev_string(char *str)
{
	int len;
	int i;

	len = strlen(str) - 1;
	for (i = 0; i <= len / 2 && str[i] != '\0'; i++)
	{
		str[i], str[len - i] = str[len - i], str[i];
	}
}
