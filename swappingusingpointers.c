#include<stdio.h>
int main()
{
   int i,j,temp;
   int *prt1,*prt2;
   printf("Enter the values of i and j\n");
   scanf("%d%d",&i,&j);
   prt1=&i;
   prt2=&j;
   temp=*prt1;
   *prt1=*prt2;
   *prt2=temp;
   printf("The swapped values are i=%d,j=%d",i,j);
   return 0;
}
