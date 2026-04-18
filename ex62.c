#include <stdio.h>

int main()
{
    int qtd;
    float nota, soma = 0, media;
  
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / qtd;
    printf("Media da turma: %.2f\n", media);
}
