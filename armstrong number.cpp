#include<stdio.h>
int main()
{
	int n,originalnum,remainder,result=0;
	printf("enter the n value:");
	scanf("%d",&n);
	originalnum=n;
	while(originalnum!=0)
	{
		remainder=originalnum%10;
		result +=remainder*remainder*remainder;
		originalnum=originalnum/10;
	}
	if(result==n)
	printf("it is an armstrong number");
	else
	printf("it is not armstrong number");
	return 0;
}
