
#include<stdio.h>

int sumfun(int arr[], int n)
{

    if (n <= 0) return 0;

    return (sumfun(arr, n - 1) + arr[n - 1]%10);

}

int main()
{
    int n,m;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum=sumfun(arr,n);
    printf("%d",sum);
    return 0;
}
