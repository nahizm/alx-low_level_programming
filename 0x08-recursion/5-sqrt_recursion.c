#include "main.h"

/**
 * _sqrt_recursion - returns the natural square number
 * @n: number
 *
 * Return: the square of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - returns the square of a number
 * @n: number
 * @x: number
 *
 * Return: returns
 */
int _sqrt(int n, int x)
{	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
