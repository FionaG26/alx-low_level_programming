#include <stdio.h>
/**
 * main - Print all numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0)
}
