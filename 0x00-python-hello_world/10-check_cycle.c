#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *nxt;
	listint_t *rev;

	nxt = list;
	rev = list;
	while (list && nxt && nxt->next)
	{
		list = list->next;
		nxt = nxt->next->next;

		if (list == nxt)
		{
			list = rev;
			rev =  nxt;
			while (1)
			{
				nxt = rev;
				while (nxt->next != list && nxt->next != rev)
				{
					nxt = nxt->next;
				}
				if (nxt->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
