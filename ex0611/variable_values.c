#include <stdio.h>

/**
 * The value assigned to a variable can
 * change within the code.
 * This code illustrates such.
 */
int main()
{
	int prime;

	prime = 701;
	printf("Shadrach is %d\n",prime);
	prime = 709;
	printf("Meshach is %d\n",prime);
	prime = 719;
	printf("Abednego is %d\n",prime);
	return (0);
}
