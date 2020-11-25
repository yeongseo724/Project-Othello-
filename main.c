#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//������ Ʋ �����  
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
int valid_moves(char board[][SIZE], int moves[][SIZE], char player);
int main(int argc, char *argv[]) {
	
	char board[SIZE][SIZE]={0};
	int num_moves=0;
	int num_games=0;
	int row=0;
	int col=0;
	int player=0;
	int x=0;
	int y=0;
	int moves[SIZE][SIZE]={0};
	
		player= ++num_games % 2;
		num_moves=4;
		
		for(row=0;row<SIZE;row++)
		for(col=0;col<SIZE;col++)
			board[row][col]= 'EMPTY';
		
	board[SIZE/2-1][SIZE/2-1] = board[SIZE/2][SIZE/2] = 'O'; // ó�� �� 4�� ��ġ  
	board[SIZE/2-1][SIZE/2] = board[SIZE/2][SIZE/2-1] = 'X';
	
	do{
		display(board);
		if(player++ %2){
			if(valid_moves(board, moves, 'O')){
				for(;;){
					printf("Put a new white othello: ");
					scanf("%d%c", &x, &y);
				}
			}
		}
	}
	return 0;
}



