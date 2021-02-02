//This program re-construct in C the pyramid of the Mario Bross game.

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	 int Height; //The Height of the pyramid
	 
	 //Prompt the height
	 printf("Put the height of your pyramid: \n");
	 scanf("%i", &Height); 
	 
	 //Re-prompt the height in case the user put the number less then 1 or more then 8
	 while(Height < 1 || Height > 8 ){
	 	printf("Put the height of your pyramid: \n");
	 	scanf ("%i", &Height); 
	 }
	 
	 //Cleaning the scren 
	 system ("cls");
	 
	 // Printing the hashes (#)
	 for(int i = 0; i < Height; i++){
	 	for(int j = 0; j < Height; j++){
	 		if( i + j < Height - 1){
	 			printf(" ");
			 }else 	printf("#");
		 }
		 printf("\n");
	 }
	 
	 system("pause");
	 return 0;
}


// Adriano Weverton Lara
// 02/01/2021
// CS50 - Problem Set 1
// Instagram @Adriano_Weverton

