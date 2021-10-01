#include "Q4_transpose2.h"
void function2(int (*arr1)[5], int row,int col){
	int i,j;
	int trans[5][5];

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			trans[j][i]=(*arr1)[j];
		}
		arr1++;
	}
	printf("Transpose using pointers \n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("%d ",trans[i][j] );
		}
		printf("\n");
	}
}
