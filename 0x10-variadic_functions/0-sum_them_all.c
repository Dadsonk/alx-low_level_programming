#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its paramters
 * @n: number of paramters passed to the function
 * @...: variable number of paramters to calculate the sum of
 * Return: 0 (if n == 0);
 * the sum of all parameters (otherwise)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index = 0, sum = 0;

	va_start(nums, n);

	while (index < n)
	{
		sum += va_arg(nums, int);
		index++;
	}

	va_end(nums);

	return (sum);
}
