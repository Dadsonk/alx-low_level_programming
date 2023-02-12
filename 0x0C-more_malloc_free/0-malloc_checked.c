#include "main.h"

/**
 * *malloc_checked - allocates memory using the standard
 * library function malloc and does normal process termination
 * if malloc fails
 * @b: number of contiguous meory spaces to allocate
 * Return: A pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m;
	/* int *m = malloc(b); */

	m = malloc(b);

	/* could use the ASCII valueof NULL to evaluate the if condition */
	if (m == NULL)
		exit(98);

	return (m);
}
