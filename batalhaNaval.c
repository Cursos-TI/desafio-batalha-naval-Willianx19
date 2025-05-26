#include <stdio.h>

int main() {

//Variaveis, arrays e matriz:
int tabuleiro [10] [10];
char letra[10] = {'A','B','C','D','E','F','G','I','J'};
int i,j;

printf("   ");
printf("Batalha naval \n");

//Formando a tabela:
for(int i = 0; i < 10; i++)
{
    for (int j = 0; i < 10; j++)
    {
    
    }
}

//Exibindo as letras no tabuleiro:
printf("  ");
for(int i = 0; i < 10; i++)
{
printf("%c ",letra [i]);
}
printf(" \n");

//Exibindo o tabuleiro com os númerso na lateral:
for(int i = 0; i < 10; i++)
{
printf("%d \n",i +1);
    for(int j = 0; j < 10; j++)
    {
printf("%d ",tabuleiro [i][j]);
    }
}



    return 0;
}
