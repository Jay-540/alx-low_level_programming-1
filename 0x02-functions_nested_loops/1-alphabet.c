nclude "main.h"

/**
 * main - print alphabetic in lowercase
 *
 * followed by a new line
 *
 * return: 0
 */
void print_alphabetic(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}