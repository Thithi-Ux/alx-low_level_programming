#include "main.h"

/**
 * _islower - Entry point
 * description a function that checks for lowercase character
 * 
 * Return (1) Success else return (0)
 *
 */

int _islower(int c);
{
	if ( c >= 97 && c <= 122 )
	{
		return(1);
	}
	return(0);
}

