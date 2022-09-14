#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
