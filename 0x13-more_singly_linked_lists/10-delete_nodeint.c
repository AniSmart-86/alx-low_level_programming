#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes a node in a linked list
 * at a certain index
 * @head: first element in the list
 * @index: node to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	while (a < index - 1)
	{
	if (!temp || !(temp->next))
	return (-1);
	temp = temp->next;
	a++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
