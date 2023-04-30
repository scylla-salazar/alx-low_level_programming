#include "lists.h"

/**
 * add_nodeint - This adds a new node at the beginning of a linked list
 * @head: refers to pointer to the first node in the list
 * @n: data to insert in that new node
 * Completed 30th April 2023
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
