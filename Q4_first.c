#include "Q4_transpose1.h"

void function1(int arr[5][5],int row,int col){
	int trans[5][5];
	for(int i=0;i<row;i++){
		for(int j=0;j<4;j++){
			trans[i][j]=arr[j][i];
		}
	}
	printf("Transpose of matrix \n" );
	for(int i=0;i<col;i++){
		for(int j=0;j<row;j++){
			printf("%d ",trans[i][j] );
		}
		printf("\n");
	}
}