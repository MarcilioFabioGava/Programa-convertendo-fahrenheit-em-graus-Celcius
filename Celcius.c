#include <stdio.h>

    int main(){

    //O que o programa quer? Usuário digitar graus

    float grausF, grausC;

    printf("Digite o valor de graus em Farenheit: \n");
    scanf("%f", &grausF);

    grausC = (grausF - 32) * 5/9;

    printf("O Valor de Farenheit é: %.2f e o valor de Graus Celcios é: %.2f",grausF, grausC);

    return 0;

}

