#include "main.h"
#include <stdio.h>

/**
 *  print_last_digit - print last digit of integer
 *  @n: integer
 *  Description: This function returns last digit of number
 *  Return: last digit of number
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
	{
		r = -1 * (n % 10);
	} else
	{
		r = n % 10;
	}
	_putchar(r + '0');
	return (r);
}
