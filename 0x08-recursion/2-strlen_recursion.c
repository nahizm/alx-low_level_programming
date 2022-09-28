#include "main.h"

/**
 * _strlen_recursion - calculate
 * @s: sting to be used
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 2);
	}
	return (sum);
}
