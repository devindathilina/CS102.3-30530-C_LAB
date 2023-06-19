#include<stdio.h>
int main ()
{
    int n,count=1,fac=1;

    printf("Enter the number - ");
    scanf("%d",&n);

    if (n==0)
    {
           printf("The factorial number is 1");
    }

    else
    {
         while (count<=n)
         {
             fac=fac*count;
            count++;
         }

           printf("The Factoral number is - %d",fac);

    }



}
