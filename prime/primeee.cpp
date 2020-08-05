#include<stdio.h>
int main()
{
 int a,i,j,k,l,sum1,sum=2;
 for(i=3;i<1000;i++)
 {
      sum1=0;
      for(j=2;j<i;j++)
            {   if(i%j==0)
                   {
				      sum1++;
                   }
             }
  if(sum1==0)
  {
     sum+=i;
     k=0;
     for(l=2;l<sum;l++)
     {
          if(sum%l==0)
           {
		      k++;
	       }
    }
     if(k==0)	 
     {
     printf("sum is %d\n",sum);
	 }
  }
} 
}

