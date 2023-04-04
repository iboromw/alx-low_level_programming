#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - linked list
 *
 * @head: main
 *
 * Return: Return at success
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *ptr, *last;
if (head == NULL)
return (NULL);
for (last = head->next; last != NULL; last = last->next)
{
if (last == last->next)
return (last);
for (ptr = head; ptr != last; ptr = ptr->next)
if (ptr == last->next)
return (last->next);
}
return (NULL);
}
