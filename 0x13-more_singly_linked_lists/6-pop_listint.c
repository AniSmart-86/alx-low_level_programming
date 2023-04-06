#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked list
 * @head: first element in the linked list
 *
 * Return: 0 || num
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
