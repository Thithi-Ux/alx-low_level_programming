#include "main.h"

/**
 * main - printer putchar
 * description - A program that prints the alphabet
 * Return: 0 Always
 */
void print_alphabet(void)
{
	char a;
	
	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
