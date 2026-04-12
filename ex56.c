#include <stdio.h>

int main()
{
  int n;
  do{
  printf("Digite um número ");
  scanf("%d", &n);
  } while(n<1 || n>10);
  for(int i = 1; i<=10; i++){
    printf("%d ", i*n);
  }
}
