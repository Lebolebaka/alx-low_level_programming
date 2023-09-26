#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t group_num = 0;

	while (group_num)
	{
		group_num++;
		head = head->next;
	}

	return (group_num);
}
