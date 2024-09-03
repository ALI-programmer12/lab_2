#include <stdio.h>

main(){
	
	float originalPrice, discountRate, finalPrice;
	
	printf("Enter original price:\n");
	scanf("%f", &originalPrice);
	
	printf("Enter your discount:\n");
	scanf("%f", &discountRate);
	
	if(originalPrice>100 && originalPrice<50000){
		
		if(discountRate>5 && discountRate < 30){
			
			finalPrice = originalPrice * (1 - discountRate/100);
			printf("The final price is: %f", finalPrice);
			
		}
	}
	else{
		printf("Your input is out of range");
	}
	
	
	
}