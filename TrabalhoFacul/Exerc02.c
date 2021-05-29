#include <stdio.h>
#include <stdlib.h>
//Função para calcular a soma dos vetores
int calcv(int *vet){
    
    int calc = 0;
    for(int x = 0; x < 7; x++){
        calc = calc + vet[x];
    }
    return calc;
}
//Programa principal
int main(){
    int vet[7], i; //Definição de variáveis
    
    //Laço de repetição para obter os valores do vetor
    for(i = 0; i < 7; i++){
        printf("Digite o numero: \n");
        scanf("%d", &vet[i]);
    }
    printf("Soma dos elementos = %d \n", calcv(vet));  //Imprimindo na tela a soma dos vetores utilizando a função

    return 0;
}