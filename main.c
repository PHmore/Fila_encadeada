#include "Fila_Encad.h"
#include <stdio.h>
#include <stdlib.h>

//Função auxiliar para interação com usuário
void interface ()
{
    printf("\n{Digite a ação desejada}");
    printf("\nInserir [1] || Remover [2] || Mostrar [3] || Sair [0]\n");
}

//Função auxiliar para leitura de dados
int ler_int ()
{
    int nlidos;
    int num;
    
    do{
    printf("\nObs! [Digite um número inteiro]\nSua escolha: ");
    //a variavel nlidos recebe a quantidade de elementos lidos pelo scanf
    nlidos = scanf("%d",&num);
    
    int c;
    //Esse trecho ler os caractere no buffer enquanto existirem
    while((c = getchar ()) != '\n' && c != EOF);

    //Como o a leitura esperada é de um inteiro a função continua até que um inteiro seja lido
    } while (nlidos != 1);
    
    return num;
}

int main ()
{
    int num;
    Fila * F = Criar_Fila ();
    Fila * Prior = Criar_Fila ();

    do 
    {
        interface();
        num = ler_int();

        switch(num){
        case 1: 
            printf("\n[DADO PRIORITÁRIO] - Sim [1] || Não [!=1]\n");
            num = ler_int();
            printf("\n[INSERINDO]");
            if(num == 1)
            Inserir_Fila(Prior,ler_int());
            else
            Inserir_Fila(F,ler_int());
            num = 1;
            break;
        case 2:
            printf("\n[REMOVENDO]");
            if(Prior->inicio == NULL)
            Remover_Fila(F);
            else 
            Remover_Fila(Prior);
            break;
        case 3:
            printf("\n[MOSTRANDO FILA]");
            Mostrar_Fila(F);
            printf("\n[MOSTRANDO FILA PRIORITÁRIA]");
            Mostrar_Fila(Prior);
            break;
        case 0:
            free(F);
            free(Prior);
            break;

        default:
            printf("[Opção Inválida]\n");
            break;
        }
    }
    while (num != 0);

    printf("\n");
    return 1;
}