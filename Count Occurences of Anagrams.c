#include <stdio.h>
#include <string.h>
int main() 
{
	int i,j,k,t,x,c1[50],a1[50],temp,count,count1;
	char s[50],c[50];
	scanf("%d",&t);
	while(t)
	{
	    count1=0;
	    scanf("%s",s);
	    scanf("%s",c);
	    for(i=0;i<strlen(c);i++)
	    {
	        c1[i]=c[i];
	    }
	    
	    for(i=0;i<strlen(c);i++)
	    {
	        
	        for(j=0;j<strlen(c)-1;j++)
	        {
	            if(c1[j]>c1[j+1])
	            {
	                temp=c1[j];
	                c1[j]=c1[j+1];
	                c1[j+1]=temp;
	            }
	        }
	    }
	    /*for(i=0;i<strlen(c);i++)
	    {
	        printf("%d ",c1[i]);
	    }*/
	    for(i=0;i<strlen(s);i++)
	    {
	        x=0;count=0;
	        for(j=i;j<i+strlen(c);j++)
	        {
	            a1[x++]=s[j];
	        }
	        for(j=0;j<strlen(c);j++)
	        {
	            for(k=0;k<strlen(c)-1;k++)
	            {
	                if(a1[k]>a1[k+1])
	                {
	                    temp=a1[k];
	                    a1[k]=a1[k+1];
	                    a1[k+1]=temp;
	                }
	            }
	        }
	        for(j=0;j<strlen(c);j++)
	        {
	            if(a1[j]==c1[j])
	            {
	                count++;
	            }
	        }
	        if(count==strlen(c))
	        {
	            count1++;
	        }
	        
	    }
	    printf("%d",count1);
	    t--;
	    printf("\n");
	}
	return 0;
}