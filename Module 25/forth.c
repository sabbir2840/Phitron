
#include<stdio.h>

int print_num(int n)
{
    if(n<=0)
        return 1;
    else
    printf("%d ",n);
    print_num(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    print_num(n);
    return 0;
}
