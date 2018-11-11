#include <stdio.h>

int main() 
{
  int a;
  scanf("%d", &a);
  if (0 < a && a < 13)
    {
      switch (a) 
      {
        case 1: printf("Styczen: 31 dni\n"); break;
        case 2: printf("Luty: 28 dni\n"); break;
        case 3: printf("Marzec: 31 dni\n"); break;
        case 4: printf("Kwiecien: 30 dni\n"); break;
        case 5: printf("Maj: 31 dni\n"); break;
        case 6: printf("Czerwiec: 30 dni\n"); break;
        case 7: printf("Lipiec: 31 dni\n"); break;
        case 8: printf("Sierpien: 31 dni\n"); break;
        case 9: printf("Wrzesien: 30 dni\n"); break;
        case 10: printf("Pazdziernik: 31 dni\n"); break;
        case 11: printf("Listopad: 30 dni\n"); break;
        case 12: printf("Grudzien: 31 dni\n"); break;
        default: break;
      }
    }
  else
    {
      printf("BLAD\n");
    }
return 0;
}


