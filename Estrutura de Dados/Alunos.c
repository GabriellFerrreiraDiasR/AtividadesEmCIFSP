#include <stdio.h>
#include <string.h>

//Constantes
#define MAXALUNOS 40
#define QTDNOTAS 4

//Struct Nome -> Aluno
typedef struct{
    int ra;
    char nome[100];
    float notas[QTDNOTAS];
} Aluno;

//Cadastrar Aluno
Aluno CadastrarAlunos(int ra, char nome[], float notas[]){
    Aluno a;
    a.ra = ra;
    strcpy(a.nome, nome);
    for(int i = 0; i < QTDNOTAS; i++){
        a.notas[i] = notas[i];
    }
    return a;
}

//Buscar Aluno por RA
Aluno BuscarAlunos(Aluno alunos[], int tam, int ra)
{
    if(tam == 0){
        Aluno vazio = {0};
        vazio.ra = -1;
        return vazio;
    }
    if(alunos[tam - 1].ra == ra){
        return alunos[tam - 1];
    }

    return BuscarAlunos(alunos, tam - 1, ra);
}

//Calcular Média
float CalculoMediaUnico(Aluno a){
    float soma = 0;
    for(int i = 0; i < QTDNOTAS; i++){
        soma += a.notas[i];
    }
    return soma / QTDNOTAS;
}
//Calcular Media de Todos
float SomarMedias(Aluno alunos[], int tam){
    if(tam == 0){
        return 0;
    }
    return CalculoMediaUnico(alunos,tam - 1) + SomarMedias(alunos,tam - 1);
}
float CalculoMedia(Aluno alunos[], int tam){
    if (tam == 0){
        return 0;
    }
    return SomarMedias(alunos,tam)/tam
}

//Exibir Todos os Alunos
void ExibirAlunos(Aluno alunos[], int tam){
    if(tam == 0){
        return;
    }
    ExibirAlunos(alunos, tam - 1);
    printf("RA: %d\n", alunos[tam - 1].ra);
    printf("Nome: %s\n", alunos[tam - 1].nome);
    for(int i = 0; i < QTDNOTAS; i++){
        printf("Nota %d: %.2f\n",i + 1,alunos[tam - 1].notas[i]);
    }
    printf("Media: %.2f\n",CalculoMediaUnico(alunos[tam - 1]));
    printf("\n");
}

//Exibir Maior média
float MaiorMedia(Aluno alunos[], int tam){
    if (tam == 1){
        return alunos[tam - 1];
    }
    float maior = MaiorMedia(aluno,tam-1);
    if (alunos[tam - 1] > maior){
        return maior
    }
    return MaiorMedia(alunos, tam - 1);
}
void MaiorMedia(Aluno alunos[])

int main(){
    Aluno alunos[MAXALUNOS];
    return 0;
}