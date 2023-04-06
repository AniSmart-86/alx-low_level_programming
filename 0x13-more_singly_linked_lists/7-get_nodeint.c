#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the node
 * at a certain index in a linked list
 * @head: first node
 * @index: para to return
 *
 * Return: temp or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
	temp = temp->next;
	a++;
	}

	return (temp ? temp : NULL);
}
