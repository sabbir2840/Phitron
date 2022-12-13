#include<stdio.h>

int sumofNaturalN(int n)
{
    if (n==0) return 0;

    return sumofNaturalN(n-1)+n;

}

int main()
{
    int n,m;
    scanf("%d",&n);
    int sum= sumofNaturalN(n);
    printf("%d",sum);

    return 0;
}
