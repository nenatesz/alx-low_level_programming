#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - main entry
*/
void jack_bauer(void)
{
	char i, j, k, l;

	i = 0;
	while (i <= 2)
	{
		_putchar(i);
		j = 0;
		while (j <= 3)
		{
			_putchar(j);
			_putchar(':');
			k = 0;
			while (k <= 5)
			{
				_putchar(k);
				l = 0;
				while (l <= 9)
				{
					_putchar(l);
					_putchar('\n');
					l++
				}
				k++
			}
			j++
		}
		i++
	}

}
