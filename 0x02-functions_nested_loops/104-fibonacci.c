#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned int num1 = 1;
	unsigned int num2 = 2;
	unsigned int fib;

	printf("%u, %u", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		fib = num1 + num2;
		printf(", %u", fib);

		num1 = num2;
		num2 = fib;
	}

	printf("\n");

	return (0);
}
