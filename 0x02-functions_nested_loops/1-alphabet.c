#include "main.h"

/**
 * main - a program that prints the alphabets
 * in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 */

void print_alphabetic(void)
{
	char c;
	
	for(c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	
	}
	_putchar('\n');
}