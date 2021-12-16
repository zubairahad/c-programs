#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,fi,li,sum;
 printf("enter the first number");
 scanf("%d",&fi);
 printf("enter the last number");
 scanf("%d",&li);
 for(i=fi;i<=li;i++)
 {
  sum=0;
  for(j=1;j<i;j++)
  {
    if(i%j==0)
    {
     sum=sum+j;
    }
   }
   if(sum==i)
   {
    printf("%d ",sum);
   }
 }
 getch();
}