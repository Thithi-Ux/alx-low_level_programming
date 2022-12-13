#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * description: Write a program that prints the alphabet in lowercase
 *
 * Return 0 
 */

int main(void)
{
	char c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */
	for ( c = 'a'; c <= 'z'; c++ )
		putchar (c);

	putchar('\n');
	return (0);
}
