#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print the int value in each element of a listint_t.
 * @h:list to print
 *
 * Return: Number of elements in a list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
