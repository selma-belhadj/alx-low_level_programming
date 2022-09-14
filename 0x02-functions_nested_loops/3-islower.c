#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: character to check
 * Return: 1 if lower, 0 if not lower alphabet character
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
	_putchar('\n');

}
