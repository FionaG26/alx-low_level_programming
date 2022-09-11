/*
 * File: 10-print_comb2.c
 * Auth: Fiona Githaiga
 */
#include <stdio.h>

/**
 *  main - Prints the numbers from 0 to 99
 *
 *  Return: 0 (Sucess)
 */
int main(void)

{
	int digit1, digit2;
	
	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 1; digit2 <= 9; digit2++)
	{
			if (digit1 > digit2)
	{
				putchar(digit1 + '0')
				putchar(digit2 + '0')
				
				if(digit 1! = 8)
					putchar (',')
					putchar (' ');
	}
	}
	putchar('\n');
	return (0);
}	
