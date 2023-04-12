#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: [0]  If b is NULL or contains chars not 0 or 1
 *         else - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int lenght;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (lenght = 0; b[lenght] != '\0'; lenght++)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);
	}
	for (lenght = 0; b[lenght] != '\0'; lenght++)
	{
		num <<= 1;
		if (b[lenght] == '1')
			num += 1;
	}
	return (num);
}
