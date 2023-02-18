#include <stdio.h>

/**
 * main - prints alph in low and up case
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
