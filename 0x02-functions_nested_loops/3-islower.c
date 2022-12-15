#include "main.h"

/**
 * _islower(int c) - Entry point
 * description a function that checks for lowercase character
 * Return (0) Success
 *
 */

int _islower(int c)
{
	if ( c >= 97 && c <= 122 )
	{
		return(1);
	}
	return(0);
}

