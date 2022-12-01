#include<stdio.h>
int kth_largest(int n, int arr[], int k)
{
    return arr[n-k];

}
int kth_smallest(int n, int arr[], int k)
{
    return arr[k-1];

}

void sort(int n, int arr[])
{
    int temp=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n );
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i] );
    }

    int k;
    scanf("%d", &k );
    sort(n,arr);
    int large= kth_largest(n,arr,k);
    int small= kth_smallest(n,arr,k);

    printf("%dth largest element = %d\n",k,large);
    printf("%dth smallest element = %d\n",k,small);


    printf("Array after implementing bubble sort: ");

    for(int i = 0; i< n; i++){

        printf("%d  ", arr[i]);

    }

    return 0;
}
