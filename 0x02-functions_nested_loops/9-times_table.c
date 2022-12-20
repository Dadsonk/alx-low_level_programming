#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int n = 9;
	int i, j, prod;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;

			if (prod < 10)
			{
				_putchar(' ');
			}
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
