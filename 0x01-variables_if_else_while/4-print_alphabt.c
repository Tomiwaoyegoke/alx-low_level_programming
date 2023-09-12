#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Print all lowercase alphabets except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
