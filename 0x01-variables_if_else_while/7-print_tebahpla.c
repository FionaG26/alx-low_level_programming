#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Description: using the putchar function
 * this program prints "Programming is in lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 122 ; alphabet > = 97; alphabet--)

	{
		putchar(alphabet);
	}

putchar('\n');
return (0);
}
