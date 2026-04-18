#include <stdio.h>

int main()
{
    int n;
    float soma = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &n);
        soma += n;
    }
    printf("Media: %.2f\n", soma/10);
}
