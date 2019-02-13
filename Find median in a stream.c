#include <stdio.h>
int main() 
{
	int i,j,n,a[100000],median,k,l,temp;
	median=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		 scanf("%d",&a[i]);
	}
	if(n==1)
	{
	    printf("%d",a[0]);
	}
	else
	{
	    printf("%d\n",a[0]);
	    for(i=1;i<n;i++)
	    {
	        k=i;
	        a[k]=a[i];
	        k=k+1;
	        for(j=0;j<k-1;j++)
	        {
	            if(a[i]>a[j])
	            {
	                temp=a[i];
	                a[i]=a[j];
	                a[j]=temp;
	            }
	        }
	        k--;
	        if(k%2==0)
	        {
	            median=a[k/2];
	            printf("%d\n",median);
	        }
	        else
	        {
	            median=(a[k/2]+a[(k/2)+1])/2;
	            printf("%d\n",median);
	        }
	    }
	    
	}
	return 0;
}