#include<stdio.h>
float area_circle(int r)
{
    float p=3.1416;
    float res= p*(r*r);
    return res;

}

int main()
{
    int r;
    printf("Enter radius: ");
    scanf("%d",&r);

    printf("%.3f",area_circle(r));
    return 0;
}
