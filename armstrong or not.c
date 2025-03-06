#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,f,c=0,s=0,j;
	printf("Enter a number:");
	scanf("%d",&n);
	int a=n,b=n;
	while(a!=0)
	{
		r=a%10;
		c++;
		a=a/10;
	}
	while(b!=0)
	{
		r=b%10;
		b=b/10;
		f=pow(r,c);
		s+=f;
	}
	if(s==n)
	printf("It is an armstrong number",n);
	else
	printf("It is not an armstrong number",n);
	return 0;
}
