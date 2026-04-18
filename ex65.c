#include <stdio.h>

int main()
{
    int a, b, soma = 0;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        soma += i;
    }
    printf("Soma: %d\n", soma);
}
