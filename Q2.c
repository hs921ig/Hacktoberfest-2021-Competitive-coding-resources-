#include<stdio.h>
#include<stdlib.h>
//Armstrong Number
int main(int argc,char* argv[]){
    int n=atoi(argv[1]),m=n,r=0;
    while(m>0){
        r+=(m%10)*(m%10)*(m%10);
        m/=10;
    }
    printf((n==r)?"YES":"NO");
}
