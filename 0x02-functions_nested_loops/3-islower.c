#include "main.h"

/**
 * test_islower - Entry point
 * description a function that checks for lowercase character
 * 
 * Return (0) Success
 *
 */

int test_islower(int c)
{
	if ( c >= 97 && c <= 122 )
	{
		return(1);
	}
	return(0);
}

