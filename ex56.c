#include <stdio.h>

int main()
{
  int n;
  printf("Digite um número ");
  scanf("%d", &n);
  for(int i = 1; i<=10; i++){
    printf("%d ", i*n);
  }
}
