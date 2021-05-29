#include <stdio.h>
#include <string.h>
//Criado um registro para agrupar as variaveis que vão ser utilizadas no programa principal
struct info {
    char nome[100];
    char cpf[100];
    char email[100];
    char tel[100];
};  struct info dados_p;


/* Por conta do uso do "fgets" para atribuir o valor nas variáveis essa 
função foi criada para corrigir o fato de que ele faz com que os dados pulem de linha,
e com essa função foi possível fazer com que os dados ficassem na mesma linha deixando
organizadinho por se tratar de dados em colunas. 
*/
void mlinha (){   
    dados_p.nome[strcspn(dados_p.nome, "\n")] = 0;
    dados_p.email[strcspn(dados_p.email, "\n")] = 0;
    dados_p.tel[strcspn(dados_p.tel, "\n")] = 0;
    dados_p.cpf[strcspn(dados_p.cpf, "\n")] = 0;
}
//Programa principal
int main(){ 
    // criado arquivo .csv, com campos para entrada de dados
    FILE *fpt;
    fpt = fopen("3453813.csv", "w");
    fprintf(fpt, "Nome; Email; Telefone; CPF\n");
    fclose(fpt);
    
    // laço de repetição para receber os 6 registros
    for(int i = 0; i < 6; i++){

        printf("Digite o seu nome: ");
        fgets(dados_p.nome, 100, stdin);

        printf("Digite o seu e-mail: ");
        fgets(dados_p.email, 100, stdin);

        printf("Digte o seu numero de telefone: ");
        fgets(dados_p.tel, 100, stdin);

        printf("Digite o numero do seu CPF: ");
        fgets(dados_p.cpf, 100, stdin);


        mlinha();

        // abrindo, salvando os 6 registros dentro do arquivo 3453813.csv e fechando 
        fpt = fopen("3453813.csv", "a");
        fprintf(fpt, "%s; %s; %s; %s\n", dados_p.nome, dados_p.email, dados_p.tel, dados_p.cpf);
        fclose(fpt);
    }
        
}