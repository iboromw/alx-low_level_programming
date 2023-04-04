#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - list data
 * @head: main
 * Return: Return at success
 */

int sum_listint(listint_t *head)
{
int sum = 0;
if (!head)
return (sum);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
