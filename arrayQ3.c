/*
This program creates an array of 10 numbers and swaps the neighbouring elements.
*/

#include<stdio.h>

int main() {

	int originalArray[10];
	//int swappedArray[10];
	int i, j;
	int temp[10];

	printf("Enter 10 numbers :\n");

	for (i=0 ; i<10 ; i++) {
		scanf("%d", &originalArray[i]);
	}

	//Swapping of Neighbouring Elements

	for (i=0 ; i<10 ; i+=2) {
		temp[i] = originalArray[i];		
		originalArray[i] = originalArray[i+1];
		originalArray[i+1] = temp[i];
	}

	printf("\nThe array with neighbouring elements swapped array is : \n");	

	for(i=0 ; i<10 ; i++) {
		printf("%d\t", originalArray[i]);
	}

	return 0;
}
