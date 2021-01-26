// This program determine how long it takes for a population to reach a particular size.

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int nllamas; // Current number of llamas
	int ellamas; // Expected number of llamas
	int bllamas; // llamas who borned
	int dllamas; // llamas who died
	int	years;   // Years to reach the expected number of llamas
	
	
	// Starting numbers os llamas
	printf("How many llamas do you have? \n");
	scanf("%i", &nllamas);

	while(nllamas < 9){
		printf("How many llamas do you have? \n");
		scanf("%i", &nllamas);
	}

	// Ending number of llamas
	printf("How many llamas do you expect have? \n");
	scanf("%i", &ellamas);
	
	while(ellamas < nllamas){
		
	printf("How many llamas do you expect have? \n");
	scanf("%i", &ellamas);
	}
		
	system("cls"); 	
	
	// Calculating the nember of years to reach the expected number of llamas
	while (nllamas < ellamas ){
		bllamas = nllamas/3;
		dllamas = nllamas/4;
		
		nllamas = nllamas + bllamas - dllamas;
		years = years + 1;
	}
	
	// Print number of years
	printf("Years to reach the expected number of llamas: \n %i", years);
	printf("\n");
	
	
	system("pause");
	return 0;
}

// Adriano Weverton Lara
// 01/26/2021
// CS50 - LAB 1 
