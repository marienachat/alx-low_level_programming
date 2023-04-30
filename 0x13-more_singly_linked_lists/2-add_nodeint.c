#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a linked list
* @head: pointer to the first node in the list
* @n: data of that new node
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;

newnode = malloc(sizeof(listint_t));
if (!newnode)
return (NULL);
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
