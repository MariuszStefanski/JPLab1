#include <stdio.h>
#include <math.h>
#include <float.h>

int main() 
{
  float a, b, c;
  scanf("%f" "%f" "%f", &a, &b, &c);
  if (a<=0 || b<=0 || c<=0)
  {
    printf("BLAD\n");
  }
  else 
  {
    if (a>b) // A>B  (b,a)
    {     
          if (a>c) // wiesz, ze a>b i a>c -> b/c, a
          {
                if (b+c>a)
                {
                  printf("TAK");
                }
                else
                {
                  printf("NIE");
                }
          }
          else // wiesz, ze a>b, a<c,  b,a,c
          {
            if (b+a>c)
            {
              printf("TAK\n");
            }
            else
            {
              printf("NIE\n");
            }
          }
    }
    else // A <= B, a,b
    {
      if (b>c) // wiemy, ze a<b i b>c, a/c, b
      {
        if (a+c>b)
        {
          printf("TAK\n");
        }
        else
        {
          printf("NIE\n");
        }
      }
      else// wiemy, ze a<b, b<c, a,b,c
      {
        if (a+b>c)
        {
          printf("TAK\n");
        }
        else
        {
          printf("NIE\n");
        }
      }
    }
  }
return 0;
}






