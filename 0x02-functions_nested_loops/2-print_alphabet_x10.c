#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	char alpha = 'a';

	for (i = 0; i < 10; i++)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
