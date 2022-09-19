#include "main.h"
#include <stdio.h>

/**
 * print_array - Print elements of a array
 * @s: array name.
 * @n: elements of the array.
 *
 * Return: Always void.
 */
void print_array(int *s, int n)
{
	int i = 0;

	for (i = 0; i < n ; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", s[i]);
		}
		else
		{
			printf("%d", s[i]);
		}
	}
	printf("\n");
}
