#include <stdio.h>

int main()
{
    int n, soma = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        soma += n;
    }
    printf("Soma total: %d\n", soma);
}
