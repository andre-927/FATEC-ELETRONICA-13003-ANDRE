

#include <stdio.h>
#include <stdlib.h>

int main()

{

  int e_metro, s_mili;

  printf("Digite valor em metro:");
  scanf("%d", &e_metro);

  s_mili = (e_metro * 1000);

  printf("O valor em milimetros é: %d\n", s_mili);

  return 0;
}