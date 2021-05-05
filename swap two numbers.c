/******************************************************************************

                            Online C Compiler.int a=10;b=9;temp;
    
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=10,b=9,temp;
    printf("Enter the values:");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d and b=%d",a,b);

    return 0;
}
