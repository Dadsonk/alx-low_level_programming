# include <stdio.h>

/**
  * main - Program prints first 50 Fibonacci numbers from 1 and 2
  * Return: Always success (0)
  */

int main(void)
{
	int i;
	long a = 0, b = 1, result;

	for (i = 1; i <= 50; i++)
	{
		result = a + b;
		a = b;
		b = result;
		printf("%lu", result);
		if (i < 50)
		{
			printf(", ");
		}
	}

	printf("\n");

	return (0);
}
