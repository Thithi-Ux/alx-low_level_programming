#include "main.h"

/**
 * main 
 * description
 * return (0) success
 */

void print_alphabet_x10(void);
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
