#include "main.h"

/**
 * set_bit - The function sets the value of a bit to 1.
 * at a given index.
 * @n: Refers to pointer of an unsigned long int.
 * @index: Refers to index of the bit.
 * Completed on 4th May 2023
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
