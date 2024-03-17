#include <stdio.h>

int main() {
	float celsi, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("FAHR CELSIUS\n");

	fahr = lower;
	while(fahr <= upper) {
		celsi = (5.0/9.0) * (fahr - 32);

		printf("%4.0f %7.4f\n", fahr, celsi);

		fahr = fahr + step;
	}
	return 0;
}
