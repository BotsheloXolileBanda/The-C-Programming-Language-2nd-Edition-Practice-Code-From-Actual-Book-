#include <stdio.h>

/* Prints tempertatures in Fahr and Celcius from 0 to 300 */
int main()
{
	int fahr, celcius;
	int upper, lower, step;

	lower = 0;
	upper = 300; /* Upper limit of table */
	step = 20; /* Number table increases by */

	fahr = lower;

	while (fahr <= upper)
	{
		celcius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celcius);
		fahr = fahr + step;
	}
	return (0);
}
