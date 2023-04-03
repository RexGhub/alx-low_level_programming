#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - func that adds node at end of a listint_t list.
  *
  * @head: double head pointer
  * @n: add int-type list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);
	newlist->n = n;
	newlist->next = NULL;
	if (*head == NULL)
	{
	*head = newlist;
		return (newlist);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newlist;
	return (newlist);
}

