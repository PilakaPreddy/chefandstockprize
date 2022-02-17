#include<stdio.h>
void main()
{
	int rev=0,n,rem,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		sum=sum+rem;
		
	}
	printf("number after reversing is %d\n",rev);
	printf("sum is %d",sum);
	
}
