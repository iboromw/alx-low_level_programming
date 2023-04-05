#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add a node
 *
 * @head: main
 * @str: string for new node
 *
 * Return: Return at success
 */

list_t *add_node_end(list_t **head, const char *str)
{
char *newstr, *ptr;
list_t *nodeone, *nodetwo = NULL;
int len = 0;
if (str != NULL)
{
ptr = (char *) str;
while (*ptr++)
len++;
newstr = malloc(sizeof(char) * (len + 1));
if (newstr == NULL)
return (NULL);
ptr = newstr;
while (*str)
*ptr++ = *str++;
}
else
newstr = NULL;
if (*head != NULL)
{
nodetwo = *head;
while (nodetwo->next != NULL)
nodetwo = nodetwo->next;
}
nodeone = malloc(sizeof(list_t));
if (nodeone == NULL)
{
free(newstr);
return (NULL);
}
if (*head == NULL)
*head = nodeone;
if (nodetwo != NULL)
nodetwo->next = nodeone;
nodeone->str = newstr;
nodeone->len = len;
return (nodeone);
}
