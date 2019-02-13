#include<stdio.h>
int main()
{
	int i,j,n,a[1000],res,ans,t;
	scanf("%d",&t);
	while(t)
	{
	    ans=1;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
		    scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
		    ans=ans*a[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        res=ans-(ans*(a[i]-1)/(a[i]));
	        printf("%d ",res);
	    }
	    t--;
	    printf("\n");
	}
	return 0;
}