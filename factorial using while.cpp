#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	printf("enter the numbers");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
	     i++;
		
	}
	printf("enter the factorial of %d",fact);
	return 0;
}
