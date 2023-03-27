#include <stdio.h>
#include "main.h"

/**
 * print_array - this function prints n elements of an array of integers.
 * @a: pointer parameter
 * @n: integer variable
 */

void print_array(int *a, int n)
{
	int sal;

	for (sal = 0; sal < n; sal++)
	{
		if (sal != n - 1)
			printf("%d, ", a[sal]);
		else
			printf("%d", a[sal]);
	}
	putchar('\n');
}
