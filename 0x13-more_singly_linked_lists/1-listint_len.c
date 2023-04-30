#include "lists.h"

/**
* listint_len - returns all the number of elements in a linked lists
* @h: linked list of type listint_t to traverse
* Return: num of node
*/
size_t listint_len(const listint_t *h)
{
size_t numnode = 0;
while (h)
{
numnode++;
h = h->next;
}
return (numnode);
}
