#include "main.h"
/**
* factorial - returns the factorial of a number
* @n: the number to get its factorial
* Return: factorial of n
*/
int factorial(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
return (n * factorial(n - 1));
}
