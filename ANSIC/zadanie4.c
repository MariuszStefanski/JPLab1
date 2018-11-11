#include <stdio.h>
#include <math.h>
#include <float.h>

int main() 
{
  float a, b;
  scanf("%f %f", &a, &b);
  if ( a>b)
    {
    printf("Liczba %.2f jest wieksza od %.2f", a, b );
    printf("\n");
    }
    else if (a<b)
      {
      printf("Liczba %.2f jest mniejsza od %.2f", a, b );
      printf("\n");
      }
      else
        {
        printf("Liczby sa rowne");
        printf("\n");
        }
return 0;
}


