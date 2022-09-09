#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Description: using the putchar function
 * this program prints "Programming single digit numbers base 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	putchar('\n');
	return (0);
}
