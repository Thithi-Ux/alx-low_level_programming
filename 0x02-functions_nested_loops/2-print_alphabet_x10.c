#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * description a function that prints x10 times the alphabet in lowercase
 * Return (0) success
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
		i++;
	}
}
