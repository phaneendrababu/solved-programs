#include <stdio.h>

int main() 
{
	int n,i,j,k=0,z,pro;
	scanf("%d",&n);
	pro=n*(n+1);
	for(i=1;i<=n;i++)
	{
	    for(j=1;j<=2*(i-1);j++)
	    {
	        printf(" ");
	    }
	    for(j=n;j>=i;j--)
	    {
	       printf("%d",++k);
	       printf("*");
	    }
	    for(j=n;j>=i;j--)
	    {
	        --pro;
	    }
	    z=pro;
	    for(j=n;j>=i;j--)
	    {
	        printf("%d",++z);
	        if(i!=j)
	        {
	           printf("*");
	        }
	    }
	        printf("\n");
	 }
	
}

/*
n=3

1*2*3*10*11*12
  4*5*8*9
    6*7
*/

/*
n=4
1*2*3*4*17*18*19*20
  5*6*7*14*15*16
    8*9*12*13
      10*11
*/