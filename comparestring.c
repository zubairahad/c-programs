#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i=0,f=0;
    printf("enter the first string");
    gets(str1);
    printf("enter the second string");
    gets(str2);
    printf("the first string is... \t");
    puts(str1);
     printf("the second string is... \t");
    puts(str2);

    while(str1[i]!='\0' || str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            f=1;
            break;
        }
        i++;
    }
    if(f==0)
    {
        printf("the strings are identical");
    }
    else
        printf("the strings are not identical");
}
