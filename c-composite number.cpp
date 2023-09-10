#include<stdio.h>
int main()
{
int i,n,a[100],count=0;
printf("Enter the size :");
scanf("%d",&n);
printf("Enter the elements :\n");

for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	
}

for(i=0;i<n;i++)

	if (a[i]==0)
	{
      	continue;
 	}
 	else if(a[i]%2==0)
 	{
 		count++;
	 }
	if(count>2)
	{
		printf("compsite numbers are %d\n",count);
		
	}
	 
	 
	 
	 
	 return 0;
}



