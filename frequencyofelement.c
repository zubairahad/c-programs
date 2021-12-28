#include<stdio.h>
int main()
{
    int arr[10],i,x,count=0;
    printf("enter the array elements");
      for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to search \n");
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
    }
    printf("%d is %d times prsent in array",x,count);
}
