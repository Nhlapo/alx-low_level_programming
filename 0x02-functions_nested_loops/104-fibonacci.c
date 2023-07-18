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
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int fib;

	printf("%lu, %lu", num1, num2);

	for (count = 3; count <= 98; count++)
	{
		fib = num1 + num2;
		printf(", %lu", fib);

		num1 = num2;
		num2 = fib;
	}

	printf("\n");

	return (0);
}
