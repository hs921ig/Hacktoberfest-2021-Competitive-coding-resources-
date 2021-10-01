#include <stdio.h>

int linearsearch(int n,int x,int a[]){
	int t=0,i;
	for(i=0;i<n;i++){
		if(a[i]==x){
			return i;
			t++;
		}
	}
	if(t==0){
		return -1;
	}
}

int binarySearch(int n,int x,int b[]){
	int t=0;
	int l=1,u=n-1;
	int mid;
	while(l<=u){
		mid=(l+u)/2;
		if(b[mid]==x){
			return mid;
			t++;
			break;
		}
		else if(x>b[mid]){
			l=mid+1;
		}
		else if (x<b[mid]){
			u=mid-1;
		}
	}
	if(t==0){
		return -1;
	}
}

int bubbleSortDec(int n, int arr[]){
	int i,j,temp=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j] < arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	return 1 ;
}

int main() {
	int n=10,i,j;
	int arr[n],x;
	int number,index;
	while(1){
		printf("Enter 1 for linear Search,2 for Binary Search, 3 for Bubble Sort, 4 to exit");
		scanf("%d",&number);
		if(number==4){
			printf("Bye Bye SearchNSort!" );
			break;
		}
		else{
			for(i=0;i<n;i++){
				scanf("%d",&arr[i]);
			}
			if(number ==1){
				scanf("%d",&x);
				index=linearsearch(10,x,arr);
				if(index==-1){
					printf("Element not found");
				}
				else{
					printf("Element found at %d location\n",index );
				}
			}
			else if(number ==2){
				scanf("%d",&x);
				index=binarySearch(10,x,arr);
				if(index==-1){
					printf("Element not found");
				}
				else{
					printf("Element found at %d location\n",index );
				}
			}
			else{
				index = bubbleSortDec(10,arr);
				for(i=0;i<n;i++){
					printf("%d ",arr[i] );
				}
				printf("\n");
				for(i=n-1;i>=0;i--){
					printf("%d ",arr[i] );
				}
			}
		}
	}
	return 0;
}
