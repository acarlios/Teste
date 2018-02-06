#include<stdio.h>

int somarPares(int vet[]){

    int soma, i;
    soma=0;

    for(i=0; i<10; i++){
        if (vet[i] % 2 == 0)
        soma = soma + vet[i];
    }

    return soma;
}

int main(){

    int vet[10], i;

    printf("Informe 10 numeros interios : \n");
    for(i=0; i<10; i++){
        scanf("%d", &vet[i]);
    }
    printf("\n A soma dos numeros pares eh: %d", somarPares(vet) );

    return 0;
}
