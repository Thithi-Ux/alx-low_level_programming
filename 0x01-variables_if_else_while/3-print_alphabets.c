#include <stdio.h>
/**
 * main- a program that prints lower and upppercase alphabets
 * description :use putchar function
 *
 * Return: (0) success
 *
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
