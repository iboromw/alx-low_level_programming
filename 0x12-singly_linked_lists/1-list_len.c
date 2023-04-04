#include <stdio.h>
#include "lists.h"

/**
 * list_len - List len
 *
 * @h: First node
 *
 * Return: Return at success
 */

size_t list_len(const list_t *h)
{
size_t len = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
