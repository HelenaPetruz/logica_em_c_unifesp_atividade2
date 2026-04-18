#include <stdio.h>

int main()
{
    int n, soma = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d", &n);

        if(n < 40){
            soma += n;
        }
    }
    printf("Soma dos valores menores que 40: %d\n", soma);
}
