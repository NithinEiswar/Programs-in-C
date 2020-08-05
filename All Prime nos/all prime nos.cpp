#include<stdio.h>
int main()
{int a,i,j,sum;
 printf("enter upto which number");
 scanf("%d",&a);
 printf("2\n");
 for(i=3;i<=a;i++)
 {
 sum=0;
 for(j=2;j<i;j++)
 {if(i%j==0)
  {
  sum++;
  break;
  }
 }
 if(sum==0)
 {printf("%d",i);
  printf("\n");
 }
}
}
