#include <stdio.h>

int main(){
  float n1, n2;
  printf("Digite o primeiro valor: ");
  scanf("%f", &n1);
  for(int i=1;  i>0; i++){
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
  if(n2 != 0)
    printf("Valor inválido");
    i=-1;
  }
  printf("%.2f dividido por %.2f é igual a %.2f", n1, n2, n1/n2);
}
