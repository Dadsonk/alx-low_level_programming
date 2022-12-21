#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination where the string is concatenated
 * @src: source string to append
 * @n: number of bytes from src appended to dest
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
	{
		dest_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
