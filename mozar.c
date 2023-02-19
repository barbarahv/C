//Consumo médio de um veiculo
#include <stdio.h>

int main() {
    char placa[30];
    double distancia,litros,consumo;

    scanf("%s %lf %lf", placa, &distancia, &litros );
    consumo = distancia/litros;

  if (consumo < 8) {
    printf("Venda o carro!\n");
  }
  
  else if((consumo >= 8) && (consumo <= 12)){
      printf("Economico!\n");
  }
  
  else if(consumo > 12){
    printf("Super economico!\n");
  }

  return(0);
}

//Cadastro de Disciplina 2
#include <stdio.h>
#include <math.h>
 
int main() {
    int codigo, creditos, ano, semestre;
    char nome[100], professor[100];
    double nota1, nota2, media;
    int continuar=1;
    

    
   do{
        printf("1 - ler dados da disciplina \n2 - mostrar os dados da disciplina\n3 - sair\nEntre com a sua opcao:");
        scanf("%i", &continuar);

        switch(continuar){
            case 1:
                scanf("%i", &codigo);
                scanf("\n%[^\n]", nome);
                scanf("\n%[^\n]", professor);
                scanf("%i", &creditos);
                scanf("%i", &ano);
                scanf("%i", &semestre);
                scanf("%lf", &nota1);
                scanf("%lf", &nota2);
                media = (nota1 + 2.0*nota2)/3.0;
                break;

            case 2:
                printf("Codigo    : %04i\n", codigo);
                printf("Nome      : %s\n", nome);
                printf("Professor : %s\n", professor);
                printf("Creditos  : %i\n", creditos);
                printf("Ano       : %i\n", ano);
                printf("Semestre  : %i\n", semestre);
                printf("Nota1     : %0.2lf\n", nota1);
                printf("Nota2     : %0.2lf\n", nota2);
                printf("Media     : %0.2lf\n", media);
                break;


            case 4 :
                  break;
                  
            case 3:
                printf("Obrigado por utilizar o programa de cadastro, volte sempre!\n");
                break ;
            
            
        }
    } while(continuar != 3);
    
    return 0;
}



//Cadastro de Disciplina
#include <stdio.h>
#include <math.h>
 
int main() {
    int codigo, creditos, ano, semestre;
    char nome[100], professor[100];
    double nota1, nota2, media;
    
    scanf("%i", &codigo);
    scanf("\n%[^\n]", nome);
    scanf("\n%[^\n]", professor);
    scanf("%i", &creditos);
    scanf("%i", &ano);
    scanf("%i", &semestre);
    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    media = (nota1 + 2.0*nota2)/3.0;
    
    printf("Codigo    : %04i\n", codigo);
    printf("Nome      : %s\n", nome);
    printf("Professor : %s\n", professor);
    printf("Creditos  : %i\n", creditos);
    printf("Ano       : %i\n", ano);
    printf("Semestre  : %i\n", semestre);
    printf("Nota1     : %0.2lf\n", nota1);
    printf("Nota2     : %0.2lf\n", nota2);
    printf("Media     : %0.2lf\n", media);
    
    return 0;
}

//brinquedo
#include <stdio.h>

int main(){

    int codigo, quantidade;
    char nome[50], categoria[30];
    float preco;
   
    scanf("%i", &codigo);
    scanf("\n%[^\n]", nome);
    scanf("%s", categoria);
    scanf("%f", &preco);
    scanf("%i", &quantidade);
    
    printf("Codigo     : %04i\n", codigo);
    printf("Nome       : %s\n", nome);
    printf("Categoria  : %s\n", categoria);
    printf("Preco      : R$ %.2lf\n", preco);
    printf("Quantidade : %i\n", quantidade);


    return 0;
}

//Maquina de consulta de preço de brinquedo
#include <stdio.h>

int main(){

    int codigo, quantidade;
    char nome[50], categoria[30];
    float preco;
    
    printf("---- + -------------------------------------------------- + ------------------------------ + ------------ + ----------\n");
    printf("Cod. ! Nome                                               ! Categoria                      !        Preco ! Quantidade\n");
    printf("---- + -------------------------------------------------- + ------------------------------ + ------------ + ----------\n");
    printf("0001 ! Pacote de Bola de Gude (50 bolinhas)               ! Tradicional                    !        12.40 !         30\n");
    printf("0002 ! Boneca barbie programadora java (IA)               ! nerd                           !     21314.31 !          3\n");
    printf("0003 ! Bola de Futebol Tupper Mike                        ! Esporte                        !        17.10 !         51\n");
    printf("1234 ! Esperto Fone SamySumg                              ! Eletronico                     !        34.12 !         10\n");
    printf("9999 ! Vareta                                             ! Tradicional                    !         1.00 !          5\n");
    printf("---- + -------------------------------------------------- + ------------------------------ + ------------ + ----------\n");
   
   
    scanf("%i", &codigo);
    scanf("\n%[^\n]", nome);
    scanf("%s", categoria);
    scanf("%f", &preco);
    scanf("%i", &quantidade);
    
    printf("Codigo     : %04i\n", codigo);
    printf("Nome       : %s\n", nome);
    printf("Categoria  : %s\n", categoria);
    printf("Preco      : R$ %.2lf\n", preco);
    printf("Quantidade : %i\n", quantidade);


    return 0;
}





