#include "main.h"
/**
  * print_rev - minic the stdio version of puts
  * @s: the value to process to the stdout in reverse.
  */

void print_rev(char *s)
{
	int count;
	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count--)
	{
		_putchar(*(s + (count)));
	}
	_putchar('\n');
}

