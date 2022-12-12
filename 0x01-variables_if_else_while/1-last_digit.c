#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description : 
 *
 * Return (0) Success
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/* your code goes there */
	LastDigit = n % 10;
	printf("Last digit of %i is %i and is ", n, LastDigit);
       if (LastDigit > 5 )
	       printf("greator than 5\n");
       else if (LastDigit == 0)
	       printf("0\n");
       else
	       printf("less that 6 and not 0\n");
       return (0);
}
