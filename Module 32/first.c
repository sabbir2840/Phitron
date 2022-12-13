#include<stdio.h>

int powerfun(int n, int m)
{
    if(m==0) return 1;

    return n*powerfun(n,m-1);
}

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int res=powerfun(n,m);
    printf("%d",res);
    return 0;
}
