#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is being determined
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	for (length = 0; s[length]; length++)
		;

	return (length);
}
