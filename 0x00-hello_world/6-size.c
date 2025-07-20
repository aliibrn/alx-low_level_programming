#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the sizeof operator in C to
 * determine the memory allocation size of various fundamental data types.
 * The sizeof operator returns the size in bytes that each data type
 * occupies in memory on the current system architecture. This information
 * is crucial for understanding memory management, pointer arithmetic, and
 * system-specific programming considerations. The output may vary between
 * different computer architectures (32-bit vs 64-bit systems).
 *
 * Return: 0 on successful execution, non-zero on failure
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
