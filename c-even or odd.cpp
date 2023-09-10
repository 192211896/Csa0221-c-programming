#include<stdio.h>
int maain()
{
	int n,even=0,odd=0,a[1000],i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the %d numberof elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i%2==0)
		{
			even=even+a[i];
		}
		else
		{
			odd=odd+a[i];
		}
	}
	printf("\n sum of even numbers:%d",even);
	printf("\n sum of odd numbers:%d",odd);
	return 0;
}
