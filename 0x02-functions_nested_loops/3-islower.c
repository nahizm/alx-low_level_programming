#include "main.h"
/**
 * _islower - funciotn to check for lowercase character
 * @c: is the int that will use for the argument of the function
 * return: 0
 */
int islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
