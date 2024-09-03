#include <stdio.h>

main(){
	float currencyValue, finalAmount, amount;
	
	printf("Enter how much amount you want to exchange in your local currency: \n");
	scanf("%f",&amount);
	
	printf("\nEnter your desired currency value which you want to exchange your money: \n");
	scanf("%f",&currencyValue);
	
	finalAmount = amount * currencyValue;
	
	printf("\nThe exchanged amount in foreign currency is: %f", finalAmount);
}