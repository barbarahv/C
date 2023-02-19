#include<stdio.h>
#include<string.h>

typedef struct{
   char nome[30];
   int idade;
   float peso,altura;
} Pessoa;

typedef struct{
   Pessoa vet[100];
   int    qtd;
} Multidao;


void lerPessoa(Pessoa *p)
{
   printf("nome:");
   gets((*p).nome);
   printf("idade:");
   scanf("%i%*c", &(*p).idade);
   printf("peso:");
   scanf("%f%*c", &(*p).peso);  
   printf("altura:");
   scanf("%f%*c", &(*p).altura);  
}

void mostrarPessoa(Pessoa p)
{
   printf("Nome:%s\n",p.nome);
   printf("Idade:%i\n", p.idade);
   printf("Peso:%.2f\n", p.peso);
   printf("Altura:%.2f\n", p.altura);
}

void lerMultidao(Multidao *m)
{
   int i;
   printf("Entre com a qtd:");
   scanf("%i%*c",&(*m).qtd);
   for(i=0;i<(*m).qtd;i++)
     lerPessoa(&(*m).vet[i]);
}

void escreverMultidao(Multidao m)
{
  int i;
  for(i=0;i<m.qtd;i++)
     mostrarPessoa(m.vet[i]);
}


int main()
{  
   Multidao pessoas;
   lerMultidao(&pessoas);
   escreverMultidao(pessoas);    
   return 0;
}

