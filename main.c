#include <stdio.h>
#include <stdlib.h>
#define SIZE 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//오셀로 틀 만들기  
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
void player2_moves(char board[][SIZE], int row, int col, char player);
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
	int invalid_moves=0;
	char again=0;
	
		player= ++num_games % 2;
		num_moves=4;
		
		for(row=0;row<SIZE;row++)
		for(col=0;col<SIZE;col++)
			board[row][col]= 0;
		
	board[SIZE/2-1][SIZE/2-1] = board[SIZE/2][SIZE/2] = 'O'; // 처음 돌 4개 배치  
	board[SIZE/2-1][SIZE/2] = board[SIZE/2][SIZE/2-1] = 'X';
	
	do{
		display(board);
		if(player++ %2){
			if(valid_moves(board, moves, 'O')){
				for(;;){
					printf("Put a new white othello: ");
					scanf("%d%c", &x, &y);
					if(x>=0 && y>=0; x<SIZE && y<SIZE && moves[x][y]){
						move(board, x, y, 'O');
						num_moves++;
						break;
					}
					else 
					printf("invalid input!(no flip happens)\n");
				}
			}
			else
			if(invalid_moves<2){
				printf("\nYou have to Pass.");
				scanf("%c", &again);
			}
			else printf("\nGame Over.\n");
		}
		else{
			if(valid_moves(board, moves, 'X')){
				invalid_moves=0;
				int player2_moves(board, moves, 'X');
				num_moves++;
			}
			}else{
			if(invalid_moves<2)
			printf("\nI have to Pass.\n");
			
			else
				printf("\nGame Over.\n");
			}
	}while(num_moves < SIZE*SIZE && invalid_moves<2);
	
	return 0;
}




