#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i=0,count=0;
    printf("enter the first string");
    gets(str1);
    printf("enter the second string");
    gets(str2);
    printf("the first string is... \t");
    puts(str1);
     printf("the second string is... \t");
    puts(str2);
    while(str1[i]!='\0')
    {
        count=count+1;
        i++;

    }
    str1[count]='  ';
    count++;
    i=0;
    while(str2[i]!='\0')
    {
        str1[count]=str2[i];
        i++;
        count++;
    }
    str1[count]='\0';
     printf("\n Now the first string is... \t");
    puts(str1);
     printf("\n Now the second string is... \t");
    puts(str2);
}
