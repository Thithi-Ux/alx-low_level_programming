#include<stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Description: A C program that assigns a random number to a variable
 *
 * Return (0) Success
 * */

int main(void)

{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
		
	/* your code goes there */
	if n > 0
		printf("%d is positive");
	else if n == 0
		printf("%d is zero");
	else n < 0
		printf("%d is negative);
	return (0);

}
