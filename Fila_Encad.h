#ifndef FILA_H
#define FILA_H

typedef struct no
{
    struct no * prox;
    int valor;
}no;

typedef struct
{
    no * inicio;
}Fila;

Fila * Criar_Fila ();
no * Criar_encher (int );
//bool fila_cheia ();
int Fila_Vazia (Fila);
void Inserir_Fila (Fila *,int);
void Remover_Fila (Fila *);
void Mostrar_Fila (Fila *);

#endif