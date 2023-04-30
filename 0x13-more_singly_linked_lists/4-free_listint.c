#include "lists.h"

/**
 * free_listint - This frees a linked list
 * @head: refers to listint_t list to be freed
 * Completed on 30th April 2023
 * Return: This return nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
