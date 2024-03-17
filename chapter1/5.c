#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	for(int i = UPPER; i >= LOWER; i -= STEP) 
		printf("%3d %6.1f\n", i, ((5.0/9.0) * (i - 32)));
	return 0;
}
