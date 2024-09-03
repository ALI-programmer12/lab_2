#include<stdio.h>
main(){
	int number;
	printf("Enter a number: \n");
	scanf("%d", &number);
	
	if(number%2 == 0){
		printf("The given number %d is even", number);
	}
	else{
		printf("The given number %d is odd", number);
	}
}