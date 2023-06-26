#include<stdio.h>
int main ()
{
    int n,p,q,sum=0;

    printf("Enter the number - ");
    scanf("%d",&n);
    printf("\n");

    while(n>0)
    {
        p=n%10;
        sum=sum+p;
        n=n/10;
    }
    printf("The sum of input all digits are - %d",sum);

}
