#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point for program
 * Return: 1 if successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\"- Dora Kopar, 2015-10-19\n", 59);
	return (1);
}
