#include <stdio.h>

int main()
{
	char  c;
	int i;
	float f;
	double d;

	c = 'a';
	i = 1;
	f = 19.8;
	d = 20000.009;
/**
 * %.1f placeholder is used to set the number of decimal places 
 * to 1dp.
 * So, a placeholder of %2.3d sets the value assigned
 * to the int as 10.000 figures.
 */
	printf("%c\n%d\n%f\n%f\n",c,i,f,d);
	printf("%c, %d, %.1f, %f\n",c,i,f,d);
	return(0);
}
