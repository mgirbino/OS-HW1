// Michael Girbino
// EECS 338 HW1: Fibonacci Sequence

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int index);

int main() {
	for(int i = 0; i < 15; i++) {
		printf("The Fibonacci number f_%d is %d\n", i, fibonacci(i));
		fflush(stdout);
	}
}

int fibonacci(int index) {
	if(index == 0)
		return 0;
	else if(index == 1)
		return 1;
	return fibonacci(index - 1) + fibonacci(index - 2);
}
