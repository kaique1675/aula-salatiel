#include <stdio.h>
#include <stdlib.h>

int main()
{
// declaraçao de variavel
    float nota1;
    float nota2;
    float media;

    // entrada
    printf("digite a nota 1 : ");
    scanf("%f",&nota1);
    printf("digite a nota 2 : ");
    scanf("%f",&nota2);

    // processamento
    media = (nota1 + nota2) / 2 ;
    // critica para saber se o aluno esta aprovado ou retido
    // saida
    if (media >= 5)
    {
    printf("APROVADO!!!");
    }
    else
{
    printf("ALUNO DEVERA CURSA DP!!!");
}

    return 0;




}
