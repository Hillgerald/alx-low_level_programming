#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @c: the number being computed
 * Return: absolute value of number or 0
 */
int _abs(int c)
{
	if (c < 10)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
