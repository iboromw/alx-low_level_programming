#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop_fl -linked list
 *
 * @head: main
 *
 * Return: Return at success
 */

listint_t *find_listint_loop_fl(listint_t *head)
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

/**
 * free_listint_safe - listint list
 *
 * @h: main
 *
 * Return: Return at success
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *next, *loopnode;
size_t len;
int loop = 1;
if (h == NULL || *h == NULL)
return (0);
loopnode = find_listint_loop_fl(*h);
for (len = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
{
len++;
next = (*h)->next;
if (*h == loopnode && loop)
{
if (loopnode == loopnode->next)
{
free(*h);
break;
}
len++;
next = next->next;
free((*h)->next);
loop = 0;
}
free(*h);
}
*h = NULL;
return (len);
}
