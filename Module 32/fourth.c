#include<stdio.h>

void printNto1(int n)
{
    if (n==0) return 0;

    printf("%d ",n);
    printNto1(n-1);

}

int main()
{
    int n,m;
    scanf("%d",&n);
    printNto1(n);

    return 0;
}
