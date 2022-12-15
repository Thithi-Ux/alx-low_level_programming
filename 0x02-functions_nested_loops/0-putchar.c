#include "main.h"

/**
 * main - printer putchar
 * description - A progrma that prints putchar
 *
 * Return: 0 Always
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

