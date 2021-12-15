#include<stdio.h>
int main()
{
    int n,x,temp,sum=0;
    printf("Enter the number you want to check");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        x=temp%10;
        sum=sum+x*x*x;
        temp=temp/10;
    }
    printf("%d ",sum);
    if(n==sum)
    {
        printf("The number is armstrong number %d ",sum);
    }
    else
        printf("the number is not arm strong ");
}
