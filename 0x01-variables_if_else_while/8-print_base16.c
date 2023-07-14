#include <stdio.h>
/**
 * main - a program to print numbers to base 16
 * Return: 0 (success)
 */
int main(void)
{
	char e;

	int b;

	e = 'a';
	b = 0;
	while
		(b < 10) {
			putchar(b + '0');
			b++;
		}
	while
		(e <= 'f') {
			putchar(e);
			e++;
		}
	putchar('\n');
	return (0);
}


