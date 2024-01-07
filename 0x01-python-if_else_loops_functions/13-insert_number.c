#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_node - Insert node in order mode to linkedlist
 * @head: head
 * @number: number to be added
 * Return: the address of new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *curr = malloc(sizeof(listint_t));
	listint_t *real = *head;

	if (!curr)
		return (NULL);

	curr->n = number;

	if (*head == NULL || (*head)->n > number)
	{
		curr->next = *head;
		*head = curr;
		return (curr);
	}

	while (real->next)
	{
		if ((real->next)->n >= number)
		{
			curr->next = real->next;
			real->next = curr;
			return (curr);
		}
		real = real->next;
	}

	curr->next = NULL;
	real->next = curr;

	return (curr);
}
