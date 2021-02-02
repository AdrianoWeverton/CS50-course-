#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int Height; //The Height of the Pyramid
	
	//Prompt the Height
	printf("Put the Height of your pyramid: \n");
	scanf("%i", &Height);

	//Re-prompt the Height in case the user put a number less than 1 or more than 8
	while(Height < 1 || Height > 8){
		printf("Put the Height of your pyramid: \n");
		scanf("%i", &Height);
	}
	
	//Cleaning the scren 
	system("cls");
	printf("\n");
	
	//Making the Pyramid
	for(int line = 0; line < Height; line++)  //break or skip the lines 
	{ 
	
		for(int space = 0; space < Height; space++) // The pyramid in the left side 
		{
			if(line + space < Height - 1)
			printf(" ");
		
			else 
			printf("#");
		}
		
		for(int gap = 0; gap < 1; gap++) // The space between the pyramids 
		{
			printf("  ");
		}
		
		for(int rhashes = 0; rhashes < Height; rhashes++) // The pyramid in the right side 
		{
			if(line + rhashes > Height - 2)
			printf("#");
		}
		printf("\n");
	}
	printf("\n");
	
	system("pause");
	return 0;
}


// Adriano Weverton Lara
// 02/02/2021
// CS50 - Problem Set 1
// Instagram @Adriano_Weverton
