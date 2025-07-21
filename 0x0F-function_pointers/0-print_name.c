#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function pointer.
 * @name: The name to print.
 * @f: A pointer to the function to use for printing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
