#include <stdio.h>
#include "main.h"

/**
 * _strcpy - This function copies a string pointed to scr and dest
 * @dest: pointer parameter
 * @src: pointer parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int sal = 0;

	while (*(src + sal) != '\0')
	{
		*(dest + sal) = *(src + sal);
		sal++;
	}
	*(dest + sal) = '\0';

	return (dest);
}
