#include <stdio.h>

int main() {

char nome [200];
int gramas;
int cm;
int idade;
float imc;

puts("nome:");
fflush(stdin);
fgets(nome, sizeof(nome), stdin); 
puts("idade:");
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

if (imc <18.5) {
    printf ("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
    printf ("Classificação: Peso normal\n");
    } else if (imc >= 25 && imc < 30) {
    printf ("Classificação: Sobrepeso\n");
    } else if (imc >= 30 && imc < 35) {
    printf ("Classificação: Obesidade grau 1\n");
    } else if (imc >= 35 && imc < 40) {
    

    printf ("Classificação: Obesidade grau 2\n");
    } else {
        printf ("Classificação: Obesidade grau 3\n");
    }
      return 0;
}


