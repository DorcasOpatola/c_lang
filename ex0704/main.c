#include <stdio.h>

int main ()
{
	int a,b,c;

	printf("I'm waiting for three characters: ");
	a = getchar();
	b = getchar();
	c = getchar();
	printf("I waited for '%c %c %c' characters.\n",a,b,c);
	return(0);
}
