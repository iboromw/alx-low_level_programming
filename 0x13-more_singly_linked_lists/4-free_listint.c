#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - list free
 * @head: main node
 * Return: void at success
 */

void free_listint(listint_t *head)
{
while (head)
{
listint_t *tmp = head;
head = head->next;
free(tmp);
}
}
