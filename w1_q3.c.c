#include<stdio.h>
int main()
{
    int num,sum=0,rem=0;
    printf("enter the number");
    scanf("%d",&num);
    sum=0;
    do
    {
        rem=num%10;
        sum += rem;
        num/= 10;
    }
    while(num>0);
    printf("the sum is=%d\n",sum);
    return 0;
}