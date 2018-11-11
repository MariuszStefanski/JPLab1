#include <stdio.h>
#include <math.h>
#include <float.h>

int main() 
{
  float a;
  float pierwiastek;
  float odwrotnosc;
  scanf("%f", &a);
  if(a>0)
  {
    pierwiastek = sqrt(a);
    odwrotnosc = 1/a;
    printf ("Pierwiastek: %.2f\nOdwrotnosc: %.2f\n", pierwiastek, odwrotnosc);
  }
  else if (a<0)
  {
    odwrotnosc = 1/a;
    printf ("Pierwiastek: BLAD\nOdwrotnosc: %.2f\n", odwrotnosc);
  }
  else
  {
    pierwiastek = sqrt(a);
    printf ("Pierwiastek: %.2f\nOdwrotnosc: BLAD\n", pierwiastek);
  }
return 0;
}





