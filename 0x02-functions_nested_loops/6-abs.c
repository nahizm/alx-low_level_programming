Task 6.txt
Who has access
A
System properties
Type
Text
Size
289 bytes
Storage used
289 bytes
Location
0x02. C - Functions, nested loops
Owner
Antony Bahati
Modified
3:11 PM by Antony Bahati
Opened
10:14 PM by me
Created
3:13 PM
No description
Viewers can download
#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
