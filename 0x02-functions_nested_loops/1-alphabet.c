#include "main.h"

/**
 *print_alphabet - function to ptint abc
 *main - a program that prints the alphabet
 *in lowercase
 *followed by a new line
 *Return: Always 0
 */
void print_alphabet(void)
{
	char c;
	
	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	
	}
	_putchar('\n');
}
