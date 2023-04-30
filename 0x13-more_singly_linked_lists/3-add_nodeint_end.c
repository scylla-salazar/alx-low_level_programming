#include "lists.h"

/**
 * add_nodeint_end - This adds a node at the end of a linked list
 * @head: refers to pointer to the first element in the list
 * @n: data to insert in the new element
 * Task completed on 30th April 2023
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
