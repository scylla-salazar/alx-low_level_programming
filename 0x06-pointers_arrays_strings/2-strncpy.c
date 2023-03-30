#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy a string starting from index 0 of 'dest'
 * @dest: destination to copy string
 * @src: source to copy string
 * @n: number of chars to copy over
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
