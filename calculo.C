    #include <stdio.h>

    int main (){

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("entre com o numero 2: \n");
    scanf("%d", &numero2);

    //operacao soma
    soma = numero1 + numero2;
    //operacao subtracao
    subtracao = numero1 - numero2;
    //operacao multiplicacao
    multiplicacao = numero1 * numero2;
    //operacao divisao
    divisao = numero1 / numero2;

    printf("o resultdo da soma é: %d\n", soma);
    printf("o resultdo da subtração é: %d\n", subtracao);
    printf("o resultdo da multiplicação é: %d\n", multiplicacao);
    printf("o resultdo da divisão é: %d\n", divisao);

    return 0;

    }

