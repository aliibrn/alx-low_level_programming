#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using `malloc`.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory, or exits with status 98 if it fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);

	return (ptr);
}
