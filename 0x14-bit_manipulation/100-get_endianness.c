#include "main.h"

/**
 * get_endianness - This function checks the endianness
 * Return: 0 if big endian; 1 if little endian
 * Completed on 7th July 2023.
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}

