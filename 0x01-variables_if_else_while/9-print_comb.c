#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* A program that that prints all possible combinations of single-digit numbers.*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchat(44);
			putchar(32);
			i++;
		}
		else
		{
			i++;
		}
	}
		putchar('\n');
		/* End of my code */

		return (0);
}
	