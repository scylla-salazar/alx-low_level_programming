#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: ponter to resulting string 'dest'
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[j + a] = src[a];
	}
	dest[j + a] = '\0';

	return (dest);
}
