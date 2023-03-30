#include <stdio.h>
int main()
{
    int a, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &a);
    int arr[a];
    
    printf("Enter positive and negative integer: ");
    scanf("%d %d", &i, &j);
    for (i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    j = 0;
    
    for (i = 0; i < a; i++)
    {
     if (arr[i] < 0)
    {
     if (i != j)
    {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    j++;
    }
    }
     printf("The modified array is ");

   for (i = 0; i < a; i++)
  {
   printf("%d ", arr[i]);
  }
   return 0;
}   