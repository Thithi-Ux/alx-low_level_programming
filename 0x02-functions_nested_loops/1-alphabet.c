#include "main.h"

/**
 * print_alphabet - A function that prints the alphabets in lowercase
 *
 *
 */

int print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}
