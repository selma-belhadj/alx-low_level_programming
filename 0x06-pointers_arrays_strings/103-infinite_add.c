#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result lenght , buffer size
 * Return: sum
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r) // n1 = 123 , n2 = 089 

{
/* local variable declaration */
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')   // length of n1
		i++; // i=3
	while (n2[j] != '\0') //j=0, 1, 2
		j++; // j=2
	if (i > j) // l is gonna be the biggest between i & j // length of r
		l = i;
	else
		l = j; // l= 3
	if (l + 1 > size_r) // If the result can not be stored in r the function must return 0
		return (0);
	r[l] = '\0'; // r[3] = '/0'
	for (k = l - 1 ; k >= 0 ; k--) // k=2 ==> k=0, k=1, k=0, k=-1
	{
		i--; // i=2; i=1; i=0
		j--; // j=1; j=0; j=-1
		if (i >= 0)
			f = n1[i] - '0'; // f= n1[2] = 3, n1[1]=2 n1[0]=1 
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0'; // s = n2[1] = 9, n2[0]= 8
		else
			s = 0; // s=0
		r[k] = (f + s + d) % 10 + '0'; // r[2] = (3+9+0)%10='2'; r[1]= (2+8+1)%10= '1'; r[0]= (1+0+1)%10=2
		d = (f + s + d) / 10; // d=  12/10= 1, d=(11/10)=1; d=(2/10)=0
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r); // 212
}

