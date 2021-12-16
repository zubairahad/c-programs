#include<stdio.h>
int main()
{
    int x,y,i,sum;
    printf("enter the number");
    scanf("%d",&x);
    printf("enter the exponent");
     scanf("%d",&y);
    sum=1;
    for(i=1;i<=y;i++)
    {
        sum=sum*x;
    }
    printf("%d ",sum);
}

