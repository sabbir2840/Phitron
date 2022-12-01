#include<stdio.h>
float avg(int *x, int *y)
{
    float r=*x+*y;
    return r/2;
}

int main()
{
    int a, b;
    int *p;
    int *q;
    p=&a;
    q=&b;
    scanf("%d %d",p,q);
    float res= avg(p,q);
    printf("%.2f",res);

    return 0;
}
