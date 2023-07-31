#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int w;
	int v;

	for (w = 0; w < 8; w++)
	{
		for (v = 0; v < 8; v++)
			_putchar(a[w][v]);
		_putchar('\n');
	}
}

