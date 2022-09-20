#include "main.h"

/**
 * puts_half - print half of a string.
 * @str: string to process.
 */

void puts_half(char *str)
{
	int n, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		n = (len + 1) / 2;
	}
	else
	{
		n = len / 2;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
