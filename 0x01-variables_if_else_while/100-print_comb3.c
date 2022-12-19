#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * numbers must be separated by ,, followed by a space; in ascending order
 * Return: Always success (0)
 */

int main(void)
{
	int num1 = 0, num2 = 1;

	while (num1 < 9)
	{
		putchar((num1 % 10) + '0');
		putchar((num2 % 10) + '0');

		if (num1 == 8 && num2 == 9)
			break;

		putchar(',');
		putchar(' ');

		if (num2 == 9)
		{
			num1++;
			num2 = num1 + 1;
		}
		else
		{
			num2++;
		}
	}

	putchar('\n');

	return (0);
}
