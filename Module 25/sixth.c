
#include<stdio.h>


int main()
{
    int a,b,c;
    int *p;
    int *q;
    int *r;
    p=&a;
    q=&b;
    r=&c;
    scanf("%d",p);
    scanf("%d",q);
    scanf("%d",r);

    printf("%d",a+b+c);
    return 0;
}
