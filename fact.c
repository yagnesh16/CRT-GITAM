//Find the factorial of a given number
#include<stdio.h>
int main()
{
	int n,i,mul=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	printf("%d\n",mul);
	return 0;
	
}
