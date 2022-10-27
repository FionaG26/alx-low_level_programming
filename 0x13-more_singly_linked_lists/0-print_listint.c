#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: The list
 *
 * Return: Always an unsigned int, the total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int total = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		total++;
		h = h->next;
	}

	return (total);
}
