#include <stdio.h>

/**
 * main - vins
 * Return: Always 0
 */
int main(void)
{
	int num;
	char lu;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + 'o');
	for (lu = 'a'; lu <= 'f'; lu++)
		putchar(lu);
	putchar('\n');
	return (0);
}

