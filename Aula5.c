#include <stdio.h>


int main()

{
char nome [200];
int gramas;
int cm;
int idade;
float imc;

puts("nome:");
fflush(stdin);
fgets(nome, sizeof(nome), stdin); 
puts("idade");
fflush(stdin);
scanf("%d",&idade);
puts("massa[g]:");
fflush(stdin);
scanf("%d",&gramas);
puts("altura[cm]:");
fflush(stdin);
scanf("%d",&cm);

imc=(gramas/1000.0)/((cm/100.0)*(cm/100.0));

printf("IMC: %.2f\n", imc);

return 0;
}

