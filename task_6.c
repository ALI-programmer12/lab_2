#include<stdio.h>

main(){
	
	float radius, height, volume;
	
	printf("Enter radius: \n");
	scanf("%f",&radius);
	
	printf("Enter height: \n");
	scanf("%f",&height);
	
	volume = 3.14159 * radius * radius * height;
	
	printf("\nThe volume of cylinder is: %.3f", volume);
}