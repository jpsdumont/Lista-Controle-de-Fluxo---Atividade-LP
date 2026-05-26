#include <stdio.h>
 
int main() {
    int n = 7;
    int vetor[] = {10, 50, 120, 30, 200, 5, 80};
    int soma = 0;
    int i = 0;
 
    while (i < n && vetor[i] >= 0) {
        if (!(vetor[i] > 100 && vetor[i] % 2 == 0)) {
            soma += vetor[i];
        }
        i++;
    }
 
    printf("Soma: %d\n", soma);
    return 0;
}