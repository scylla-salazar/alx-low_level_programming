#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
		a = n;
	}
	if ((a / 10) > 0)
		print_number(a / 10);

	_putchar((n1 % 10) + '0');
}
