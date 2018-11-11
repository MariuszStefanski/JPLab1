#include <stdio.h>
#include <math.h>
#include <float.h>

int main() 
{
  float a, b;
  scanf("%f %f", &a, &b);
  printf("Liczba %.2f jest %s od %.2f", a, (a>b) ? "wieksza" : "mniejsza", b);
  
return 0;
}

