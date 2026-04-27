#include "lists.h"
#include <stdlib.h>

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp;
    dlistint_t *prev;
    unsigned int i = 0;

    if (!head || !*head)
        return (-1);

    temp = *head;

    if (index == 0)
    {
        *head = temp->next;
        if (*head)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    while (temp && i < index)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (!temp)
        return (-1);

    prev->next = temp->next;

    if (temp->next)
        temp->next->prev = prev;

    free(temp);

    return (1);
}
