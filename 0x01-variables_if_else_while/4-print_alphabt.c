#include <stdio.h>
/**
 * main - Print the alphabet in lowercase letters, except for q & e
 *
 * Description: using the main function
 * this program prints "Programming is alphabet in lowercase letters, except for q & e
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	if (ch == 'q')
		continue;

	else if (ch == 'e')
		continue;

	putchar(ch);
}

putchar('\n');
return (0);
}
