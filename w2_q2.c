#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], merged[200];
    int a, b, i, j;
    
    printf("Enter size of array 1: ");
    scanf("%d", &a);
    printf("Enter elements of array 1: ");
    for (i = 0; i<a; i++) 
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of array 2: ");
    scanf("%d", b);
    printf("Enter elements of array 2: ");
    for (i = 0; i < b; i++) 
    {
        scanf("%d", &arr2[i]);
    }
    
    for (i = 0; i < a; i++) 
    {
        merged[i] = arr1[i];
    }
    for (j = 0; j < b; j++)
    {
        merged[i] = arr2[j];
        i++;
    }
  
    printf(" The merged array in reverse order: ");
    for (i = a + b - 1; i >= 0; i--)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}