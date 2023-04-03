#include "lists.h"

/**
 * get_nodeint_at_index - func returns nth node of a listint_t linked list.
 * @head: head pointer
 * @index: index node
 *
 * Return: index pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

