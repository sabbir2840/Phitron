#include<stdio.h>
#include<string.h>

char case_change(char s[], int l )
{
    char convert[1000];
    for(int i=0; i<l; i++)
    {
        if(s[i]%2==0)
            convert[i]=s[i]-32;
        else
            convert[i]= s[i];
    }

    printf("After change: ");
    for(int i=0; i<l; i++)
    {
        printf("%c",convert[i]);
    }
}

int main()
{

    char s[1000];
    printf("Enter the string in lowercase: ");
    scanf("%s",s);
    int l=strlen(s);

    case_change(s,l );

    return 0;
}

