/**
 * main - entry point
 *
 * Description: Prints the size of various types on the machine architecture
 * and automatically detects the machine architecture to determine the size of
 * the pointer.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
