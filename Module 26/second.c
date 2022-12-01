
#include<stdio.h>

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int bubblesort(int n, int *arr )
{
    int temp=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {

            if(*(arr+j)> *(arr+j+1))
            {
                swap((arr+j), (arr+j+1) );

            }
        }
    }
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

    bubblesort(n,arr);

    printf("After sort: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }



    return 0;
}
