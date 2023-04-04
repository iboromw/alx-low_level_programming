#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node
 * @head: main
 * @idx: index
 * @n: new data
 * Return: Return at success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *prev;
if (!head)
return (0);
if (idx == 0)
{
node = add_nodeint(head, n);
return (node);
}
node = malloc(sizeof(listint_t));
if (!node)
return (0);
node->n = n;
prev = get_nodeint_at_index(*head, idx - 1);
if (!prev)
{
free(node);
return (0);
}
node->next = prev->next;
prev->next = node;
return (node);
}

/**
 * get_nodeint_at_index - index
 * @head: main
 * @index: index node
 * Return: Return at success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *node;
node = head;
if (!node)
return (0);
while (node)
{
if (index == i)
return (node);
i++;
node = node->next;
}
return (0);
}

/**
 * add_nodeint - add
 * Return: Return at success
 * @head: main
 * @n: new data
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;
if (!head)
return (0);
node = malloc(sizeof(listint_t));
if (!node)
return (0);
node->n = n;
node->next = *head;
*head = node;
return (node);
}
