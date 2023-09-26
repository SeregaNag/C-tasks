#include <stdio.h>

void temp()
{
	float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	printf("Celsius      Fahrenheit\n");
	while (celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32;
		printf("%6.1f            %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
