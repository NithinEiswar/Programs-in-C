#include<stdio.h>
int sum(int n)
{if(n<=1)
 return 1;
 else
 return (n+sum(n-1));
}
int main()
{int a,add;
 printf("enter upto which number");
 scanf("%d",&a);
 add=sum(a);
 printf("sum is %d",add);
}
