#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - list free 2
 * @head: main node
 * Return: void at success
 */

void free_listint2(listint_t **head)
{
if (!head || !*head)
return;
while (*head)
{
listint_t *tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = 0;
}
