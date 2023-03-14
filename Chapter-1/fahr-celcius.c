#include <stdio.h>

/* Prints tempertatures in Fahr and Celcius from 0 to 300 */
int main()
{
	printf("Fahrenheit-Celcius Table\n");
	float fahr, celcius;
	int upper, lower, step;

	lower = 0;
	upper = 300; /* Upper limit of table */
	step = 20; /* Number table increases by */

	fahr = lower;

	while (fahr <= upper)
	{
		celcius = 5.0/9.0 * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
	return (0);
}
