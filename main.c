#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char board[SIZE][SIZE]={0};
	int row=0;
	int col=0;
	
	for(row=0;row<SIZE;row++)
		for(col=0;col<SIZE;col++)
		board[row][col]= 'EMPTY';
		
	board[SIZE/2-1][SIZE/2-1] = board[SIZE/2][SIZE/2] = 'O'; // 처음 돌 배치  
	board[SIZE/2-1][SIZE/2] = board[SIZE/2][SIZE/2-1] = 'X';
	return 0;
}
