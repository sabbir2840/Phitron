
#include<stdio.h>
int sum(int n, int arr[])
{
    int s=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%10==0)
        {
            s+=arr[i];
        }
    }
    return s;

}

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Sum is: %d ",sum(n,arr));

    return 0;
}
