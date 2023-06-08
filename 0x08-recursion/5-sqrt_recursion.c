#include "main.h"
/**
 * sqrtfunc - recurses to find the natural
 * square root of a number
 * @x: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrtfunc(int x, int i)
{
	if (i * i > x)
		return (-1);
	else if (i * i == x)
		return (i);
	return (sqrtfunc(x, i + 1));
}

/**
 * _sqrt_recursion -  function returns the natural square root of a number
 * @n: input value
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrtfunc(n, 1));
}
