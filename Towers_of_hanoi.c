#include <stdio.h>
int count=0;
void TOH(int n,char disk_1,char disk_2,char disk_3)
{
    if(n==1)
    {
        printf("%c ---> %c\n",disk_1,disk_2);
		count++;
    }
    else
    {
        TOH(n-1,disk_1,disk_3,disk_2);
        printf("%c ---> %c\n",disk_1,disk_2);
        TOH(n-1,disk_3,disk_2,disk_1);
		count++;
    }
    
}
int main() 
{
	int n;
	char disk_1='x';
	char disk_2='y';
	char disk_3='z';
	printf("Enter the no.of disks::");
	scanf("%d",&n);
	TOH(n,disk_1,disk_2,disk_3);
	printf("Total disk movements are::%d",count);
	return 0;
}

/*#include <stdio.h>
void TOH(int n,int x,int y,int z)
{
    if(n==1)
    {
        printf("%d ---> %d\n",x,y);
    }
    else
    {
        TOH(n-1,x,z,y);
        printf("%d ---> %d\n",x,y);
        TOH(n-1,z,y,x);
    }
    
}
int main() 
{
	int n;
	printf("Enter the no.of disks::");
	scanf("%d",&n);
	TOH(n,1,2,3);
	return 0;
}
*/