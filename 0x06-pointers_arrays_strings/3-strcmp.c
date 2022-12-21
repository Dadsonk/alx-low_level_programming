#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: maximum number of bytes to be copied from src to dest
 * Return: 0 (if str1 == str2); the difference of the unmatched characters
 * (if str1 > str2 or str2 < str1)
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	
	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
	}

	return (s1[i] - s2[i]);
}
