#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: main
 * @index: index
 * Return: Return at success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *node;
if (!*head)
return (-1);
prev = get_nodeint_at_index(*head, index - 1);
node = get_nodeint_at_index(*head, index);
if (!node)
return (-1);
if (index != 0)
{
prev->next = node->next;
node->next = 0;
}
else
{
*head = node->next;
}
free(node);
return (1);
}

/**
 * get_nodeint_at_index - node at index
 * @head: main
 * @index: index
 * Return: Return at success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
if (!head)
return (0);
while (head)
{
if (index == i)
return (head);
i++;
head = head->next;
}
return (0);
}
