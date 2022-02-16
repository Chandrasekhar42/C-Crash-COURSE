#include<stdio.h>
void calbyref(int *a,int *b);
void calbyval(int a ,int b);
int main()
{
	int a=5,b=6;
	printf("Initial values of a = %d, b = %d\n",a,b);
        calbyval(a,b);
        printf("after swapping through call by value a = %d b = %d\n",a,b);
	calbyref(&a,&b);
        printf("after swapping through call by value a = %d b = %d\n",a,b);
}
 
void calbyval(int a ,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void calbyref(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
