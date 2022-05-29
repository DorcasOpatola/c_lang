#include <stdio.h>

int main()
{
	char name[15];

	printf("Who are you? ");
	fgets(name,15,stdin);
	printf("Glad to meet you, %s.\n", name);
	return (0);
}
