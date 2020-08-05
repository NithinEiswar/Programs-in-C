#include<stdio.h>
int main()
{int i,j,k,n,m=1;
 printf("enter number of lines");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {for(j=1;j<=i;j++)
  {printf("  ");
  }
  for(k=((2*n)-1);k>=m;k--)
  {printf(" *");
   
  }
  m=m+2;
  printf("\n");
 }
 
 
}
