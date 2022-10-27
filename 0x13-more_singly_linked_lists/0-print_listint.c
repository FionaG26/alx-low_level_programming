#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all elements of a list
 *@h: pointer to the start of list listint_t
 *
 *Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t NodeCounter;

	tmp = h;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		NodeCounter++;
	}
	return (NodeCounter);
}
