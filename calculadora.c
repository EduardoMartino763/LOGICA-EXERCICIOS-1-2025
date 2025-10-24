#include <stdio.h>

double somar(double num_a, double num_b) {
    return num_a + num_b;
}

double subtrair(double num_a, double num_b) {
    return num_a - num_b;
}

int main() {
    double num_1, num_2;
    int operacao;
    double resultado;

    printf("Digite um número: ");
    scanf("%lf", &num_1);

    printf("Digite um número: ");
    scanf("%lf", &num_2);

    printf("Selecione a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtrair\n");
    printf(":");
    scanf("%d", &operacao);

    switch (operacao) {  //Semelhante a um IF só que mais limitado
        case 1:
            resultado = somar(num_1, num_2);
            break; //encerra o comando (sempre usar após um caso  no Switch)
        case 2:
            resultado = subtrair(num_1, num_2);
            break;
        default: //Semelhante a uma ultima opção
            printf("Opção inválida\n");
    }

    printf("Resultado: %.2lf\n", resultado);


    return 0;
}