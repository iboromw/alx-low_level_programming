#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse data
 * @head: main
 * Return: Reverse on success
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev, *next;
if (!head || !*head)
return (*head);
prev = 0;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
