#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter 4 no.s :\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int max1=a;
	if(b>max1)
		max1=b;
	if(c>max1)
		max1=c;
	if(d>max1)
		max1=d;
	int p=max1-a,q=max1-b,r=max1-c,s=max1-d;
	int min=p;
	if(q<min && q!=0)
		min=q;
	if(r<min && r!=0)
		min=r;
	if(s<min && s!=0)
		min=s;
	int max2=max1-min;
	printf("\n%d + %d = %d\n",max2,max1,max1+max2);
	return 0;
}