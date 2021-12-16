#include<stdio.h>
int main()
{
    int num,i,sum=1;
    printf("enter the number");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        sum=sum*i;
    }
    printf(" %d ",sum);
}
