#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @y: array
 * @n: elements of the array.
 *
 * Return: Array of reverse characteres.
 */

void reverse_array(int *y, int n)
{
	int i, tmp;
	int *z;

	z = &y[n - 1];
	for (i = 0 ; i < (n / 2) ; i++)
	{
		tmp = y[i];
		y[i] = *z;
		*z = tmp;
		z--;
	}
}
