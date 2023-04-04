#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - head node delete
 * @head: main
 * Return: Return at success
 */

int pop_listint(listint_t **head)
{
listint_t *second;
int data;
if (!head || !*head)
return (0);
data = (*head)->n;
second = (*head)->next;
(*head)->next = 0;
free(*head);
*head = second;
return (data);
}
