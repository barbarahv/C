#include <stdio.h>

// que eu fiz
int main(){

    printf("*Multiplicacao*\n");
    
    int x;
    
    int y;
    
    printf("digite 1 numeros");
    scanf("%d", &x);
    printf("digite 2 numeros");
    scanf("%d", &y);
    
    int Multiplicacao = (x * y);
    
    printf("O resuldado é %d\n", Multiplicacao);
}

// da alura

#include <stdio.h>

int main() {
  int x;
  int y;

  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  int m = x * y;
  printf("A multiplicacao de %d por %d eh igual a %d\n", x, y, m);
}