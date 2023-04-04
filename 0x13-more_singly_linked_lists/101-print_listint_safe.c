#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop_pl - linked list
 *
 * @head: main
 *
 * Return: Return at success
 */

listint_t *find_listint_loop_pl(listint_t *head)
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
 * print_listint_safe - print
 *
 * @head: main
 *
 * Return: Return at success
 */

size_t print_listint_safe(const listint_t *head)
{
size_t len = 0;
int safe;
listint_t *safer;
safer = find_listint_loop_pl((listint_t *) head);
for (len = 0, safe = 1; (head != safer || safe) && head != NULL; len++)
{
printf("[%p] %d\n", (void *) head, head->n);
if (head == safer)
safe = 0;
head = head->next;
}

if (safer != NULL)
printf("-> [%p] %d\n", (void *) head, head->n);
return (len);
}
