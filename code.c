//���� �Ʒ�(SW) 
void valid_moves(char board[][SIZE], int row, int col, char disc){
	int r,c;
	if(board[row][col]==EMPTY){
		r=row+1;
		c=col-1;
		
		while(r<SIZE && c>=0 && board[r][c]!= EMPTY && board[r][c]!= disc){
			r++;
			c--;
		}
		if(r<SIZE && c>=0 && board[r][c]==disc){
			for(int i=row+1;j=col-1; i<r && j>c; i++, j--){
				if(board[i+1][j-1]==disc){
					return true;
				}
			}
		}
		
		//������ �Ʒ�(SE)
		r=row+1;
		c=col+1;
		
		while(r<SIZE && c<SIZE && board[r][c]!= EMPTY && board[r][c]!= disc){
			r++;
			c++;
		}
		if(r<SIZE && c<SIZE && board[r][c]==disc){
			for(int i=row+1;j=col+1; i<r && j<c; i++, j++){
				if(board[i+1][j+1]==disc){
					return true;
				}
			}
		}
		
		//�Ʒ� (S)
		r=row+1;
		c=col;
		
		while(r<SIZE && board[r][c]!= EMPTY && board[r][c]!= disc){
			r++;
		}
		if(r<SIZE && board[r][c]==disc){
			for(int i=row+1;i<r;i++){
				if(board[i+1][col]==disc){
					return true;
				}
			}
		}
		
		//��(N)
		r=row-1;
		c=col;
		
		while(r>=0 && board[r][c]!= EMPTY && board[r][c]!= disc){
			r--;
		}
		if(r>=0 && board[r][c]==disc){
			for(int i=row-1;i>r;i--){
				if(board[i-1][col]==disc){
					return true;
				}
			}
		} 
		
		//����(W)
		r=row;
		c=col-1;
		
		while(c>=0 && board[r][c]!= EMPTY && board[r][c]!= disc){
			c--;
		}
		if(c>=0 && board[r][c]==disc){
			for(int j=col-1;j>c;j--){
				if(board[row][j-1]==disc){
					return true;
				}
			}
		}
		
		//���� ��(NW)
		r=row-1;
		c=col-1;
		
		while(r>=0 && c>=0 && board[r][c]!= EMPTY && board[r][c]!= disc){
			r--;
			c--;
		}
		if(r>=0 && c>=0 && board[r][c]==disc){
			for(int i=row-1,j=col-1;j>r && j>c;i--,j--){
				if(board[i-1][j-1]==disc){
					return true;
				}
			}
		} 
		
		//������(E) 
		r=row;
		c=col+1;
		
		while(c<SIZE && board[r][c]!= EMPTY && board[r][c]!= disc){
			c++;
		}
		if(c<SIZE && board[r][c]==disc){
			for(int j=col+1;j<c;j++){
				if(board[row][j+1]==disc){
					return true;
				}
			}
		}
		
		//������ ��(NE) 
		r=row-1;
		c=col+1;
		
		while(r>=0 && c<SIZE && board[r][c]!= EMPTY && board[r][c]!= disc){
			r--;
			c++;
		}
		if(r>=0 && c<SIZE && board[r][c]==disc){
			for(int i=row-1,j=col+1;j>r && j<c;i--,j++){
				if(board[i-1][j+1]==disc){
					return true;
				}
			}
		}
	}
	return false;
}
