#include <stdio.h>
/**
 * main - is the ntry point for the program
 *Return: 0 if there is no error
 */
int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of long int: %ld byte(s)", sizeof(long int));
	printf("size of long long int: %ld bytes(s)", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
