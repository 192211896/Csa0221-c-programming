#include<stdio.h>
int main()
{
	int n,originalnum,reverse=0,remainder;
	printf("enter the n value:");
	scanf("%d",&n);
	originalnum=n;
	while(n!=0)
	{
		remainder=n%10;
		reverse=reverse+10*remainder;
		n=n/10;
	}
	if(n==0)
	printf("it is an palindrome");
	else
	printf("it is not palindrome");
	return 0;
}
