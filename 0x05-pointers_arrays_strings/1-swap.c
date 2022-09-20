#include "main.h"

/**
 * swap_int - reset a int value to 98.
 * @a: one of two points to be swaped
 * @b: two of two points to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
