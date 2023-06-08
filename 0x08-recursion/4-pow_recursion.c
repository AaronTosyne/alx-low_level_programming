#include "main.h"
/**
 * _pow_recursion - A function that return the value of x raised to y
 * @x: input value
 * @y: input value
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int z = y - 1;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, z));
}
