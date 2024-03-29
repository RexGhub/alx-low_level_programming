#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

