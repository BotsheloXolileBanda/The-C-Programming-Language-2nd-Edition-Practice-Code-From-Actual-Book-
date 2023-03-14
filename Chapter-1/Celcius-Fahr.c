#include <stdio.h>

int main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	celcius = lower;

	while (celcius <= upper)
	{
		fahr = (celcius + 32) * 9.0/5.0;
		printf("%3.0f\t%6.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
	return (0);
}
