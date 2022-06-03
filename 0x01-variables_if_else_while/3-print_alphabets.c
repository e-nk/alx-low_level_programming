#include<stdio.h>

/**
* main - Entry point
*
* Return: Always (0) success
*/
int main(void)
{
	char alph; /* alphabet */

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A' ; alph <= 'Z' ; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
