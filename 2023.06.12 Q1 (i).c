#include<stdio.h>
int main ()
{
    int z,odd;
    printf("Enter the Number - ");
    scanf("%d",&z);
    odd=z%2;
    if (z==0)
        printf("This Number is Zero\n");
    else if (odd==0)
        printf("This Number is Even\n");
    else
        printf("This Number is Odd\n");
}
