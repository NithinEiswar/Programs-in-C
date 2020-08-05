#include<stdio.h>
int main()
{int a,i,prod;
 prod=1;
 printf("enter a number");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
 {
 prod*=i;
  
 }
  printf("factorial of %d is %d",a,prod); 
}
