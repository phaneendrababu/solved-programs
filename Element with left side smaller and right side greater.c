#include<stdio.h>
int main()
{
	int i,j,n,a[1000],count,k,t;
	scanf("%d",&t);
	while(t)
	{
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
	    for(i=1;i<n-1;i++)
	    {
	        count=0;
		    for(j=0;j<i;j++)
		    {
			    if(a[i]<a[j])
			    {
				    //count++;
				    continue;
			    }
			    else
			    {
			        count++;
			    }
		    
		    }
		    for(j=i+1;j<n;j++)
		    {
			    if(a[i]>a[j])
			    {
				    //count++;
				    continue;
			    }
			    else
			    {
			        count++;
			    }
			    
		    }
		    k=count;
		    if(count==n-1)
		    {
			    printf("%d\n",a[i]);
			    break;
		    }
	    }
	    if(k!=n-1)
	    {
	        printf("-1\n");
	    }
	    t--;
	}
}