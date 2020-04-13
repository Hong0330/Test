#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

void swap() {
	return 0;
}

int main() {
	printf("Hello World!!!!\n");
	
	int a = 1;
	int b = 2;

	printf("a + b = %d \n", add(a,b));

	return 0;
}
