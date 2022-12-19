#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * print all the letters except q and e
 * Return: Always success (0)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
