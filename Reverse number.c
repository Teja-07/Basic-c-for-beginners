/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,rev=0,remainder;
    printf("Enter the numbers to be insert:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10+remainder;
        n/=10;
        printf("Reversed number=%d",rev);
    }
    return 0;
}
