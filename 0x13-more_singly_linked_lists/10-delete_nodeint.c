#include "lists.h"

/**
 * delete_nodeint_at_index - This deletes a node in a linked list,
 * at a certain index
 * @head: Refers to pointer to the first element in the list
 * @index: Refers to index of the node to delete
 * Completed on 30th April 2023
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && prev != NULL; a++)
		{
			prev = prev->next;
		}

	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
