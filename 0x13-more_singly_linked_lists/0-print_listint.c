#include "lists.h"

/**
 * print_listint - This prints all the number of elements in a linked lists
 * @h: refers linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}

	return (number);
}
