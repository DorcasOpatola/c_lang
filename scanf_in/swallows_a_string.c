#include <stdio.h>

/**
 * The scanf() function stops reading text input at the
 * first white space character, space, tab, or Enter key.
 */
int main()
{
	char firstname[15];
	char lastname[20];

	printf("Type your first name: ");
	scanf("%s", firstname);
	printf("Type your last name: ");
	scanf("%s", lastname);
	printf("Pleased to meet you %s %s.\n", firstname, lastname);
	return (0);
}
