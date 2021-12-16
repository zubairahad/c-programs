#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(num==sum)
    {
        printf("the number is perfect  %d ",sum);
    }
    else
        printf("the number is not perfect");
}
