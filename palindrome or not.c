#include<stdio.h>
int main()
{
	int n,reverse=0,original,digit;
	printf("Enter n=");
	scanf("%d",&n);
	original=n;
	while(n>0)
	{
		digit=n%10;
		reverse=reverse*10+digit;
		n=n/10;
}
	if(original==reverse)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}
