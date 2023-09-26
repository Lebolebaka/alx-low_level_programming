#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to pointer to the head of the list
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *temp;

    if (!h || !*h)
        return (0);

    current = *h;

    while (current)
    {
        temp = current;
        current = current->next;

        if (temp < current)
        {
            free(temp);
            count++;
        }
        else
        {
            free(temp);
            break;
        }
    }

    *h = NULL;

    return (count);
}

