#include "main.h"
/**
 * print_sign - function to check for a sign of a number
 * @n: a character that checks for the sign of a number
 * Return : returns 0,1 or -1 depending on the condition
 */
int print_sign(int n)
{
	if (n == 0)
	{
	_putchar('0');
	return (0);
	else if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	}
}
