#define SIZE 6
#include <stdio.h>
#include <stdlib.h>

//final winner
char Winner(char board[][SIZE])
{	int i=0;
	int j=0;
	int white=0;
	int black=0;
	
	for(i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			if(board[i][j]==white){
				white +=1;
			}
			else if(board[i][j]==black){
				black +=1;
			}
			continue;
		}
	}
	printf("white score: %d\n", white);
	printf("black score: %d\n", black);
	
	if(white>black){
		return white;
	}
	else if(white<black){
		return black;
	}
	return 0;
 } 
