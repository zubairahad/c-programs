#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("enter the number");
    scanf("%d ",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("the number is not prime");
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("the number is prime");
    }
}
