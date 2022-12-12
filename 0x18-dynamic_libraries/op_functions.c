#include "main.h"
/**
 * add - adds two ints
 * @a: number 1
 * @b: number 2
 * Return: sum of the two numbers
 **/
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtract two numbers
 * @a: number 1
 * @b: number 2
 * Return: result of substraction
 **/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiply two numbers
 * @a: number 1
 * @b: number 2
 * Return: result of multiplication
 **/
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: result of divison
 **/
int division(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * mod - calculates mod of two ints
 * @a: number 1
 * @b: number 2
 * Return: mod of 1, 2
 **/
int mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
