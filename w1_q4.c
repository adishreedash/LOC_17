#include<stdio.h>
int main()
{
    int a,b,operation,solution;
    
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);

    printf("Enter operation:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Remainder\n");
    scanf("%d", &operation);
    switch(operation)
    {
        case 1:
        solution= a+b;
        printf("Addition of two numbers is:%d\n", solution);
        
        case 2:
        solution= a-b;
        printf("Subtraction of two numbers is:%d\n",solution );

        case 3:
        solution= a*b;
        printf("Multiplication of two numbers is:%d\n", solution);

        case 4:
        solution= a/b;
        printf("Division of two numbers is: %d\n", solution);

        case 5:
        solution= a%b;
        printf("Remainder of two numbers is: %d\n", solution);
        
        break;
        default:
        printf("invalid input.\n");
    }
    return 0;
}