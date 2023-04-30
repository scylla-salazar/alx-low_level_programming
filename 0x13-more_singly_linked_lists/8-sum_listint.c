#include "lists.h"

/**
 * sum_listint - The function calculate sum of all the data in a listint_t list
 * @head: refers to the first node in the linked list
 * Completed on 30th April 2023
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sums;

	sums = 0;
	while (head != NULL)
	{
		sums += head->n;
		head = head->next;
	}

	return (sums);
}
