#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 * Return: Always success (0)
 */

int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	printf("\n");

	return (0);
}
