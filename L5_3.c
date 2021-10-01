#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the values of a , b, c and d\n");
	scanf("%d %d %d %d", &a,&b,&c,&d);
	if(a>b>c>d || b>a>c>d || a>b>d>c || b>a>d>c){
		printf("%d\n",a+b);
	}
	if(a>c>b>d || c>a>b>d || a>c>d>b || c>a>d>b){
		printf("%d\n",a+c);
	}
	if(a>d>b>c || a>d>c>b || d>a>b>c || d>a>c>b){
		printf("%d\n",a+d);
    }
	if(b>d>c>a || b>d>a>c || d>b>c>a || d>b>a>c){
		printf("%d\n",d+b);
    }
	if(b>c>a>d || b>c>d>a || c>b>a>d || c>b>d>a){
		printf("%d\n",c+b);
    }
	if(c>d>a>b || c>d>b>a || d>c>a>b || d>c>b>a){
		printf("%d\n",d+c);
    }
    return 0;
}