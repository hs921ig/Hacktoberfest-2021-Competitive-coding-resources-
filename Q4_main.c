#include <stdio.h>
#include "Q4_transpose1.h"
#include "Q4_transpose2.h"

int main(){
	int arr[5][5];
	int i,j,row,col;
	printf("Enter rows\n" );
	scanf("%d",&row);
	printf("Enter col\n");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Initial matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	function1(arr,row,col);
	function2(arr,row,col);
	return 0;
}

