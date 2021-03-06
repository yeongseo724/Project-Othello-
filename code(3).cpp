#define SIZE 6
#include <stdio.h>
#include <stdlib.h>

//othello board  
void display(char board[][SIZE]){
	int row=0;
	int col=0;
	char col_label='0';
	
	printf("\n");
	for(col=0;col<SIZE;col++)
		printf("  %c", col_label+col);
		printf("\n");
		
	for(row=0;row<SIZE;row++)
	{
	printf("  -");
		for(col=0;col<SIZE;col++)
			printf("----");
			printf("\n%2d|", row+1);
			
		for(col=0;col<SIZE;col++)
			printf("%c |", board[row][col]);
			printf("\n");	
		}	
	printf("  -");
	for(col=0;col<SIZE;col++)
	printf("----");
	printf("\n");	
}
