#include<stdio.h>
int main()
{
    char ztr[10];
    char xtr[10];
    char ptr[10]="zubair";               //instialisation
    char str[10]={'z','u','b','i','\0'}; //instialisation
   printf("%s \n",str);
   printf("%s \n",ptr);
   scanf("%[^\n]",&ztr);     //dynamic instiallisation
   printf("%s \n",ztr);
    gets(xtr);          //gets character during runtime
    puts(xtr);        // puts the character
}
