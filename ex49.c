#include <stdio.h>

int main(){
  float n1, n2;
  char novo;
  do{
    do{
      printf("Digite a primeira nota: ");
      scanf("%f", &n1);
    } while(n1<0 || n1>10);
    do{
      printf("Digite a segunda nota: ");
      scanf("%f", &n2);
    } while(n2<0 || n2>10);
    printf("Média: %.2f \n", (n1+n2)/2);
    printf("Novo cálculo? (s/n)");
    scanf(" %c", &novo);
  }while(novo == 's' || novo == 'S');
  n1=0;
  n2=0;
}
