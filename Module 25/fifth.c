#include<stdio.h>

int print_num(int n)
{
    if(n <= 1) {
      return 1;
   }
   return n+print_num(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",print_num(n));
    return 0;
}
