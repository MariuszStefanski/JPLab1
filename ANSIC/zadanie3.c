#include <stdio.h>
#include <math.h>
#include <float.h>

int main() 
{
  float a, b, c;
  double p,s;
  scanf("%f %f %f", &a, &b, &c);
  if ( a+b>=c)
  {
    p=(a+b+c)/2;
    s = sqrt((p*(p-a)*(p-b)*(p-c)));
    printf("%lf", s);
    printf("\n");
  }
  else
    {
   printf ("blad");
    }
return 0;
}
