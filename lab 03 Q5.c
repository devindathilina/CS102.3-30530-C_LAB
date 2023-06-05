#include<stdio.h>
int main ()
{
    int num1,num2,n;
    printf("Enter two integers - ");
    scanf("%d %d",&num1,&num2);
    n=num1%num2;
    if(n==0)
    {
        printf("%d is the multiple of %d",num1,num2);

    }

    else
        printf("%d is the multiple of %d",num1,num2);

}
