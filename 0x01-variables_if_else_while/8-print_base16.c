#include <stdio.h>
/**
 * main - Print a hexadecimal string
 *
 * Description: using the putchar function
 * this program prints "Programming is base 16 lowercase
 * Return: Always (Success)
 */
int main(void)

{
char c;

for (c = '48'; c <= '57'; c++)
{
putchar(c);
}

for (c = '97'; c <= '102'; c++)
{
putchar(c);
}

putchar('\n');
	
return (0)
}
