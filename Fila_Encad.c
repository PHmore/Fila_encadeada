#include "Fila_Encad.h"
#include <stdio.h>
#include <stdlib.h>

Fila * Criar_Fila()
{
    Fila * novo = (Fila *)malloc (sizeof (Fila));
    novo->inicio = NULL;
    novo->fim = NULL;
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
        novo->ant = NULL;
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
    {
    while(aux)
    {
        printf(" %d,",aux->valor);
        aux = aux->prox;
    }

    printf("\nFila Contrária: ");
    aux = fila->fim;
    while(aux)
    {
        printf(" %d,",aux->valor);
        aux = aux->ant;
    }
    }
    printf("\n");
}

void Inserir_Fila (Fila * F,int valor)
{
    if (F->inicio == NULL)
    {
        F->inicio = criar_encher(valor);
        F->fim = F->inicio;
    }
    else
        {
        F->fim->prox = criar_encher(valor);
        F->fim->prox->ant = F->fim;
        F->fim = F->fim->prox;
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
        if(F->inicio->prox == NULL)
        {
            F->inicio->ant = NULL;
            free(F->inicio);
            F->inicio = NULL;
        }
        else
        {
        F->inicio = F->inicio->prox;
        F->inicio->ant = NULL;
        aux->prox = NULL;
        aux->ant = NULL;
        free (aux);
        }
        Mostrar_Fila(F);
    }
    return;
}

