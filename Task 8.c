#include<stdio.h>
 int main()
 {
     int i,n,sum=0;
     i=1;
     printf("Enter the number");
     scanf("%d",&n);
     while(i<=n)
     {
       sum=sum+i;
       i=i+2;
     }
      printf("%d",sum);
     return 0;

 }
