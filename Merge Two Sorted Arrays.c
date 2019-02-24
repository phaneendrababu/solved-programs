#include <stdio.h>
int main() 
{
	int l[100000],r[100000];
	int i,j,k,m,n,x,t;
	scanf("%d",&t);
	while(t--)
	{
	    x=0;
	    scanf("%d %d",&m,&n);
	    for(i=1;i<=m;i++)
	    {
	        scanf("%d",&l[i]);
	    }
	    for(i=1;i<=n;i++)
	    {
	        scanf("%d",&r[i]);
	    }
	    k=m+n;
	    i=1;
	    j=1;
	    while(k--)
	    {
	        if(i>m)
	        {
	            printf("%d ",r[j]);
	            j++;
	        }
	        else if(j>n)
	        {
	            printf("%d ",l[i]);
	            i++;
	        }
	        else
	        {
	            if(l[i]<r[j])
	            {
	                printf("%d ",l[i]);
	                i++;
	            }
	            else
	            {
	                printf("%d ",r[j]);
	                j++;
	            }
	        }
	    }
	    printf("\n");
	}
	return 0;
}