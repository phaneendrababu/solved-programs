#include <stdio.h>
int main() 
{
	int i,j,k,t,a[100],max,n,index,count,max1;
	scanf("%d",&t);
	while(t)
	{
	    max=0;index=0,count=0;max1=0;
	    scanf("%d",&n);
	    for(i=1;i<=n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    i=1;
	    while(i<=n)
	    {
	        k=i;
	        j=i;
	        max1=0;
	        while((j<=n)&&(a[j]>=0))
	        {
	            max1=max1+a[j];
	            i++;
	            j++;
	        }
	        if(max1>=max)
	        {
	            index=k;
	            count=j-1;
	            max=max1;
	        }
	        i++;
	    }
	    for(j=index;j<=count;j++)
	    {
	        printf("%d ",a[j]);
	    }
	    printf("\n");
	    t--;
	}
	return 0;
}