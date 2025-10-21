#include <stdio.h>
int main() {
    int vetor[5];

    for(int pos = 0;pos < 5;pos++) {
        printf("Digite um número [%d / 5]: ", pos + 1);
        scanf("%d", &vetor[pos]);
    }

    for(int pos = 0;pos < 4;pos++) {
        if(vetor[pos] > vetor[pos+1]) {
            int temp = vetor[pos];
            vetor[pos] = vetor[pos+1];
            vetor[pos+1] = temp;
            pos = -1;
        }
    }

    for(int pos = 0;pos < 5;pos++) {
        printf("%d", vetor[pos]);
        if(pos == 4) {
            printf("\n");
        } else {
            printf(", ");
        }
    }

    return 0;
}