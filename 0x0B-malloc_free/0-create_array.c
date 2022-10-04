#include "main.h"

/**
* create array - creates array
* initialize it
* @size: size of the array
* @c: character
* description: safdsdf
* Return: NULL if size is zero
* pointer to array.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;


	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
