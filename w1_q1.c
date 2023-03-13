#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=100;a++)
    {
       if(a%3==0 && a%5==0)
       printf("FIZZBUZZ\n");
        else if(a%3==0)
        {
        printf("FIZZ\n");
        }
        else if(a%5==0)   
        {
            printf("BUZZ\n");
        }
        else 
        {
            printf("%d\n",a);
        }
    } 
}           