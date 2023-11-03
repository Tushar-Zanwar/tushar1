#include<stdio.h>
int main()
{
    int a,b,c,i,j,t;
    do{
        printf("Initial value:");
        scanf("%d",&i);
    }
    while (i<=8);
    do{
        printf(" Final value:");
        scanf("%d",&j);
    }
    while (j<=i);
    t=0;
    a=1;
    while(a<=j){    
        b=i/3;
        c=i/4;
        a=i+b-c;
        i=a;
        t++;
    }
    printf(" Years:%d",t);
}