#include<stdio.h>
int main()
{
    int arr[6],i,j,temp;
    printf("enter the elements of array");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
     for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
    j=0;
    for(i=5;i>5/2;i--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;

    }
    printf("updated \n");
      for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}
