#include <stdio.h>

int main() 
{
	int a[20][20],b[20][20],i,j,n;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++)
	{
	    for(j=0;j<2*n-1;j++)
	    {
	        a[i][j]=n;
	        b[i][j]=n;
	    }
	}
	for(i=1;i<n;i++)
	{
	    for(j=0;j<2*n-1;j++)
	    {
	        b[i][j]=a[i-1][j];
	    }
	    for(j=i;j<(2*n-1)-i;j++)
	    {
	        b[i][j]=b[i][j]-1;
	    }
	    for(j=0;j<2*n-1;j++)
	    {
	        a[i][j]=b[i][j];
	    }
	}
	for(i=n;i<2*n-1;i++)
	{
	    for(j=0;j<2*n-1;j++)
	    {
	        b[i][j]=a[i-1][j];
	    }
	    for(j=((2*n-1)-i);j<i;j++)
	    {
	        b[i][j]=b[i][j]+1;
	    }
	    for(j=0;j<2*n-1;j++)
	    {
	        a[i][j]=b[i][j];
	    }
	}
	for(i=0;i<2*n-1;i++)
	{
	    for(j=0;j<2*n-1;j++)
	    {
	        printf("%d",a[i][j]);
	    }
	    printf("\n");
	}
}


/*
n=4
      Output :
       4444444
       4333334
       4322234
       4321234
       4322234
       4333334
       4444444

n=3
        Output :
         33333
         32223
         32123
         32223
         33333
*/