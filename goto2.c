#include<stdio.h>
int main()
{
	int n,sum=0,r;
	scanf("%d",&n);
	a:
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum>9)
	{
		n=sum;
		sum=0;
		goto a;
	}
	printf("%d",sum);
 return 0;
}
