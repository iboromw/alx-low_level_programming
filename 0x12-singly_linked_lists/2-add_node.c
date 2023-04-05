#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a node
 *
 * @head: main
 * @str: str for struct
 *
 * Return: Return at success
 */

list_t *add_node(list_t **head, const char *str)
{
char *firststr, *ptr;
list_t *firstnode;
int len = 0;
if (str != NULL)
{
ptr = (char *) str;
while (*ptr++)
len++;
firststr = malloc(sizeof(char) * (len + 1));
if (firststr == NULL)
return (NULL);
ptr = firststr;
while (*str)
*ptr++ = *str++;
}
else
firststr = NULL;
firstnode = malloc(sizeof(list_t));
if (firstnode == NULL)
{
free(firststr);
return (NULL);
}
if (*head != NULL)
firstnode->next = *head;
firstnode->str = firststr;
firstnode->len = len;
*head = firstnode;
return (firstnode);
}
