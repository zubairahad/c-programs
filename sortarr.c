#include<stdio.h>
int main()
{
    int arr[10],i,j;
    int count,temp;
    printf("enter the element of array");
   for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<=9;i++)
    {

        printf("%d",arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }

 for(i=0;i<=11;i++)
 {
     count=1;
     for(j=i+1;j<=10;j++)
     {
         if(arr[i]==arr[j])
         {
         count++;
         i++;
     }
     else if(arr[i]!=arr[j])
     {
         printf("\n");
         printf("%d \t",arr[i]);
         printf("%d",count);
         break;
     }

 }
 }
}
