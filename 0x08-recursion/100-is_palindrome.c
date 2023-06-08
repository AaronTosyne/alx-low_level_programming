#include "main.h"

/**
 * palfunc - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int palfunc(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	else if (*(s + i) == *(s + len - 1) && *(s + i++) == *(s + len--))
		return (1);
	return (palfunc(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - func to check if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palfunc(s, 0, _strlen_recursion(s)));
}
