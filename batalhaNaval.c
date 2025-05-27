#include <stdio.h>

#define linhas 10
#define coluna 10

int main() {

//Variaveis, arrays e matriz:
char letra[10] = {'A','B','C','D','E','F','G','I','J'};
int i,j;
int tabuleiro [linhas] [coluna];

//formando o titulo:
printf("     ");
printf("Batalha naval \n");

//Exibindo as letras no tabuleiro:
printf("    ");
for(int i = 0; i < 10; i++)
{
printf("%c ",letra [i]);
}
printf(" \n");

//Exibindo o número 3 na tabela(Coluna):


//Exibindo o número 3 na tabela(Coluna):


//Exibindo o tabuleiro com os númerso na lateral:
for(int i = 0; i < linhas; i++)
{
printf("%d ",i);
    for(int j = 0; j < coluna; j++)
    {
    if (tabuleiro [i] == tabuleiro [j])  //Colocando coluna      
    {
    printf(" 3");
    } else {               
    printf(" 0");                        //Formando a tabela:
    }
    
    }
    printf(" \n");
}



    return 0;
}
