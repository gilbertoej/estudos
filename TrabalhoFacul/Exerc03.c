#include <stdio.h>
#include <stdlib.h>
#define va 4

//Função para calcular a soma das Matrizes A e B colocando os valores dentro da Matriz C
void calc_soma(int *mat_A, int *mat_B, int *mat_C){
  int vlr = 0 ;

  printf("Calculo da soma das Matrizes A + B resultando na C.\n");

  for(int x= 0; x < va; x++){
    for(int y=0; y < va; y++){
      *(mat_C + vlr) = *(mat_A + vlr) + *(mat_B + vlr);
      printf ("A soma da Matriz A + Matriz B = Matriz C [%d][%d] = %d\n", x, y, *(mat_C + vlr));
      vlr++;
    }
  }
}


// Programa principal do código
int main(){
  int condicao, mat_A[va][va], mat_B[va][va], mat_C[va][va]; //Definição das matrizes e variáveis a serem utilizadas

  printf ("\nDigite valor para os elementos da matriz\n\n");
  //Pegando os numeros da primeira matriz A e verificando se o numero vai ser negativo para finalizar o programa
  for (int x=0; x < va; x++ ){
    for (int y=0; y < va; y++ )
    {
      printf ("\nElemento matriz A [%d][%d] = ", x, y);
      scanf ("%d", &mat_A[x][y]);
      condicao = mat_A[x][y];
      if (condicao < 0){
        exit(0);
      }
      
    }
  }
  printf("\n");      //quebra de linha
  //Pegando os numeros da segunda matriz B e verificando se o numero vai ser negativo para finalizar o programa
  for (int x=0; x < va; x++ ){
    for (int y=0; y < va; y++ )
    {
      printf ("\nElemento matriz B [%d][%d] = ", x, y);
      scanf ("%d", &mat_B[x][y]);
      condicao = mat_B[x][y];
      if(condicao < 0){
        exit(0);
      }
    }
  }
  printf("\n");    //Quebra de linha
  
  calc_soma(&mat_A[0][0], &mat_B[0][0], &mat_C[0][0]); //Chamada da função de calculo das matrizes
    return(0);
}