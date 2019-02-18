#include <stdio.h>
int isprime(int k)
{
    int i,j,flag=0;
    for(i=2;i<=k/2;i++)
    {
        if(k%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main() 
{
	int t,n,c1,c2,flag,i,j;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=3;i<n;i++)
	    {
	        c1=isprime(i);
	        c2=isprime(n-i);
	        if(c1==1&&c2==1)
	        {
	            printf("%d %d",i,n-i);
	            break;
	        }
	    }
	    printf("\n");
	}
	return 0;
}