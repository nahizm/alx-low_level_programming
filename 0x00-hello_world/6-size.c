#include <stdio.h>

/**
* main - print
*
* Description: using teh main function
* prints size
*
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of char: 1 byte(s)\n", sizeof(c));
	printf("Size of an int: 2 byte(s)\n", sizeof(i));
	printf("size of a long int: 4 byte(s)\n", sizeof(li));
	printf("size of a long long int: 8 byte(s)\n", sizeof(lli));
	printf("size of a float: 4 byte(s)\n", sizeof(f));
	return (0);
