#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *group_new;
	listint_t *group_temp = *head;

	group_new = malloc(sizeof(listint_t));
	if (!group_new || !head)
		return (NULL);

	group_new->n = n;
	group_new->next = NULL;

	if (idx == 0)
	{
		group_new->next = *head;
		*head = group_new;
		return (group_new);
	}

	for (l = 0; group_temp && l < idx; l++)
	{
		if (l == idx - 1)
		{
			group_new->next = group_temp->next;
			group_temp->next = group_new;
			return (group_new);
		}
		else
			group_temp = group_temp->next;
	}

	return (NULL);
}

