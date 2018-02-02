/*Fibonacci Numbers*/

#include<stdio.h>

int main() {

	int fibNum[10];
	fibNum[0] = 0; 
	fibNum[1] = 1;
	int i;

	printf("First 10 Fibonacci Numbers\n");

	for (i=2 ; i<10 ; i++) {
		fibNum[i] = fibNum[i-2] + fibNum[i-1];
	}

	for (i=0 ; i<10 ; i++) {
		printf("%d\n", fibNum[i]);
	}

	return 0;
}


