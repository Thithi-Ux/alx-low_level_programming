#include "main.h"

/**
 * main - Entry point
 * description - A progrma that prints putchar
 *
 * 
 */ 
int main(void)
{
	char *c = "_putchar";
		while (*c)
		{
			putchar(*c);
			c++;
		}
	putchar('\n');
	return (0);
}

