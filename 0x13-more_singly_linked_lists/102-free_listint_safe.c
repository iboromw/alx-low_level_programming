#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: list
 *
 * Return: Return at success0
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *current, *safe, *head;
size_t h_i, r_i;
if (h == NULL || *h == NULL)
return (0);
current = *h;
head = *h;
h_i = 0;
while (head != NULL)
{
safe = *h;
for (r_i = 0; r_i < h_i; r_i++)
{
if (safe == current)
{
*h = NULL;
return (h_i);
}
safe = safe->next;
}
current = head->next;
free(head);
head = current;
h_i++;
}
*h = NULL;
return (h_i);
}
