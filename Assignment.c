#include<stdio.h>
#include<conio.h>
int lsearch(int[]);
int bsort(int[]);
int farray(int[]);
int fearray(int[]);
int rarray(int[]);
int ssort(int[]);

int main()
{
    int arr[10],i,n,c;
    printf("enter the array elements \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    do{
        printf(" Enter 1 for linear search \n");
        printf(" Enter 2 for bubble sort \n");
        printf(" Enter 3 for frequency of element \n");
        printf(" Enter 4 for frequency of every element \n");
        printf("Enter 5 for reverse of array \n");
        printf(" Enter 6 for selection sort \n ");
        printf("enter the choice ");
        scanf("%d",&n);
        if(n==1)
		lsearch(arr);

		else if(n==2)
		bsort(arr);

		else if(n==3)
		farray(arr);
		else if(n==4)
		fearray(arr);
		else if(n==5)
		rarray(arr);
		else if(n==6)
		ssort(arr);
	printf(" Enter 1 if you want continue");
    scanf("%d",&c);
    }while(c==1);
}

// linear search
int lsearch(int brr[])
{
    int flag,temp,i,j;
      printf("enter the element you want to search");
    scanf("%d",&temp);
    for(i=0;i<10;i++)
    {
        if(brr[i]==temp)

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
//bubble sort

 int bsort(int brr[])
{
    int i,j,temp;
     for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-1-i;j++)
        {
            if(brr[j]>brr[j+1])
            {
                temp=brr[j];
                brr[j]=brr[j+1];
                brr[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d \t",brr[i]);
    }
}

// frequency of array
int farray(int brr[])
{
    int x,i,count=0;
      printf("enter the element you want to search \n");
    scanf("%d",&x);
    for(i=0;i<10;i++)
    {
        if(brr[i]==x)
        {
            count++;
        }
    }
    printf("%d is %d times prsent in array",x,count);
}

//frequency of every elemnet
int fearray(int brr[])
{
    int i,j,k,f,count;
     for(i=0;i<10;i++)
    {
        f=0;
      for(k=0;k<i;k++)
      {
          if(brr[i]==brr[k])
          {
            f=1;
          }
      }
      if(f!=1)
      {
          count=0;
          for(j=i;j<10;j++)
          {
              if(brr[i]==brr[j])
              {
               count++;
              }
          }
          printf("arr[%d] is present %d times \n",brr[i],count);
      }
    }
}
// reverse of array
int rarray(int brr[])
{
    int j,i,temp;
     j=0;
    for(i=10;i=10/2;i--)
    {
        temp=brr[i];
        brr[i]=brr[j];
        brr[j]=temp;
        j++;

    }
    printf("updated \n");
      for(i=0;i<10;i++)
    {
        printf("%d ",brr[i]);
    }
}

// selection sort
int ssort(int brr[])
{
    int i,j,temp;
     for(i=0;i<=10;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            if(brr[i]>brr[j])
            {
               temp=brr[i];
               brr[i]=brr[j];
               brr[j]=temp;
            }
        }
    }
     printf("array is  \n");
      for(i=0;i<10;i++)
    {
        printf("%d ",brr[i]);
    }
}
