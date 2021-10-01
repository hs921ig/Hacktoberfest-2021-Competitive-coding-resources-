#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the number n:\n");
	scanf("%d",&n);
	int sum=0;
	if(n>=0){
		for(int i=n;i<=2*n;i++){
			sum = sum +i;
		}
	}
	else if(n<0){
		for(int i=3*n;i<=2*n;i++){
			sum = sum +i;
		}
	}
	printf("%d",sum);
	return 0;
}
