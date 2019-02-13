#include <stdio.h>

int main() 
{
	int n,a[100][2],b[100][2],i,j,k,temp,counter_max,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i][0]);
	    a[i][1]=0;
	}
	for(i=0;i<n;i++)
	{
	    printf("%d ",a[i][0]);
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(i==(a[j][0]))
	        {
	            a[i][1]=++a[i][1];
	        }
	    }
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
	    max=a[0][1];
	    for(j=0;j<n-1;j++)
	    {
	        if(a[j][1]>max)
	        {
	            max=a[j][1];
	            counter_max=j;
	        }
	    }
	    a[counter_max][1]=0;
	    for(j=0;j<max;j++)
	    {
	        printf("%d ",counter_max);
	    }
	}
}