#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free
 *
 * @head: main
 *
 * Return: Return at success
 */

void free_list(list_t *head)
{
list_t *next;
if (head == NULL)
return;
next = head->next;
while (head != NULL)
{
if (head->str != NULL)
free(head->str);
free(head);
head = next;
if (head != NULL)
next = head->next;
}
}
