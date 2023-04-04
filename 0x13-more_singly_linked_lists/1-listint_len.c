#include <stdio.h>
#include "lists.h"

/**
 * listint_len - get len list
 * Return: size_t h
 * @h: list
 */

size_t listint_len(const listint_t *h)
{
int len = 0;

while (h)
{
len++;
h = h->next;
}
return (len);
}
