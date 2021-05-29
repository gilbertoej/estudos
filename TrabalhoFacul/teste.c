#include <stdio.h>

struct Distancia{
    int mt;
    int cen;
}d1, d2, d3;
int main(){
   printf ("Digite o valor da primeira parcela\n");
   printf ("Inteiro: ");
   scanf ("%d", &d1.mt);
   prinft ("Decimal: ");
   scanf ("%d",&d1.cen);

   printf ("Digite o valor da segunda parcela\n");
   printf ("Inteiro: ");
   scanf ("%d", &d2.mt);
   prinft ("Decimal: ");
   scanf ("%d",&d2.cen);
   d3.mt = d1.mt + d2.mt ;
   d3.cen = d1.cen + d2.cen;

   if(d3.cen>=100){
       d3.cen = d3.cen - 99;
       ++d3.mt;
   }
   printf ("\n resultado = %d, %d", d3.mt, d3.cen);

    return 0;
}