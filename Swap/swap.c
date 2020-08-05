#include<stdio.h>
int main()
{int a,b,temp;
 printf("enter 2 nos a and b");
 scanf("%d%d",&a,&b);
 temp=a;
 a=b;
 b=temp;
 printf("a and b are respectively(after swapping) %d %d",a,b);
}
