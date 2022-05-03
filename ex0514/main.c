#include <stdio.h>
#define VALUE 8
#define SET 2

/**
 * #define SHORTCUT constant
 * This is the format for setting a shortcut in C.
 * It is usually written after the header file,
 * and it doesn't require a semicolon after it because,
 * it is a compiler directive.
 *
 * Example: #define VALUE 8
 * The VALUE is the SHORTCUT 
 * 8 is the constant
 * Wherever VALUE appears in the code, it is substituted for 8
 *
 * This helps to save time in coding where a value
 * has to be changed over a large source code.
 */
int main()
{
	printf("The value is %d\n",VALUE+SET);
	printf("And %d is the value\n",VALUE+SET);
	printf("It's not %d\n",VALUE);
	printf("And it's not %d\n",SET);
	printf("No, the value is %d\n",VALUE+SET);
	return(0);
}
