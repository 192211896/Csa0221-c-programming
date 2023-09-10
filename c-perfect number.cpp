#include<stdio.h>
int main()
{
int i,n,sum=0,rem;
printf("Enter the number :");
scanf("%d",&n);

for(i=1;i<n;i++)
{
rem=n%i;
if(rem==0)

 {
 	sum=sum+i;
  }
}
if(sum==n)
printf("it is a perfect number :");
else
printf("It is nt aperfect number");
return 0;
}
