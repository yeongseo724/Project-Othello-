//ÃÖÁ¾ ½ÂÀÚ
char Winner(char board[][SIZE])
{
	int white=0;
	int black=0;
	
	for(int i=0;i<SIZE;i++){
		for (int j=0;j<SIZE;j++){
			if(board[i][j]==White){
				white +=1;
			}
			else if(board[i][j]==Black){
				black +=1;
			}
			continue;
		}
	}
	printf("White score: %d\n", white);
	printf("Black score: %d\n", black);
	
	if(white>black){
		return white;
	}
	else if(white<black){
		return black;
	}
	return EMPTY;
 } 
