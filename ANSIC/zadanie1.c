#include <stdio.h>
#include <float.h>

int main()
  {
    float a, b;
    double srednia;
    scanf("%f %f", &a, &b);
    srednia = (a+b)/2;
    printf("%.1f", srednia);
    return 0;
}
