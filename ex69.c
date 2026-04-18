#include <stdio.h>

int main()
{
    float valor, total = 0, media;
    int contador = 0;
    char resp;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);
        total += valor;
        contador++;
        printf("Mais mercadorias (S/N)? ");
        scanf(" %c", &resp); 
    } while(resp == 'S' || resp == 's');
    if(contador > 0){
        media = total / contador;
        printf("Valor total em estoque: %.2f\n", total);
        printf("Media dos valores: %.2f\n", media);
    } else {
        printf("Nenhuma mercadoria informada.\n");
    }
}
