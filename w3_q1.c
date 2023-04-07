#include<stdio.h>
#include<string.h>
int main()
{
    char first[100] , second[20];
    int a,b,i,j,temp,k=0;

    printf("enter the string");
    gets(first);

    printf("enter a word");
    gets(second);

    i = strlen(first);
    j = strlen(second);

  for (a = 0; a < i; i++)
   {
    temp = a;
    for (b = 0; b < j; b++) 
    {
      if (first[a] == second[b])
        a++;
    }
     k = a - temp;
    if (k == j)
    {
      a = temp;
      for (b = a; b < (i - j); b++)
        first[b] = first[b + j];
      i = i - j;
      first[b] = '\0';
    }
  }
  
printf("\nNew String = %s", first);

return 0;
}