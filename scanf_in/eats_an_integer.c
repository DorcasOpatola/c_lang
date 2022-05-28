#include <stdio.h>

int main()
{
	int fav;
	float ffav;

	printf("What is your favourite number?: ");
	scanf("%d", &fav);
	printf("What is your favourite float-point number?: ");
	scanf("%f", &ffav);
	printf("%d and %f are my favourite numbers too!\n", fav, ffav);
	return (0);
}

