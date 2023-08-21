#include "Fila_Encad.h"
#include <stdio.h>
#include <stdlib.h>

void interface ()
{
    printf("\n{Digite a ação desejada}");
    printf("\nInserir [1] || Remover [2] || Mostrar [3] || Sair [0]");
}

int ler_int ()
{
    int num;
    printf("\n\nObs! [Digite um número inteiro]\nSua escolha: ");
    scanf("%d",&num);
    return num;
}

int main ()
{
    int num;
    Fila * F = Criar_Fila ();

    do 
    {
        interface();
        num = ler_int();

        switch(num){
        case 1: 
            //inserir
            break;
        case 2:
            //remover
            break;
        case 3:
            //Mostrar
            break;
        case 0:
            free(F);
            break;

        default:
            printf("Opção inválida\n");
            break;
        }
    }
    while (num != 0);

    printf("\n");
    return 1;
}