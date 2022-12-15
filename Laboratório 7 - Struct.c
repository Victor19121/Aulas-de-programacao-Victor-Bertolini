// 1. Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
// solicitado abaixo:
// - Horário: composto de hora, minutos e segundos.
// - Data: composto de dia, mês e ano.
// - Compromisso: composto de uma data, horário e texto que descreve o compromisso.
#include <stdio.h>
#include <string.h>

int
main()
{
    struct tempo
    {
        int hora;
        int minuto;
        int segundo;
    };
    struct tempo horario;

    struct ficha_dia
    {
        int dia;
        int mes;
        int ano;
    };
    struct ficha_dia data;

    struct acao
    {
        char ato[100];
    };
    struct acao compromisso;

    printf("Digite as horas: ");
    scanf("%d", &horario.hora);

    printf("Digite os minutos: ");
    scanf("%d", &horario.minuto);

    printf("Digite os segundos: ");
    scanf("%d", &horario.segundo);

    printf("Digite o dia: ");
    scanf("%d", &data.dia);

    printf("Digite o mes: ");
    scanf("%d", &data.mes);
    
    printf("Digite o ano: ");
    scanf("%d", &data.ano);
    fflush(stdin);
    printf("Digite o compromisso: ");
    fgets(compromisso.ato, 100, stdin);


    printf("\nVocê tem que %s no dia %d no mes %d no ano %d na hora %d no minuto %d no segundo %d", compromisso.ato, data.dia, data.mes, data.ano, horario.hora, horario.minuto, horario.segundo);

}
==========================================================
//2. Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
//os dados em uma estrutura.

#include <stdio.h>

void
main()
{

    struct informacao
    {
        char nome[50];
        int idade;
        char endereco[100];
    };

    struct informacao pessoa1;

    printf("Digite o seu nome: ");
    scanf("%50[^\n]", &pessoa1.nome);

    printf("Digite a sua idade: ");
    scanf("%d", &pessoa1.idade);
    fflush(stdin);
    printf("Digite o seu endereço: ");
    fgets(pessoa1.endereco, 100, stdin);

    printf("O nome da pessoa é %s, sua idade é %d e seu endereço é: %s", pessoa1.nome, pessoa1.idade, pessoa1.endereco);
}
=======================================================
//3. Construa uma estrutura student com name, número de matrıcula e curso. Leia do usuário a
//informação de 5 students, armazene em um vetor dessa estrutura e imprima os dados na tela.
#include <stdio.h>
#include <string.h>

typedef struct 
{
    char name[30];
    int registration;
    char curso[15];

}StudentRecord;

void
clean_keyboard()
{
    fflush(stdin);
}

void
main()
{
    StudentRecord student[5];

    for (int count = 0; count < 5; count++)
    {
        clean_keyboard();
        printf("Enter the name of the student %d: ", count + 1);
        scanf("%30[^\n]", &student[count].name);

        printf("Enter the registration number: ");
        scanf("%d", &student[count].registration);

        clean_keyboard();

        printf("Enter the students course: ");
        scanf("%30[^\n]", &student[count].curso);
    }

    for (int count = 0; count < 5; count++)
    {
        printf("Name of student %d: %s\n", count + 1, student[count].name);

        printf("The registration is: %d\n", student[count].registration);
        
        printf("The course is: %s\n", student[count].curso);
    }
}
====================================================
// 4. Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
// conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
// da terceira prova.
// a) Permita ao usuário entrar com os dados de 5 alunos;
// b) Encontre o aluno com maior nota da primeira prova;
// c) Encontre o aluno com maior média geral;
// d) Encontre o aluno com menor média geral;
// e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.
#include <stdio.h>

typedef struct
{
    char 
        name[10];
    int 
        registration,
        test1,
        test2,
        test3;
} StudentRecord;

void
clean()
{
    fflush(stdin);
}

void
main()
{
    int 
        higher_1 = 0,
        higher_average = 0,
        lower_average = 0,
        average = 0;


    StudentRecord student[5];

    for (int count = 0; count < 5; count++)
    {
        clean();
        printf("Enter the name of the %d student: ", count + 1);
        scanf("%10[\n]", &student[count].name);
        clean();
        printf("Enter the student registration: ");
        scanf("%d", &student[count].registration);
        clean();
        printf("Enter the score of test 1: ");
        scanf("%d", &student[count].test1);
        clean();
        printf("Enter the score of test 2: ");
        scanf("%d", &student[count].test2);
        clean();
        printf("Enter the score of test 3: ");
        scanf("%d", &student[count].test3);
    }

    for (int count = 0; count < 5; count++)
    {
        if (higher_1 < student[count].test1)
            higher_1 = student[count].test1;

        average = (student[count].test1 + student[count].test2 + student[count].test3) / 3;

        if (higher_average < average);
            higher_average = average;

        if (count == 0)
            lower_average = average;

        else if (lower_average > average)
            lower_average = average;
        
        if (average >= 6)
            printf("The student %s of registration %d is approved with average: %d\n", student[count].name, student[count].registration, average);
        else
            printf("The student %s of registration %d is reproved with average: %d\n", student[count].name, student[count].registration, average);
    }
    printf("\n");
    printf("The highest score is: %d\nThe highest average is: %d\nThe lowest average is: %d");

}
===================================================
