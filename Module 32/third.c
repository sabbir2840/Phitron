#include<stdio.h>

void print1toN(int n)
{
    if (n==0) return 0;

    print1toN(n-1);
    printf("%d ",n);

}

int main()
{
    int n,m;
    scanf("%d",&n);
    print1toN(n);

    return 0;
}
