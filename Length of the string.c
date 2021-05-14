/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char a[]="c language is not so easy";
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        printf("Length of the string is %d \n",i);
    }

    return 0;
}
