#include "main.h"

/**
 * _isapha - Return 1 if c is a lette. lowercase or uppecase
 *
 * @c: The int to print
 * Return: Always 0
 *
 */

int _isapha(int c)
{
	if ((c > 'a'&& c < 'z') || (c > 'A' & c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
