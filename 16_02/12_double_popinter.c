#include<stdio.h>
 int main()
{
	int a, *p1, **p2;
    	a=65;
    	p1=&a;
    	p2=&p1;
 	 printf("a = %d\n", a);
    	printf("address of a = %p\n", &a);
    	printf("p1 = %d\n", p1);
    	printf("address p1 = %p\n", &p1);
    	printf("*p1 = %d\n", *p1);
    	printf("p2 = %d\n", p2);
    	printf("*p2 = %d\n", *p2);
    	printf("**p2 = %d\n", **p2);
 
	return 0;
}
