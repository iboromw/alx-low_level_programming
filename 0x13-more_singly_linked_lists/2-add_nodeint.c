#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add note
 * Return: Return pointer to previous node
 * @head: main node
 * @n: new node
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
