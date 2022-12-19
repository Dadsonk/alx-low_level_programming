#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: 1st integer to be swapped
 * @b: 2nd integer to be swapped
 * Return: Always success (0)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
