#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		if (counter < 25)
		{
			printf("%li, %li, ", a, b);
			a += b;
			b += a;
		}
		else
		{
			printf("%li, %li", a, b);
		}
	}
	printf("\n");

	return (0);
}
