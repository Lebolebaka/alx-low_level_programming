#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *group_new;

	group_new = malloc(sizeof(listint_t));
	if (!group_new)
		return (NULL);

	group_new->n = n;
	group_new->next = *head;
	*head = group_new;

	return (group_new);
}
