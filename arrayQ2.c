#include<stdio.h>

int main() {

	int someArray[10];
	int i;
	
	printf("Enter 10 integers :\n");

	
	for (i=0 ; i<10 ; i++) {
		scanf("%d", &someArray[i]);
	}

	printf("\nThe numbers you entered are : \n");

	for (i=0 ; i<10 ; i++) {
		printf("%d\n", someArray[i]);
	}

	return 0;
}
