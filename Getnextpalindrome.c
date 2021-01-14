#include<stdio.h>



int getNextpalindrome(int n)
{
    int ans =1,digits,rev=0,number;

    if (n<10)
    {
        ans=0;
        return n;
    }
    number=n;
    while(ans!=0)
    {
        rev=0;
        digits=0;
        n=number;
        while(n>0)
        {
            digits=n%10;
            rev=rev*10+digits;
            n=n/10;
        }
        if(rev==number)
        {
            ans=0;
            return number;
        }
        else
            ans=1;
            number++;
    }
    return number;
}

int main()
{
    int n;

    printf("Enter The Number  : ");
    scanf("%d",&n);
    if(n>0);
    {
        printf("%d",getNextpalindrome(n));
    }
}

