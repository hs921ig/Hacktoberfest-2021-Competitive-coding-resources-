#include <stdio.h>

int main() {
	int a,b;
	scanf("Enter value of a:%d",&a);
	scanf("Enter value of a:%d",&b);
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
	return 0;
}