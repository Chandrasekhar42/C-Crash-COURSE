#include<stdio.h>
#define ON(x,p) x = x | (0x1<<p)
#define OFF(y,p) y = y & ~(0x1<<p)
int main()
       {
          int x,y,p;
          printf("enter the number and which bit to set:");
          scanf("%d%d",&x,&p);
          ON(x,p);
          printf("after setting a bit %d\n",x);
          printf("enter the number and which bit to OFF:");
          scanf("%d%d",&y,&p);
          OFF(y,p);
          printf("after reset a bit  %d\n",y);
          return 0;
        }
