#include<stdio.h>
int main()
{
	int n,i=1,j,k;
	printf("enter a number");
	scanf("%d",&n);
	j=n+1;
while(i<=n)
{
	while(j>i)
	{
		printf(" ");
		j--;
	}
	j=n;
	k=i;
	while(k<=(2*i-1))
	{
		printf("%d ",k);
		k++;
	}
	k=k-1;
		while(k>i)
		{
		
			printf("%d ",--k);
		
		}

		i++;
	printf("\n");
}
int a,b,c,d;
a=n-1,b=n;
while(a>=1)
{
	while(b>=a)
	{
		printf(" ");
		b--;
	}
	b=n;
	c=a;
	while(c<2*a)
	{
		
		printf("%d ",c);
		c++;
		
	}
	d=2*a-2;
	while(d>=a)
	{
		printf("%d ",d);
		d--;
	}
	a--;
	printf("\n");
}
return 0;
}

