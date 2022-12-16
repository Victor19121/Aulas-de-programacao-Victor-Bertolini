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
#include <string.h>

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
        {
            higher_1 = student[count].test1;
        }
            
    }


    for (int count = 0; count < 5; count++)
    {
        

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
// 5. Considerando a estrutura
// struct vetor {
// float a;
// float b;
// float c;
// };
// para representar um vetor no R3, implemente um programa que calcule a soma de dois
// vetores.
#include <stdio.h>
#include <math.h>

typedef struct
{
float a;
float b;
float c;

} Vetorization;

void
main()
{
    char 
        letter = 88;
    
    float 
        U = 0,
        V = 0;

    Vetorization vetor[2];
   

    for (int count = 0; count < 2; count++)
    {
        printf("Enter the position X of the vector %d: ", count);
        scanf("%f", &vetor[count].a);

        printf("Enter the position Y of the vector %d: ", count);
        scanf("%f", &vetor[count].b);

        printf("Enter the position Z of the vector %d: ", count);
        scanf("%f", &vetor[count].c);
    }

    U = sqrt((vetor[0].a * vetor[0].a) + (vetor[0].b * vetor[0].b) + (vetor[0].c * vetor[0].c));
    V = sqrt((vetor[1].a * vetor[1].a) + (vetor[1].b * vetor[1].b) + (vetor[1].c * vetor[1].c));

    printf("The resultant of the sum is: %f\n", U + V);  
}
===========================================================================================
// 6. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
// de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
// Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30
// caracteres) e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura
// e exibidos na tela.
#include <stdio.h>
#include <string.h>

typedef struct
{
    char 
        nome[30],
        sexo,
        cargo[30];
    int 
        idade,
        dia_nas,
        mes_nas,
        ano_nas,
        setor,
        salario;
    
    float
        CPF;

} ficha_funcionario;


void
main()
{
    ficha_funcionario funcionario;

    printf("Digite o nome: ");
    scanf("%30[^\n]", &funcionario.nome);

    fflush(stdin);
    printf("Digite M ou F para seu sexo: ");
    scanf("%c", &funcionario.sexo);

    fflush(stdin);
    printf("Digite o seu cargo: ");
    scanf("%30[^\n]", &funcionario.cargo);

    printf("Digite sua idade: ");
    scanf("%d", &funcionario.idade);

    printf("Digite o seu CPF: ");
    scanf("%f", &funcionario.CPF);

    printf("Digite a sua data de nascimento no formato 19 12 2003: ");
    scanf("%d %d %d", &funcionario.dia_nas, &funcionario.mes_nas, &funcionario.ano_nas);

    printf("Digite o numero do seu setor: ");
    scanf("%d", &funcionario.setor);

    printf("Digite o seu salário: ");
    scanf("%d", &funcionario.salario);


    printf("Nome: %s\n", funcionario.nome);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Idade: %d\n", funcionario.idade);
    printf("CPF: %.0f\n", funcionario.CPF);
    printf("data de nascimento: %d/%d/%d\n", funcionario.dia_nas, funcionario.mes_nas, funcionario.ano_nas);
    printf("Setor: %d\n", funcionario.setor);
    printf("Salario: %d\n", funcionario.salario);
}
==========================================================================================
// 7. Utilizando uma estrutura, faça um programa que permita a entrada de nome, endereço e
// telefone de 5 pessoas e os imprima em ordem alfabética.
#include <stdio.h>
#include <string.h>

typedef struct 
{   
    char 
        nome[30],
        endereco[100];
    float
        telefone;
}Ficha_pessoa;


void
main()
{
    char    
        alfabeto_M[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'},
        alfabeto_m[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf("%c", alfabeto_M[0]);
    printf("%c", alfabeto_m[0]);

    Ficha_pessoa pessoa[5];

    for (int count = 0; count < 5; count++)
    {
        fflush(stdin);
        printf("Digite o nome da pessoa %d: ", count + 1);
        scanf("%30[^\n]", &pessoa[count].nome);

        fflush(stdin);
        printf("Digite o endereço da pessoa: ");
        scanf("%100[^\n]", &pessoa[count].endereco);

        printf("Digite o telefone: ");
        scanf("%f", &pessoa[count].telefone);
    }

    for (int count = 0; count < 26; count++)
    {
        if (pessoa[0].nome[0] == alfabeto_M[count] || pessoa[0].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[0].nome, pessoa[0].endereco, pessoa[0].telefone);

        if (pessoa[1].nome[0] == alfabeto_M[count] || pessoa[1].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[1].nome, pessoa[1].endereco, pessoa[1].telefone);

        if (pessoa[2].nome[0] == alfabeto_M[count] || pessoa[2].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[2].nome, pessoa[2].endereco, pessoa[2].telefone);

        if (pessoa[3].nome[0] == alfabeto_M[count] || pessoa[3].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[3].nome, pessoa[3].endereco, pessoa[3].telefone);

        if (pessoa[4].nome[0] == alfabeto_M[count] || pessoa[4].nome[0] == alfabeto_m[count])
            printf("Nome: %s\n Endereco: %s\n Telefone: %.0f\n\n", pessoa[4].nome, pessoa[4].endereco, pessoa[4].telefone);
    }
    
}
=======================================================================================
// 8. Escolha um jogo de cartas, baseado em um “baralho tradicional” (cada carta tem seu naipe
// e seu valor). Implemente a parte de distribuição (sorteio) de cartas para 2 jogadores,
// considerando que cada jogador irá receber 3 cartas. Exiba na tela as cartas que cada um dos
// jogadores recebeu.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct
{
    char tipo[4][10]

} Naipe;


typedef struct
{
    Naipe naipe_carta;
    int valor;

} Baralho;

void
main()
{
    int 
        random = 0,
        random_naipe = 0;

    Baralho 
        baralho;

    srand(time(NULL));

    strcpy(baralho.naipe_carta.tipo[0], "Ouro");
    strcpy(baralho.naipe_carta.tipo[1], "Paus");
    strcpy(baralho.naipe_carta.tipo[2], "Copas");
    strcpy(baralho.naipe_carta.tipo[3], "Espadas");

    //Jogador 1
    printf("O jogador 1 possui as cartas:\n");
    for (int count = 0; count < 3; count++)
    {
        random = (rand() % 9) + 1;
        random_naipe = (rand() % 3) + 1;
        printf("%d de %s\n", random, baralho.naipe_carta.tipo[random_naipe]);
    }

    //Jogador 2
    printf("O jogador 2 possui as cartas:\n");
    for (int count = 0; count < 3; count++)
    {
        random = (rand() % 9) + 1;
        random_naipe = (rand() % 3) + 1;
        printf("%d de %s\n", random, baralho.naipe_carta.tipo[random_naipe]);
    }
}
=================================================================================
// 9. Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras),
// ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor
// que p. Repita este processo até que seja lido um valor p = 0.
#include <stdio.h>
#include <string.h>
#include <locale.h>

//Struct de informações do carro
typedef struct 
{
    char 
        marca[15];

    int
        ano,
        preco;
} Ficha_Carro;

//Função para limpar o teclado
void
clean()
{
    fflush(stdin);
}


int 
main() 
{
    Ficha_Carro     //Chamando a struct
        carro[5];
    char
        aprovados[5]; //carros que passaram no teste de preço
    int 
        valor_max = 0, 
        contador = 0,
        tamanho = 0,
        index = 0;

    //MIMIMI meu 
    setlocale(LC_ALL, "Portuguese");

    //Pegando o preço que está disposto a pagar
    printf("Digite o preço que você está disposto a pagar por um carro: ");
    scanf("%d", &valor_max);

    //Um loop para suprir as structs com informações sobre os veículos
    for (int count = 0; count < 5; count++)
    {
        printf("Carro %d\n", count + 1);
        clean();
        printf("Digite a marca do carro: ");
        scanf("%15[^\n]", &carro[count].marca);

        printf("Digite o ano que foi fabricado: ");
        scanf("%d", &carro[count].ano);

        printf("Digite o preco do carro: ");
        scanf("%d", &carro[count].preco);

        if(carro[count].preco <= valor_max)
        {
            aprovados[contador] = count;
            contador++;
        }
        printf("========================\n");
    } 

    tamanho = strlen(aprovados);
    if (tamanho > 0)
    {
        for (int count = 0; count < tamanho; count++)
        {
            index = aprovados[count];
            printf("Marca: %s\nAno: %d\nPreco: %d\n", carro[index].marca, carro[index].ano, carro[index].preco);
        }
    } 
}
===========================================================================

