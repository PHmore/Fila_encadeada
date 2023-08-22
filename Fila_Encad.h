#ifndef FILA_H
#define FILA_H

typedef struct no
{
    struct no * prox;
    struct no * ant;
    int valor;
}no;

typedef struct
{
    no * inicio;
    no * fim;
}Fila;

//Aloca e cria a fila
Fila * Criar_Fila ();

//Aloca e cria o nó
no * Criar_encher (int );

//Cria o nó e inseri na fila
void Inserir_Fila (Fila *,int);

//Remove um nó da fila
void Remover_Fila (Fila *);

//Mostra a fila
void Mostrar_Fila (Fila *);

#endif