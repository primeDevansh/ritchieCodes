#include <stdio.h>

int main() {
	float celsi, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 100;
	step = 10;

	celsi = lower;

	while(celsi <= upper) {
		fahr = ((9 * celsi) / 5) + 32;
		printf("%3.0f %6.1f\n", celsi, fahr);

		celsi = celsi + step;
	}
	return 0;
}
