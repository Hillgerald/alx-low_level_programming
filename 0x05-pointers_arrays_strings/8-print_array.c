#include "main.h"
/**
 * print_array - prints the elements of an array
 * @a: array name
 * @m: is the number of elements to be printed
 * Return: a , m
 */
void print_array(int *a, int m)
{
	int i;

	for (i = 0; i < (m - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (m - 1))
	{
		printf("%d", a[m - 1]);
	}
	printf("\n");
}
