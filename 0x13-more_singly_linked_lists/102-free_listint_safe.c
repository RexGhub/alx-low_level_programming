#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - func that reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node
 *
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t n;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (n = 0; n < size - 1; n++)
		newlist[n] = list[n];
	newlist[n] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - func that frees a listint_t linked list.
 * @head: double head pointer
 *
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t n, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (n = 0; n < num; n++)
		{
			if (*head == list[n])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
