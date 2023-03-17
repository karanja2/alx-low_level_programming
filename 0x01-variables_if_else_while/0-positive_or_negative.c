#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n each time
 * it executes, and prints it
 * Return: always 0(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print("%d is positive\n", n);
	else if (n == 0)
		print("%d is zer\n", n);
	else if (n < 0)
		print("%d is negative\n", n);
	return (0);
}
