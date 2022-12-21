#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination where the string to be copied is
 * @src: source string to copy
 * @n: maximum number of bytes to be copied from src to dest
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
