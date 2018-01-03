#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cadastro{
char nome[20];
char disci[20];
float nota;
};
struct cadastro p[30];
void pesquisar(struct cadastro *x,char *achar){
    int i;
    for(i=0;i<=30;i++){
            if(strcmp(x[i].nome,achar)==0){
                printf("nome encontrado\n");
                puts(x[i].nome);
                puts(x[i].disci);
                printf("%f", x[i].nota);

            }
            else{
                printf("Nome não encontrado\n.");
            }

}

}


int main()
{

    char pesquisa[20];
    int i=0;
    char resp[1]="s";
                                        while((resp == 's') && (i<=30)){
    printf("Digite o nome do %d aluno:\n",i+1);
        gets(p[i].nome);
        fflush(stdin);
    printf("Digite a disciplina do %d aluno:\n",i+1);
        gets(p[i].disci);
        fflush(stdin);
    printf("Digite a nota do %d aluno:\n",i+1);
        scanf("%f", &p[i].nota);
        fflush(stdin);

            printf("Deseja cadastrar um novo aluno ?\n");
                    scanf("%c",resp);
            fflush(stdin);
            i++;
                                            }

                                        if( (resp=='n') || (i>30) )
                                            {
                                                system("cls");
                                        printf("Voce entrou na tela de pesquisa, digite um nome que deseja pesquisar:\n");
                                        printf("Digite o nome que deseja pequisar");
                                        gets(pesquisa);
                                        pesquisar(p,pesquisa);


                                        }


    return 0;
}
