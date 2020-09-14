

#include <stdio.h>
#include <stdlib.h>

int main()

{

  float e_R1, e_R2, s_Req;

  printf("Digite Resistor 1:");
  scanf("%f", &e_R1);
  printf("Digite Resistor 2:");
  scanf("%f", &e_R2);

  s_Req = (e_R1 * e_R2) / (e_R1 + e_R2);

  printf("A resistência equivalente é: %f\n", s_Req);

  return 0;
}