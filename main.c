#include <stdio.h>
#include <stdlib.h>
void dessenie_grille(char grille[][3]);
void saisie_utilisateur(char grille[][3],char joueur,int p_coord_x,int p_coord_y);
int saisie_valide(char grille[][3],int* crood_x,int* crood_y);
int main()
{
    printf("tp9 :les fonction\n");

    char grille[3][3]=
    {
       {'.','.','.'},{'.','.','.'},{'.','.','.'}
    };
    int fin_partie=0;
    char joueur='X';
    int coord_x,coord_y;
    do
    {

    }
    while(fin_partie!=1);
    return 0;
    }


    void dessenie_grille(char grille[][3])
    {
        for (int x=0;x<3;x++)
        {
            printf ("|%c|%c|%c|\n",grille[x][0],grille[x][1],grille[x][2]);
        }
    }
void saisie_utilisateur(char grille[][3],char joueur,int* p_coord_x,int* p_coord_y)
{
    do
    {
        printf("joueur %c ou voullez vous jouer (x,y)",joueur);
        fflush(stdin);
    scanf("%d%d",p_coord_x,p_coord_y);
    }
    while(saisie_valide(grille, *p_coord_x,*p_coord_y)==0);

    grille[*p_coord_x][*p_coord_y]=joueur;
}
if (coord_x<0||coord_x>3||coord_y<0||coord_y>3)
{
    printf("coordonees invalides\n");
    return 0;
}
if(grille[coord_x][coord_y]!='.')
{
    printf("case occupee!!\n");
    return0;
}


