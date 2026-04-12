#include <stdio.h>

int main(){
  float n1, n2;
  printf("Digite o primeiro valor: ");
  scanf("%f", &n1);
  do{
    if(n2==0)
      printf("Valor inválido");
    printf("Digite o segundo valor: ");
    scanf("%f", &n2);
  } while(n2==0);
  printf("%.2f dividido por %.2f é igual a %.2f", n1, n2, n1/n2);
}
