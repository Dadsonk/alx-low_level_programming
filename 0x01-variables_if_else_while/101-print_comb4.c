#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * numbers must be separated by ,, followed by a space;
 * only the smallest combination of three digits in ascending order
 * Return: Always success (0)
 */

int main(void)
{
	int num1, num2, num3;

	num1 = 0;
	while (num1 < 8)
	{
		num2 = num1 + 1;
		while (num2 < 9)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				putchar((num3 % 10) + '0');

				if (num1 == 7 && num2 == 8 && num3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}

	putchar('\n');

	return (0);
}
