#include "main.h"
#include <stdio.h>
/**
 *  _abs - computer absolute value of integer
 *  @n: integer
 *  Description: This function returns absolute value of a number
 *  Return: Absolute value of number n
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
