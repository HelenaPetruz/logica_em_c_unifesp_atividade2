#include <stdio.h>

int main()
{
    int n, negativos=0;
    for(int i=0; i<10; i++){
      scanf("%d", &n);
      if(n<0){
        negativos++;
      }
    }
  printf("Existem %d numeros negativos!", negativos);
}
