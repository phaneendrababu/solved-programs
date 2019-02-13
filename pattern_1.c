#include <stdio.h>

int main() 
{
	int n,i,j,k=0,z;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(i%2==1)
	    {
	        for(j=1;j<=i;j++)
	        {
	            printf("%d",++k);
	            if(i!=j)
	            {
	                printf("*");
	            }
	        }
	        printf("\n");
	    }
	    else
	    {
	        for(j=1;j<=i;j++)
	        {
	            ++k;
	        }
	        z=k;
	        for(j=1;j<=i;j++)
	        {
	            printf("%d",z--);
	            if(i!=j)
	            {
	                printf("*");
	            }
	        }
	        printf("\n");
	    }
	}
	
}

/*
n=4

1
3*2
4*5*6
10*9*8*7

*/

/*
n=5

1
3*2
4*5*6
10*9*8*7
11*12*13*14*15

*/









