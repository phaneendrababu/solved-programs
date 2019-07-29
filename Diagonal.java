
package basics;
import java.io.*;
import java.util.*;
class Diagonal 
{
	public static void main (String[] args) 
	{
		int n,i,j,k,x,c,y,t;
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		for(i=0;i<t;i++)
		{
		    n=sc.nextInt();
		    int a[][]=new int[n][n];
		    for(j=0;j<n;j++)
		    {
		        for(k=0;k<n;k++)
		        {
		            a[j][k]=sc.nextInt();
		        }
		    }
		    
		    /*for(j=0;j<n;j++)
		    {
		        for(k=0;k<n;k++)
		        {
		            System.out.print(a[j][k]+" ");
		        }
		        System.out.println();
		    }*/
		    
		   for(j=0;j<(2*n-1);j++)
		   {
		       if(j<=n-1)
		       {
		           x=j;
		           for(k=0;k<j+1;k++)
		           {
		               System.out.print(a[k][x--]+" ");
		           }
		           //System.out.println();
		       }
		       if(j>n-1)
		       {
		           //x=(2*n)-j-1;
		           x=n;
		           c=j-(n-1); 
		           for(k=c;k<n;k++)
		           {
		               System.out.print(a[k][--x]+" ");
		           }
		           //System.out.println();
		       }
		   }
		   System.out.println();
		}
	}
}
