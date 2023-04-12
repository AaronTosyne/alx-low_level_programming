#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: input value
 * @m: input value
 *
 * Return:  the number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned int b = 0;

	a = n ^ m;

	while (a != 0)
	{
		if (a & 1)
		{
			b++;
		}
	a >>= 1;
	}
	return (b);
}
