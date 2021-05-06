/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int size,i,a[100],big,small;
    printf("Enter the size of an array \n:");
    scanf("%d",&size);
    printf("Enter the %d elements of the array \n:",size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    big=a[0];
    for(i=1;i<size;i++)
    {
        if(big<a[i])
        big=a[i];
    }
    printf("largest element is %d \n",big);
    small=a[0];
    for(i=1;i<size;i++)
    {
        if(small>a[0])
        small=a[i];
    }
    printf("The smallest element is %d \n",small);
    
    return 0;
}
