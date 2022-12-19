#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers,
 * numbers must be separated by ,, followed by a space; in ascending order
 * Return: Always success (0)
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');

		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
