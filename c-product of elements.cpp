#include<stdio.h>
int main()
{
	int n,a[1000];
	int product=1,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\n enter the %delements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		product=product*a[i];
	}
	printf("\nproduct of elements in the array:%d",product);
	return 0;
}
