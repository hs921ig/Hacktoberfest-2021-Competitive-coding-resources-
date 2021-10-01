#include <stdio.h>
#include <math.h>

int main() {
	float a,b,c,d,x1,x2;
	printf("Enter value of a:\n" );
	scanf("%f",&a);
	printf("Enter value of b:\n" );
	scanf("%f",&b);
	printf("Enter value of c:\n" );
	scanf("%f",&c);
	d=sqrt(pow(b,2)-(4*a*c));
	x1=(-b+d)/2*a;
	x2=(-b-d)/2*a;
	printf("%f %f\n",x1,x2 );
	return 0;
}