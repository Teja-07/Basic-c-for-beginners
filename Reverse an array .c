/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX_SIZE 100

void main()
{
   int i,size,a[MAX_SIZE];
   printf("Enter the size of an array: \n");
   scanf("%d",&size);
   printf("Enter the elements of an array: \n");
   for(i=0;i<size;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("\n Array Reversed is :\n");
   for(i=size-1;i>=0;i--)
   {
       printf("%d",a[i]);
   }

    
}
