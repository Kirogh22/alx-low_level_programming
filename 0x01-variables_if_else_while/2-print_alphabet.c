#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 * description: prints alphabet by for loop.
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
