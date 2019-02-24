int max(int x,int y)
{
    return ((x>y)?x:y);
}
int main() 
{
	int a[1000000];
	int i,j,k,n,z,t,f_max,c_max;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    for(i=1;i<=n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    f_max=a[1];
	    c_max=a[1];
	    for(i=2;i<=n;i++)
	    {
	        c_max=max(a[i],a[i]+c_max);
	        f_max=max(c_max,f_max);
	    }
	    
	    printf("%d",f_max);
	    printf("\n");
	}
	return 0;
}
