#include <stdio.h>

int main()
{
    int qtd;
    float valor, total = 0, media;

    printf("Digite a quantidade de mercadorias: ");
    scanf("%d", &qtd);
    if(qtd > 0){
        for(int i = 0; i < qtd; i++){
            printf("Digite o valor da mercadoria %d: ", i + 1);
            scanf("%f", &valor);
            total += valor;
        }
        media = total / qtd;
        printf("Valor total em estoque: %.2f\n", total);
        printf("Media dos valores: %.2f\n", media);
    } else {
        printf("Quantidade invalida!\n");
    }
}
