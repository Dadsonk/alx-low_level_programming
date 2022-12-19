#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line using only putchar
 * Return: Always success (0)
 */

int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar((number % 10) + '0');
		number++;
	}

	putchar('\n');

	return (0);
}
