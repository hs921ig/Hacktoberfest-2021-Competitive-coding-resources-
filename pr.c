#include <stdio.h>
int main(){
    int a = 0, b = 0, c = 0, d = 0;
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("enter the value of b\n");
    scanf("%d", &b);
    printf("enter the value of c\n");
    scanf("%d", &c);
    printf("enter the value of d\n");
    scanf("%d", &d);
 
    int max_sum = 0;
    max_sum = a + b;
    if (max_sum < a + c)
        max_sum = a + c;
    if (max_sum < a + d)
        max_sum = a + d;
    if (max_sum < b + c)
        max_sum = b + c;
    if (max_sum < b + d)
        max_sum = b + d;
    else if (max_sum < c + d)
        max_sum = c + d;
printf("the sum of 2 largest number = %d\n", max_sum);
  return 0;
}
