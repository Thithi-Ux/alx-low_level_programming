#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * description: Write a program that prints the alphabet in lowercase
 *
 * Return: (0) Success
 */

int main(void)
{
	char c;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	for ( c = 'a'; c <= 'z'; c++ )
		putchar (c);
	putchar('\n');
	return (0);
}
