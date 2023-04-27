#include "lists.h"
#include <stdio.>
/**
* _strlen – returns the length of a string
* @s: the string whose length to check
* return: integer length of string
*/
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
/**
* Print_list – prints alinked lists
* @h: pointer to first node
*/
size_t print_list(const list_t *h)
size_t  i = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? g->str : "(nil)");
h = h->next;
i++;
}
return (i);
}

