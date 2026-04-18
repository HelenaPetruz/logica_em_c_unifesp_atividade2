#include <stdio.h>

int main()
{
    int n;
    int dentro = 0, fora = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &n);

        if(n >= 10 && n <= 20){
            dentro++;
        } else {
            fora++;
        }
    }

    printf("%d dentro do intervalo\n", dentro);
    printf("%d fora do intervalo\n", fora);

    return 0;
}
