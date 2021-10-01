#include <stdio.h>
#include <math.h>

int main() {
	float x,y;
	printf("Enter value of x:\n" );
	scanf("%f",&x);
	printf("Enter value of y:\n" );
	scanf("%f",&y);
	double pi=3.142;
	double a,b,c,d,e,expr1,expr2;
	a=exp(x)*sin((60*pi)/180);
	b=5.6*pow(10,-5);
	c=3*cos((30*pi)/180);
	expr1=(a+b)/c;
	d=atan(0.33);
	e=(d+pi)/(2*y);
	expr2=sin(e);
	printf("%lf \n %0.9lf\n",expr1,expr2);

   

	return 0;
}
