#include<stdio.h>
int main()
{
    int i,j,arr[10],temp;
    printf("enter the array element");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array before sort\n");
    for(i=0;i<10;i++)
    {
        printf("%d \t",arr[i]);
    }
    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
      printf("array after sort \n");
    for(i=0;i<10;i++)
    {
        printf("%d \t",arr[i]);
    }

}
