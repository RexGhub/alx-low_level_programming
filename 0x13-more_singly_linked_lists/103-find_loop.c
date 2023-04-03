#include "lists.h"

/**
 * find_listint_loop - func that finds the loop in a linked list.
 * @head: head pointer
 *
 * Return: address of the node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *obj1, *obj2;

	obj1 = obj2 = head;
	while (obj1 && obj2 && obj2->next)
	{
		obj1 = obj1->next;
		obj2 = obj2->next->next;
		if (obj1 == obj2)
		{
			obj1 = head;
			break;
		}
	}
	if (!obj1 || !obj2 || !obj2->next)
		return (NULL);
	while (obj1 != obj2)
	{
		obj1 = obj1->next;
		obj2 = obj2->next;
	}
	return (obj2);
}
