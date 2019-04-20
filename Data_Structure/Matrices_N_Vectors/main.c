#include <stdio.h>
#include <stdlib.h>

struct Node{
 int num;
 struct Node *prox;
};
typedef struct Node node;

int tam = 7;
int queijo, portuguesa, calabresa, vegetariana;
int queijo =1;
int portuguesa =2;
int calabresa =3;
int vegetariana =4;
int menu(void);
void inicia(node *PILHA);
void opcao(node *PILHA, int op);
void exibe(node *PILHA);
void libera(node *PILHA);
void push(node *PILHA);
node *pop(node *PILHA);


int main(void)
{
 node *PILHA = (node *) malloc(sizeof(node));
 if(!PILHA){
  printf("Sem espa�o disponivel!\n");
  exit(1);
 }else{
 inicia(PILHA);
 int opt;

 do{
  opt=menu();
  opcao(PILHA,opt);
 }while(opt);

 free(PILHA);
 return 0;
 }
}

void inicia(node *PILHA)
{
 PILHA->prox = NULL;
 tam=0;
}

int menu(void)
{
 int opt;

 printf("Escolha a opcao\n");
 printf("0. Sair\n");
 printf("1. Esvaziar caixa\n");
 printf("2. Exibir conte�do da caixa\n");
 printf("3. Adicionar pizza\n");
 printf("4. Retirar pizza\n");
 printf("Opcao: "); scanf("%d", &opt);

 return opt;
}

void opcao(node *PILHA, int op)
{
 node *tmp;
 switch(op){
  case 0:
   libera(PILHA);
   break;

  case 1:
   libera(PILHA);
   inicia(PILHA);
   break;

  case 2:
   exibe(PILHA);
   break;

  case 3:
   push(PILHA);
   break;

  case 4:
   tmp= pop(PILHA);
   if(tmp != NULL)
   printf("Retirado: %3d\n\n", tmp->num);
   break;

  default:
   printf("Comando invalido\n\n");
 }
}

int vazia(node *PILHA)
{
 if(PILHA->prox == NULL)
  return 1;
 else
  return 0;
}

node *aloca()
{
 node *novo=(node *) malloc(sizeof(node));
 if(!novo){
  printf("Sem espa�o disponivel!\n");
  exit(1);
 }else{
  printf("Opc�es de sabor:\nQueijo = 1\nPortuguesa = 2\nCalabresa = 3\nVegetariana = 4\nSabor desejado: "); scanf("%5d", &novo->num);
  return novo;
 }
}


void exibe(node *PILHA)
{
 if(vazia(PILHA)){
  printf("Caixa vazia!\n\n");
  return ;
 }

 node *tmp;
 tmp = PILHA->prox;
 printf("Caixa:");
 while( tmp != NULL){
  printf("%5d", tmp->num);
  tmp = tmp->prox;
 }
 printf("\n        ");
 int count;
 for(count=0 ; count < tam ; count++)
  printf("  ^  ");
 printf("\nOrdem:");
 for(count=0 ; count < tam ; count++)
  printf("%5d", count+1);


 printf("\n\n");
}

void libera(node *PILHA)
{
 if(!vazia(PILHA)){
  node *proxNode,
     *atual;

  atual = PILHA->prox;
  while(atual != NULL){
   proxNode = atual->prox;
   free(atual);
   atual = proxNode;
  }
 }
}

void push(node *PILHA)
{
 node *novo=aloca();
 novo->prox = NULL;

 if(vazia(PILHA))
  PILHA->prox=novo;
 else{
  node *tmp = PILHA->prox;

  while(tmp->prox != NULL)
   tmp = tmp->prox;

  tmp->prox = novo;
 }
 tam++;
}


node *pop(node *PILHA)
{
 if(PILHA->prox == NULL){
  printf("Caixa Vazia\n\n");
  return NULL;
 }else{
  node *ultimo = PILHA->prox,
              *penultimo = PILHA;

  while(ultimo->prox != NULL){
   penultimo = ultimo;
   ultimo = ultimo->prox;
  }

  penultimo->prox = NULL;
  tam--;
  return ultimo;
 }
}
