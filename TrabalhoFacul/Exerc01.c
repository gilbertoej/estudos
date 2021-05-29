#include <stdio.h>
#include <stdlib.h>

struct pessoa {  //Registro criado para armazenar as variaveis
    char nome[100];
    double salario;
}; struct pessoa Funcionario;

//função criada para exibir o nome completo, salario e a aliquota do imposto de renda
float impostodeRenda(double *salario){  

    double resultado;
    double porcentagemAli;

    // Feito a estrutura de seleção para comparar os valores de entradas e dar um retorno
    if((*salario) <= 1903.98){
        printf("\n Imposto de renda Isento!");
        porcentagemAli = 0.0;
    }
    else {
        if((*salario) <= 2826.65){
            porcentagemAli = 0.075;
            resultado = (*salario) * porcentagemAli;
        }
        else{
            if((*salario)<= 3751.05 ) {
            porcentagemAli = 0.15;
            resultado = (*salario) * porcentagemAli;
            }
            else{
                if((*salario)<= 4664.68 ) {
                porcentagemAli = 0.225;
                resultado = (*salario) * porcentagemAli;
                }
                else{
                    porcentagemAli = 0.275;
                    resultado = (*salario) * porcentagemAli;
                }   
            }
        }
    }
    printf("\n Nome completo : %s",Funcionario.nome);
    printf("\n Salario:R$ %.2lf reais",Funcionario.salario);
    printf("\n Aliquota : %.2lf %%",porcentagemAli*100);
    printf("\n Valor da deducao do salario :R$ %.2lf \n", resultado);
}

//programa principal
int main (){
    
    printf("*********************************************************************\n");
    printf(" Programa para auxiliar no calculo da aliquota do imposto de renda \n");
    printf("*********************************************************************\n");

    //Solicitando as informações para o usuario
    printf("Por favor digite seu nome completo abaixo : \n");
    gets(Funcionario.nome);

    printf("Por favor digite seu salario (R$) : \n");
    scanf("%lf", &Funcionario.salario); 

    //chamada da função
    impostodeRenda(&Funcionario.salario);
    
    return 0;
}


