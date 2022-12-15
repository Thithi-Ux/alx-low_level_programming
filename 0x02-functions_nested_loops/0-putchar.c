#include "main.h"

/**
 * main - Entry point
 * Description - A progrma that prints putchar
 *
 * Return 0 always
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

