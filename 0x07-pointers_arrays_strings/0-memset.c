#include "main.h"

/**
 * 
 * @s: address to memory area.
 * @b: char to be used.
 * @n: number of bytes to the memory block.
 * Return: the pointer to dest.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
