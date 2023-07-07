#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: refers to number one.
 * @m: refers to number two.
 * Completed on 7th July 2023
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}

