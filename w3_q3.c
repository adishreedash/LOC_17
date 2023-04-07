#include <stdio.h>
int main()
{
   int first, second, *a, *b, sum;

   printf("Enter two numbers \n: ");
   scanf("%d%d", &first, &second);

   a = &first;
   b = &second;

   sum = *a + *b;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}