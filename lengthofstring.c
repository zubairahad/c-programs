#include<stdio.h>
int main()
{
    int x=0,i=0;
    char str[20];
    gets(str);
    printf("print the string \n ");
    puts(str);
    while(str[i]!='\0')
    {
        x=x+1;
        i++;
    }
    printf("the length of string is... %d",x);
}
