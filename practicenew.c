#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    /* code */
    char s[100],temp;
    printf("Please enter the string : ");
    scanf("%[^\n]s",s); 
    int len = strlen(s);
    for (int i = 0; i < len-1; i++)
    {
        /* code */
        for (int j = i+1; j < len; j++)
        {
            /* code */
            if (s[i] > s[j])
            {
                /* code */
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("%s",s );
    return 0;
}
