#include<stdio.h>
int main()
{
    char s[10000];
    gets(s);
    int l=strlen(s);
    int sum=0,flag=0,i;

    for(int i=0; i<l; i++)
    {
        sum+= (s[i]-96);
    }

    for(i=0; i<l; i++)
    {
        if(sum==(pow(2,i)))
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("YES\n");
        printf("cost 2^%d",i);
    }
    else
    {
        printf("No\n");
    }

    return 0;
}
