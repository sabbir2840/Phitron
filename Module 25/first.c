

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n );
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i] );
    }
    int k,c=0;
    scanf("%d", &k );
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=k){
            c++;
        }
    }
    printf("%d",c);



    return 0;
}
