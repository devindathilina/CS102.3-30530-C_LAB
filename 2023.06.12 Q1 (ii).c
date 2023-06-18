#include <stdio.h>
int main ()
{
    int z,odd;
    printf("Enter the Number - ");
    scanf("%d",&z);
     odd=z%2;
    if(z==0)
        printf("This Number is Zero");
    else

    switch(odd)
    {
        case 0:printf("This Number is Even");break;
        default:printf("This Number is Odd");break;
    }


}
