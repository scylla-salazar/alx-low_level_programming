#include "lists.h"

/**
 * get_nodeint_at_index - The functions returns the nth node of a linked list
 * @head: refers to head of a list.
 * @index: refers to index of the node.
 * Completed on 30th April 2023
 * Return: nth node. If node does not exist, returns NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}

