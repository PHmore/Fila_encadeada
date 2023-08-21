#include "Fila_Encad.h"
#include <stdio.h>
#include <stdlib.h>

Fila * Criar_Fila()
{
    Fila * novo = (Fila *)malloc (sizeof (Fila));
    novo->inicio = NULL;
    return novo;
}

no * criar_encher (int valor)
{
    no * novo = (no*) malloc (sizeof(no));
    if(novo == NULL)
    {
        printf("Erro de alocação");
    }
    else 
    {
        novo->prox = NULL;
        novo->valor = valor;
    }
    return novo;
}

void Mostrar_Fila (Fila * fila)
{
    no * aux = fila->inicio;
    printf("\nFila: ");
    if(aux == NULL)
    printf("Vazia\n");
    else
    while(aux != NULL)
    {
        printf(" %d,",aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

void Inserir_Fila (Fila * F,int valor)
{
    if (F->inicio == NULL)
    {
        F->inicio = criar_encher(valor);
    }
    else
        {
        no * aux = F->inicio;
        while (aux->prox != NULL)
        aux = aux->prox;
        aux->prox = criar_encher(valor);
        }
        Mostrar_Fila(F);
    return;
}

void Remover_Fila (Fila * F)
{
    no * aux = F->inicio;
    if (F->inicio == NULL)
    {
        printf("\nErro Fila Vazia\n\n");
    }
    else
    {
        F->inicio = aux->prox;
        aux->prox = NULL;
        free (aux);
        Mostrar_Fila(F);
    }
    return;
}

