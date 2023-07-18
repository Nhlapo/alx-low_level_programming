#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int num1 = 1;
	long int num2 = 2;
	long int fib;

	printf("%ld, %ld", num1, num2);

	for (i = 3; i <= 50; i++)
	{
		fib = num1 + num2;
		printf(", %ld", fib);

		num1 = num2;
		num2 = fib;
	}

	printf("\n");

	return (0);
}
