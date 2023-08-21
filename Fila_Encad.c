#include "Fila_Encad.h"
#include <stdio.h>
#include <stdlib.h>

Fila Criar_Fila()
{
    Fila novo;
    novo.inicio = NULL;
    return novo;
}

int Fila_Vazia (Fila F)
{
    if(F.inicio == NULL)
    return 1;
    else
    return 0;
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

int Ler_valor ()
{
    int valor;
    printf("\nDigite um número: ");
    scanf("%d",&valor);
    return valor;
}

void Mostrar_Fila (Fila fila)
{
    while(fila.inicio != NULL)
    {
        printf(" %d,",fila.inicio->valor);
        fila.inicio = fila.inicio->prox;
    }
}

void Inserir_Fila (Fila * F)
{
    no * aux = F->inicio;
    while (aux->prox != NULL)
    aux = aux->prox;
    aux->prox = criar_encher(Ler_valor());
    return;
}

void Remover_Fila (Fila * F)
{
    no * aux = F->inicio;
    if (Fila_Vazia(*F))
    {
        printf("\nErro Fila Vazia");
    }
    else
    {
        F->inicio = aux->prox;
        aux->prox = NULL;
        free (aux);
    }
    return;
}

