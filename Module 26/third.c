#include<stdio.h>
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

    printf("Printing using pointer: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(arr+i));
    }

    return 0;
}
