#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *group_new;
	listint_t *group_temp = *head;

	group_new = malloc(sizeof(listint_t));
	if (!group_new)
		return (NULL);

	group_new->n = n;
	group_new->next = NULL;

	if (*head == NULL)
	{
		*head = group_new;
		return (group_new);
	}

	while (group_temp->next)
		group_temp = group_temp->next;

	group_temp->next = group_new;

	return (group_new);
}

