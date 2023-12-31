#include "lists.h"

/**
 * print_listint - this will print all elements of the  linked list
 * @h: linked list of type listint_t that is to be prined
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
