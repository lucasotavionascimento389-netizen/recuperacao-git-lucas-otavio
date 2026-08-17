#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 50
struct Aluno {

char nome[100];
int idade;
float nota;
};
int main() {
struct Aluno alunos[MAX_ALUNOS];
int quantidade = 0;
int opcao;
do {
printf("\n========================================\n");
printf(" SISTEMA DE CADASTRO DE ALUNOS\n");
printf("========================================\n");
printf("1 - Cadastrar aluno\n");
printf("2 - Exibir alunos cadastrados\n");
printf("3 - Sair\n");
printf("========================================\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);
getchar();
switch (opcao) {
case 1:
if (quantidade >= MAX_ALUNOS) {
printf("\nLimite de alunos atingido!\n");
break;
}
printf("\n========================================\n");
printf(" CADASTRO DE ALUNO\n");
printf("========================================\n");
printf("Nome do aluno: ");
fgets(alunos[quantidade].nome,
sizeof(alunos[quantidade].nome),
stdin);
alunos[quantidade].nome[
strcspn(alunos[quantidade].nome, "\n")
] = '\0';
printf("Idade: ");
scanf("%d", &alunos[quantidade].idade);
printf("Nota: ");
scanf("%f", &alunos[quantidade].nota);
quantidade++;
printf("\nAluno cadastrado com sucesso!\n");
break;
case 2:
printf("\n========================================\n");
printf(" ALUNOS CADASTRADOS\n");
printf("========================================\n");
if (quantidade == 0) {
printf("Nenhum aluno cadastrado.\n");
} else {
for (int i = 0; i < quantidade; i++) {
printf("\nAluno %d\n", i + 1);
printf("----------------------------------------\n");
printf("Nome: %s\n", alunos[i].nome);
printf("Idade: %d anos\n", alunos[i].idade);
printf("Nota: %.2f\n", alunos[i].nota);
if (alunos[i].nota >= 6.0) {
printf("Situacao: Aprovado\n");
} else {
printf("Situacao: Reprovado\n");
}

}
}
break;
case 3:
printf("\nEncerrando o sistema...\n");
printf("Obrigado por utilizar o programa!\n");
break;
default:
printf("\nOpcao invalida! Tente novamente.\n");
}
} while (opcao != 3);

}
int matricula;
    char curso[100];
} Aluno;

void exibirAluno(Aluno aluno) {
    printf("\n========== DADOS DO ALUNO ==========\n");
    printf("Matricula: %d\n", aluno.matricula);
    printf("Nome:      %s\n", aluno.nome);
    printf("Idade:     %d anos\n", aluno.idade);
    printf("Curso:     %s\n", aluno.curso);
    printf("====================================\n");
}

int main() {
    Aluno aluno;

    aluno.matricula = 12345;
    sprintf(aluno.nome, "Joao da Silva");
    aluno.idade = 20;
    sprintf(aluno.curso, "Sistemas de Informacao");

    exibirAluno(aluno);

    return 0;
}
