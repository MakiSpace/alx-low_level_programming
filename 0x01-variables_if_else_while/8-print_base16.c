#include <stdio.h>

/**
 * main - Print all numbers of base sixteen in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char m;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (m = 'a' ; m < 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);

}
