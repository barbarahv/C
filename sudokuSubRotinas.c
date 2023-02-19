#include<stdio.h>

typedef int TSudoku[9][9]; 

void lerMatriz(TSudoku matriz)
{
   int i,j;
   for(i=0;i<9;i++)
     for(j=0;j<9;j++)
       scanf("%i",&matriz[i][j]);
}

int validarLinha(TSudoku matriz, int linha)
{
   int k,j,digito,valida;
   int v[9];
   valida = 1;
   for(k=0;k<9;k++)  
			v[k] = 0;
   for(j=0;j<9;j++)
   {
      digito = matriz[linha][j]-1;
      if (v[digito])
          valida = 0;
      else
          v[digito] = 1;
   }
   return valida;
}

int validarLinhas(TSudoku matriz)
{
    int i;
		for (i=0;i<9;i++)    
         if (!validarLinha(matriz, i))
            return 0;
    return 1;
}

int validarColuna(TSudoku matriz, int coluna)
{
   int k,i,digito,valida;
   int v[9];  
   for(k=0;k<9;k++)  
		 v[k] = 0;
   valida = 1;
   for(i=0;i<9;i++)
   {
      digito = matriz[i][coluna]-1;
      if (v[digito])
           valida = 0;
      else
           v[digito] = 1;
   }
   return valida;
}

int validarColunas(int matriz[][9])
{
   int j,valida;
   j=0;
   valida = 1;
   while (valida && j<9)
   {  
      valida = validarColuna(matriz, j); 
      j++;  
   } 
   return valida;
}


int validarSubMatriz( )
{
   int k,i,j,digito,valida;
   int v[9];  
   for(k=0;k<9;k++)  
		 v[k] = 0;
   valida = 1;
   for(i=l0;i<l0+3;i++)
      for(j=c0;j<c0+3;j++)
      {
           digito = matriz[i][j]-1;
           if (v[digito])
               valida = 0;
           else
               v[digito] = 1;
      }
   return valida;
}

int validarSubMatrizes(TSudoku matriz)
{
   int i,j,valida;
   i=0;
   valida = 1;
   while (valida && i<9)
   {
      j=0;
      while (valida && j<9)
      {
				valida = validarSubMatriz(matriz,i,j);
          j=j+3;
      }
      i=i+3;
   }
   return valida;
}

int main()
{
   int it,n,valida;
   //int m[9][9];
   TSudoku m;

   scanf("%i",&n);
   for(it=0;it<n;it++)
   {
      lerMatriz(m);
      valida = validarLinhas(m);
      if (valida)
        valida = validarColunas(m);
      if (valida)
        valida = validarSubMatrizes(m);
      printf("Instancia %i\n%s\n\n", it+1, valida?"SIM":"NAO");
   }    
   return 0;
}