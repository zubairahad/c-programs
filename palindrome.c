#include<stdio.h>
int main()
{
    int n,temp,x,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        x=temp%10;
        sum=sum*10+x;
        temp=temp/10;
    }
    printf("%d ",sum);
    if(n==sum)
    {
        printf("the number is palindrome");
    }


}
