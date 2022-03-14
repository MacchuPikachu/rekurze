#include <stdio.h>

long faktorial(int x) {
	if (x <= 1) return 1;
	else return x * faktorial(x - 1);
}

long bunky(int x) {
	if (x <= 1) return 1;
	else return 2 * bunky(x - 1);
}

long fibonacci(int x) {
	if (x == 0) return 0;
	else if (x <= 1) return 1;
	else return fibonacci(x - 1) + fibonacci(x - 2);
}

float urok(int x) {
	if (x <= 1) return x * 1.01;
	else return urok(x - 1) * 1.01;
}

int main() {
	printf("Faktorial: ");
	printf("%d; ", faktorial(1));
	printf("%d; ", faktorial(2));
	printf("%d; ", faktorial(3));
	printf("%d; ", faktorial(4));
	printf("%d\n", faktorial(4));
	printf("Bunky: ");
	printf("%d; ", bunky(1));
	printf("%d; ", bunky(2));
	printf("%d; ", bunky(3));
	printf("%d; ", bunky(4));
	printf("%d; ", bunky(5));
	printf("%d; ", bunky(6));
	printf("%d; ", bunky(7));
	printf("%d\n", bunky(8));
	printf("Fibonacci: ");
	printf("%d; ", fibonacci(0));
	printf("%d; ", fibonacci(1));
	printf("%d; ", fibonacci(2));
	printf("%d; ", fibonacci(3));
	printf("%d; ", fibonacci(4));
	printf("%d\n", fibonacci(5));
	printf("Slozeny urok: ");
	printf("%f; ", urok(1));
	printf("%f; ", urok(2));
	printf("%f; ", urok(3));
	printf("%f; ", urok(4));
	printf("%f", urok(5));
}