#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase
 *
 * Description: using the putchar function
 * this program prints "Programming is base 16 lowercase
 * Return: 0
 */
int main(void)
{
	char c

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	
	return (0)
}
