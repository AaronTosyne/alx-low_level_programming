#include "main.h"
/**
 * primefunc - calculates if a number is prime recursively
 * @x: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int primefunc(int x, int i)
{
	if (i == 1)
		return (1);
	else if (x % i != 0 && x != 1)
		return (1);
	if (x % i == 0 && i > 0)
		return (0);
	return (primefunc(x, i - 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primefunc(n, n - 1));
}

