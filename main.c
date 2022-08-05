#include <stdio.h>
#include <stdlib.h>
int exercice(int nbr){
      int  i, f = 1;
  for (i = 1; i <= nbr; i++){
        f = f * i;
  }
return f;
}
int main()
{

  int nbr, i, f = 1;

  printf("Entrez un nombre pour calculer sa factorielle\n");
  scanf("%d", &nbr);

  for (i = 1; i <= nbr; i++)
    f = f * i;

  printf("Factorielle de %d = %d\n", nbr, f);
 printf("fonction : Factorielle de %d = %d\n", nbr,exercice(nbr));

    return 0;
}
