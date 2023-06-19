#include<stdio.h>
int main ()
{
    int no,sum,count;
    float avg;

    count=1;
    sum=0;

    while(count<=10)
    {
        printf("Enter the numbre - ");
        scanf("%d",&no);

        count++;
        sum=sum+no;
    }
 avg=(float)sum/10;
 printf("Average is - %f\n",avg);
 printf("Total is - %d\n",sum);
    if (avg>50)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

}
