#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int d, x, a;

	d = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (d < size)
	{
		b = size - d < 10 ? size - d : 10;
		printf("%08x: ", d);
		for (a = 0; a < 10; a++)
		{
			if (a < x)
				printf("%02x", *(b + d + a));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (a = 0; a < x; a++)
		{
			int c = *(b + d + a);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
