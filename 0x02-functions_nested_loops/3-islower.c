#include "main.h"

/**
 * _islower - Entry point
 * @c: is the char to be checked
 * description a function that checks for lowercase character
 * 
 * Return: 1 if char is lowercase, else  0
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	return(0);
}

