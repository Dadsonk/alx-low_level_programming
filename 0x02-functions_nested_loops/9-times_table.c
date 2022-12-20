#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int n, prod, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (prod = 1; prod <= 9; prod++)
		{
			_putchar(',');
			_putchar(' ');

			result = n * prod;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
