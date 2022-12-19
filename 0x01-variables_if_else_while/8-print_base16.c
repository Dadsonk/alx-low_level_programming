#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always success (0)
 */

int main(void)
{
	int number;
	char alphab;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}

	for (alphab = 'a'; alphab <= 'f'; alphab++)
	{
		putchar(alphab);
	}

	putchar('\n');

	return (0);
}
