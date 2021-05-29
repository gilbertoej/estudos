#include <stdio.h>

calc(x, y);

// programa principal
int main(){
    int x, y;
    printf("**********************************************************\n");
    printf("* Calculo de multiplicação sobre dois numeros inteiros.*\n");
    printf("**********************************************************\n");

    //Solicitando os valores para o cálculo
    printf("Digite o valor do primeiro numero: \n");
    scanf("%d", &x);
    printf("Digite o valor do segundo numero: \n");
    scanf("%d", &y);

    // impressao na tela do resultado
    printf("%d x %d = %d\n", x, y, calc(x,y));

    return 0;
}

// funcao para fazer a multiplicação dos dois valores obtidos.
int calc(int x, int y) {  
    if (y == 0){
        return y;
    }
    else{
        return x + calc(x, y-1);
    }
         
}