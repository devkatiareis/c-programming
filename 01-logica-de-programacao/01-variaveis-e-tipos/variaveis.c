/*
Variaveis em C
*/

#include <stdio.h>
#include <locale.h>

int main() {
    // Configura o programa para o idioma português (ajusta acentos e moeda)
    setlocale(LC_ALL, "Portuguese");

    // Declaração de variáveis
    char nome[] = "Katia Reis";
    char sexo = 'F';
    int idade = 38;
    float salario = 1650.30;

    printf("Seus dados são: \n");
    printf("\tSeu nome é %s \n", nome);
    printf("\tSua idade é %d \n", idade);
    printf("\tSeu gênero é %c \n", sexo);
    printf("\tSeu salário é R$ %.2f \n", salario);

return;
}
