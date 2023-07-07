#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - The function convert a binary number to an unsigned int
 * @b: char string
 * Completed on 7th July 2023
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int lent;

	if (b == NULL)
		return (0);

	for (lent = 0; b[lent]; lent++)
	{
		if (b[lent] != '0' && b[lent] != '1')
			return (0);
	}

	for (power = 1, total = 0, lent--; lent >= 0; lent--, power *= 2)
	{
		if (b[lent] == '1')
			total += power;
	}

	return (total);
}

