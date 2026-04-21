#include<stdio.h>
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num>0)
    {
        if(num%2==0)
        {
            printf("the number is positive even number");
        }
        else
        {
            printf("positive odd number");
        }
    }
    else
    {
        printf(" number is negative or zero");
    }
    return 0;
}


/*
output:
enter a number:64
the number is positive even number
*/
