#include "main.h"
/**
 * Main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
