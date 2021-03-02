/*ALUNA AMANDA BITTENCOURT LOPES 
  R.A 1756370-5*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <iostream>
#include <math.h>
#include <string.h>
struct livros
{
char nomeliv[20];
char autor[25];
char editora[30];
int n;

};
int main(void)
{
int escolha=0;
int i, n;
livros show[6];
int codigo = -1;


// se a escolha for diferente de 3, ele continua... o que inicialmente é verdade
// pois escolha é igual a 0
while (escolha!=3)
{
printf("\n      ============================================================");
printf("\n\n   //---------------------------------------------------------// ");
printf("\n\n  //------------------BIBLIOTECA ADS-------------------------//");
printf("\n\n //---------------------------------------------------------//");
printf("\n\n//_________________________________________________________//");
printf("\n 0 - Encerrar; ");
printf("\n 1 - Inserir um novo cadastro; ");
printf("\n 2 -  Mostrar todos os cadastros:  \n ");
scanf("%d",&escolha);
fflush(stdin);
switch(escolha){
      case 1:

           system("cls");
           if (codigo == 5)
           {
               printf("\n \n Sistema de cadastro lotado. Nao e possivel armazenar mais informacoes! \n \n ");
               system("pause");
               break;
           }  
           for(i=0; i<5; i++)
           {  
              printf("\n\n Inserir um novo cadastro \n\n Nome do Livro:\n");
              scanf("%s", show[i].nomeliv);
              fflush(stdin);
              printf("\n Autor: \n");  
              scanf("%s", show[i].autor);
              fflush(stdin);
              printf("\n Editora: \n");
              scanf("%s", show[i].editora);
              fflush(stdin); 
              codigo = i+1;
              show[i].n = codigo;
              printf("O codigo do livro e: %d \n ", show[i].n);
              system("pause");
            }
            system("cls");
            printf("\n \n Sistema de cadastro lotado. Nao e possivel armazenar mais informacoes! \n \n ");
            system("pause");
            break;
        case 2:
            system("cls");
            if (codigo == -1) 
            {
                printf("\n\n Lista Vazia! \n ");
                break;
            }
            printf("\n\n Mostrar todos os cadastros: \n ");
            for(i=0; i<5; i++)
            {
              printf("\n CODIGO: %d \n", show[i].n); 
              printf("\n Nome do Livro: %s \n", show[i].nomeliv);
              printf(" Autor: %s \n", show[i].autor);
              printf(" Editora: %s \n ", show[i].editora);
            }
            system("pause");
            break;
// se for escolhida a opção 4, ele pula o while utilizando continue para isso 
        case 0:
            system("cls");
            printf("--------------------------------\n");
            printf("\n\n O Programa foi fechado. Ate logo! \n \n");
            exit(0);
        default:
           system("cls");
           // caso o usuário digite um numero acima de 2, ele irá informar que nao existe essa opção no menu
           printf("\n\n Erro! Opcao de menu invalida!\n \n");
           system("pause");
           break;
           
   }
}
}
