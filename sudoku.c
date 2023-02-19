#include<stdio.h>

int main()
{
   int it,n,i,j,k,ii,jj,valida,digito;
   int m[9][9],v[9];

   scanf("%i",&n);
   for(it=0;it<n;it++)
   {
      //ler matriz
      for(i=0;i<9;i++)
        for(j=0;j<9;j++)
          scanf("%i",&m[i][j]);
      //validar matriz
      valida = 1; 
      //validar as linhas
      i=0;
      while (valida && i<9)
      {   
         //validar linha i
         for(k=0;k<9;k++)  
					v[k] = 0;
         for(j=0;j<9;j++)
         {
            digito = m[i][j]-1;
            if (v[digito])
               valida = 0;
            else
               v[digito] = 1;
         }
         i++;  
      } 
      //validar as colunas
      j=0;
      while (valida && j<9)
      {   
         //validar coluna j
         for(k=0;k<9;k++)  
					v[k] = 0;
         for(i=0;i<9;i++)
         {
            digito = m[i][j]-1;
            if (v[digito])
               valida = 0;
            else
               v[digito] = 1;
         }
         j++;  
      } 

      //validar as submatrizes      
      i=0;
      while (valida && i<9)
      {
         j=0;
         while (valida && j<9)
         {
					//validar submatriz i,j
            for(k=0;k<9;k++)  
					    v[k] = 0;
            for(ii=i;ii<i+3;ii++)
               for(jj=j;jj<j+3;jj++)
               {
                  digito = m[ii][jj]-1;
                  if (v[digito])
                     valida = 0;
                  else
                     v[digito] = 1;
               }
            j++;
         }
         i++;
      }
      printf("instancia %i\n%s\n\n", it+1, valida?"SIM":"NAO");
   }
    
   return 0;
}