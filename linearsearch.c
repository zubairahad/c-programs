#include<stdio.h>
int main()
{
    int arr[10],i,temp,flag=0;
    printf("enter the elements of array");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to search");
    scanf("%d",&temp);
    for(i=0;i<10;i++)
    {
        if(arr[i]==temp)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("elemnt is found %d",temp);
    }
    else
        printf("element is not found");
}
