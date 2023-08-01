#include "lists.h"
/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	tmp = *head;

	if (tmp == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);

	return (n);
}
