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
fgets(nome, sizeof(nome), stdin); // Ao invés de 128 posso usar também sizeof(nome);
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



//Nome (string contendo espaços)

//Idade (inteiro)

//Massa corporal em gramas (inteiro)

//Altura em centímetros (inteiro)