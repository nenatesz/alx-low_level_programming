#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - main entry
*/
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i <= 2)
	{
		_putchar(i + '0');
		j = 0;
		while (j <= 3)
		{
			_putchar(j + '0');
			_putchar(':');
			k = 0;
			while (k <= 5)
			{
				_putchar(k + '0');
				l = 0;
				while (l <= 9)
				{
					_putchar(l + '0');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
