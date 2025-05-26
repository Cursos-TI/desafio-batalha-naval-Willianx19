#include <stdio.h>

int main() {

//Variaveis, arrays e matriz:
char letra[10] = {'A','B','C','D','E','F','G','I','J'};
int i,j;
int tabuleiro [10] [10];

//Formando a tabela:
for(int i = 0; i < 10; i++)
{
    for(int j = 0; j < 10; j++)
    {
    tabuleiro [i][j]= 0;
    }
}

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
tabuleiro [4] [6] = 3;
tabuleiro [5] [6] = 3;
tabuleiro [6] [6] = 3;

//Exibindo o número 3 na tabela(Coluna):
tabuleiro [2] [4] = 3;
tabuleiro [2] [5] = 3;
tabuleiro [2] [6] = 3;

//Exibindo o tabuleiro com os númerso na lateral:
for(int i = 0; i < 10; i++)
{
printf("%d ",i +1);
    for(int j = 0; j < 10; j++)
    {
printf(" %d",tabuleiro [i][j]);
    }
    printf(" \n");
}



    return 0;
}
