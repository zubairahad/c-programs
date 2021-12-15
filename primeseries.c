#include<stdio.h>
int main()
{
    int i,m,f,l,j,flag;
    printf("enter the range");
    scanf("%d",&f);
    scanf("%d",&l);

    for(i=f;i<=l;i++)
    {
        flag=0;

    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d ",i);
    }
    }
}
