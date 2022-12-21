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
// 10. Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor
// (máximo 15 letras) e ano. Procure um livro por título, perguntando ao usuário qual título
// deseja buscar. Mostre os dados de todos os livros encontrados.
#include <stdio.h>
#include <string.h>


typedef struct
{
    char 
        titulo[30],
        autor[15];
}Biblioteca;

void
main()
{
    Biblioteca livro[5];

    char 
        busca[30];


    for (int count = 0; count < 5; count++)
    {
        switch (count)
        {
        case 0:
            strcpy(livro[count].titulo, "Harry Potter");
            strcpy(livro[count].autor, "JK Rowling");
            break;

        case 1:
            strcpy(livro[count].titulo, "Seja Foda");
            strcpy(livro[count].autor, "Caio Carneiro");
            break;

        case 2:
            strcpy(livro[count].titulo, "Memórias Póstumas");
            strcpy(livro[count].autor, "Machado de Assis");
            break;

        case 3:
            strcpy(livro[count].titulo, "Quincas Borba");
            strcpy(livro[count].autor, "Machado de Assis");
            break;

        case 4:
            strcpy(livro[count].titulo, "Pense como um monge");
            strcpy(livro[count].autor, "Jay Shetty");
            break;

        default:
            break;
        }
    }


    printf("Qual obra você quer achar? ");
    scanf("%30[^\n]", &busca);

    for (int count = 0; count < 5; count++)
    {
        if (!(strcmp(livro[count].titulo, busca)))
        {
            printf("O livro: %s\nDo autor: %s\nFoi encontrado no índice: %d", livro[count].titulo, livro[count].autor, count + 1);
        }  
    } 
}
===============================================================================
// 11. Faça um programa que seja uma agenda de compromissos e:
// Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras), e data. A data deve ser outra estrutura de dados contendo dia, mês e ano;
// Leia dois inteiros M e A e mostre todos os compromissos do mês M e ano A. Repita o procedimento até ler M = 0;
#include <stdio.h>
#include <string.h>

typedef struct
{
    char compromisso[60];
    int dia,
        mes,
        ano;
}Compromisso;


void
main()
{
    Compromisso comp[5];

    int M, A;

    for (int count = 0; count < 5; count++)
    {
        printf("=========================\n");
        fflush(stdin);
        printf("Digite o compromisso: ");
        fgets(comp[count].compromisso, 60, stdin);

        printf("Digite o dia, mes e ano para marcar: ");
        scanf("%d %d %d", &comp[count].dia, &comp[count].mes, &comp[count].ano);

    }

    do
    {
        printf("Digite o mês que deseja ver: ");
        scanf("%d", &M);

        printf("Digite o ano que deseja ver: ");
        scanf("%d", &A);

        for (int count = 0; count < 5; count++)
        {
            if (comp[count].mes == M && comp[count].ano == A)
            {
                printf("%s\n", comp[count].compromisso);
            }
        }
    } while (M != 0);
}
===================================================================
// 12. Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e:
//  Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em
// kW) e tempo ativo por dia (real, em horas);
//  Leia um tempo t (em dias), calcule e mostre o consumo total na casa e o consumo
// relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo.
// Apresente este último dado em porcentagem.
#include <stdio.h>

typedef struct
{
    char 
        nome[15];

    float 
        potencia,
        tempo,
        gasto;



}Eletrodomestico;


void
main()
{
    Eletrodomestico eletro[5];

    int
        soma = 0;


    for (int count = 0; count < 5; count++)
    {
        fflush(stdin);
        printf("\n=============================\n");
        printf("Digite o nome do aparelho: ");
        fgets(eletro[count].nome, 15, stdin);

        printf("Digite a potencia do aparelho: ");
        scanf("%f", &eletro[count].potencia);

        printf("Digite o tempo de uso por dia do aparelho: ");
        scanf("%f", &eletro[count].tempo);

        eletro[count].gasto = eletro[count].potencia * eletro[count].tempo;
        soma = soma + eletro[count].gasto;
    }

    printf("O gasto de energia da casa eh de: %dkW/h", soma);

    for (int count = 0; count < 5; count++)
    {
        printf("\n=============================\n");
        printf("Aparelho: %s\nGasto por mes: %.2fkW/h\n", eletro[count].nome, (eletro[count].gasto)/soma * 100);

    }

}
================================================================================
// 13. Faça um programa que gerencie o estoque de um mercado e:
//  Crie e leia um vetor de 5 produtos, com os dados: código (inteiro), nome (máximo 15
// letras), preço e quantidade;
//  Leia um pedido, composto por um código de produto e a quantidade. Localize este
// código no vetor e, se houver quantidade suficiente para atender ao pedido
// integralmente, atualize o estoque e informe o usuário. Repita este processo até ler um
// código igual a zero.
// Se por algum motivo não for possível atender ao pedido, mostre uma mensagem
// informando qual erro ocorreu.
#include <stdio.h>
#include <string.h>


typedef struct
{
    int 
        codigo,
        preco,
        quant;

    char nome[15];

}Produto;

void
main()
{
    Produto produto[5];

    int 
        code = 0,
        quantidade = 0,
        count = 0;

    //Livros
    strcpy(produto[0].nome, "Livro que Tim Maia nao Leu");
    produto[0].codigo = 123;
    produto[0].preco = 50;
    produto[0].quant = 25;


    strcpy(produto[1].nome, "CD da gretchen");
    produto[1].codigo = 234;
    produto[1].preco = 50;
    produto[1].quant = 25;


    strcpy(produto[2].nome, "Bala 7Belo");
    produto[2].codigo = 345;
    produto[2].preco = 50;
    produto[2].quant = 25;


    strcpy(produto[3].nome, "Bola quadrada");
    produto[3].codigo = 456;
    produto[3].preco = 50;
    produto[3].quant = 25;


    strcpy(produto[4].nome, "Perfume de pombo");
    produto[4].codigo = 567;
    produto[4].preco = 50;
    produto[4].quant = 25;

    do
    {
        printf("Digite o código do produto e a quantidade que deseja: ");
        scanf("%d %d", &code, &quantidade);

        if (code == 0)
        {
            break;
        }

        for (count = 0; count < 5; count++)
        {
            if (produto[count].codigo == code)
            {
                if (quantidade <= produto[count].quant)
                {
                    produto[count].quant = produto[count].quant - quantidade;
                    printf("O estoque de %s se alterou para %d unidades\n", produto[count].nome, produto[count].quant);
                }
                else if (quantidade > produto[count].quant)     
                {
                    printf("Houve um problema e não temos estoque suficiente para atender o pedido!n");
                }
            }
        }
    } while (1 == 1);
}
============================================================================
// 14. Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos)
// e A = 5 (aeroportos) e:
//  Crie e leia um vetor de voos, sendo que cada voo contém um código de aeroporto de
// origem e um de destino;
//  Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade
// de voos que saem e quantidade de voos que chegam.
// Nota: Cada aeroporto é identificado por um código inteiro entre 0 e (A-1). Não aceite
// aeroportos de código inexistente.
#include <stdio.h>

typedef struct
{
    int cod_aero[5];
} Codigo;

typedef struct
{
    Codigo 
        origem,
        destino;
    int
        num_ori,
        num_dest;
    
} Aeroporto;


void
main()
{
    Aeroporto voo[5];

    int 
        origem = 0,
        destino = 0;

    voo[0].num_ori = 0;
    voo[0].num_dest = 0;

    voo[1].num_ori = 0;
    voo[1].num_dest = 0;

    voo[2].num_ori = 0;
    voo[2].num_dest = 0;

    voo[3].num_ori = 0;
    voo[3].num_dest = 0;

    voo[4].num_ori = 0;
    voo[4].num_dest = 0;

    for (int count = 0; count < 5; count++)
    {
        do
        {

            printf("============================\n");
            printf("Digite o codigo de origem e destino do %d voo\n", count + 1);
            scanf("%d %d", &origem, &destino);

            
            
        } while (origem > 4 || origem < 1 || destino > 4 || destino < 1);

        switch (origem)
        {
            case 1:
                voo[0].num_ori++;
                break;
            case 2:
                voo[1].num_ori++;
                break;
            case 3:
                voo[2].num_ori++;
                break;
            case 4:
                voo[3].num_ori++;
                break;
            case 5:
                voo[4].num_ori++;
                break;
            
            default:
                break;
        }

        switch (destino)
        {
            case 1:
                voo[0].num_dest++;
                break;
            case 2:
                voo[1].num_dest++;
                break;
            case 3:
                voo[2].num_dest++;
                break;
            case 4:
                voo[3].num_dest++;
                break;
            case 5:
                voo[4].num_dest++;
                break;
            
            default:
                break;
        }
        
    }

    for (int count = 0; count < 5; count++)
    {
        printf("Aeroporto %d: \n", count + 1);
        printf("Voos de destino: %d\n", voo[count].num_dest);
        printf("Voos de origem: %d\n", voo[count].num_ori);
    }
}
==========================================================================
// 15. Faça um programa para armazenar um livro de receitas e:
//  Crie um vetor de 5 receitas, que deve ter nome (máximo 25 letras), quantidade de
// ingredientes e ingredientes;
//  Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor
// de ingredientes, sendo que cada ingrediente contém nome e quantidade;
//  Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar,
// informe ao usuário. Repita o processo até digitar uma string vazia
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome_igr[25];
    int quantidade;
}Igrediente;

typedef struct
{
    char nome_receita[25];
    int quant_igr;
    Igrediente igrediente[10];
}Receita;

void
main()
{
    Receita receita[5];

    char 
        receita_buscada[25];

    int 
        resultado = 0;
    

    for (int count = 0; count < 5; count++)
    {
        fflush(stdin);
        printf("=======================\n");
        printf("Digite o nome da receita: ");
        scanf("%25[^\n]", &receita[count].nome_receita);
        fflush(stdin);
        printf("Digite a quantidade de igredientes: ");
        scanf("%d", &receita[count].quant_igr);

        for(int contador = 0; contador < receita[count].quant_igr; contador++)
        {
            fflush(stdin);
            printf("Digite o nome igredientes %d: ", contador + 1);
            scanf("%25[^\n]", &receita[count].igrediente[contador].nome_igr);
            fflush(stdin);
            printf("Digite a quantidade do igrediente: ");
            scanf("%d", &receita[count].igrediente[contador].quantidade);
        }
    }
    fflush(stdin);
    printf("********************\n");
    printf("Digite a receita que voce quer: \n");
    scanf("%25[^\n]", &receita_buscada);
    printf("********************\n");


    for (int count = 0; count < 5; count++)
    {
        if (strcmp(receita_buscada, receita[count].nome_receita) == 0)
        {
            resultado = 1;
            for (int contador = 0; contador < receita[count].quant_igr; contador++)
            {
                printf("- %d", receita[count].igrediente[contador].quantidade);
                printf("%s -\n", receita[count].igrediente[contador].nome_igr);
            }
            
        }
            
        else if (resultado == 0)
        {   
            resultado = 0;
        }
        
        
    }
    if (resultado == 0)
    {
        printf("Não encontrado!\n");
    }
}
======================================================================
// 16. Faça um programa que armazena filmes produzidos por vários diretores e:
//  Crie e leia um vetor de 5 diretores, cada um contendo nome (máximo 20 letras),
// quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado após
// ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração;
//  Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o
// processo até digitar uma string vazia.
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome_filme[20];
    int 
        ano,
        duracao;
}Filme;

typedef struct
{
    char nome_diretor[20];
    int quant_filmes;
    Filme filme;

}Diretor;


void
main()
{
    Diretor diretor[5];

    char procura[20];

    int result = 0;

    //Diretor 1
    strcpy(diretor[0].nome_diretor, "Diretor Cabral");
    diretor[0].quant_filmes = 1;
    strcpy(diretor[0].filme.nome_filme, "Jureg ternario");
    diretor[0].filme.ano = 2010;
    diretor[0].filme.duracao = 100;

    //Diretor 2
    strcpy(diretor[1].nome_diretor, "Diretor Sergio");
    diretor[1].quant_filmes = 1;
    strcpy(diretor[1].filme.nome_filme, "A escolha dos indecisos");
    diretor[1].filme.ano = 2008;
    diretor[1].filme.duracao = 130;

    //Diretor 3
    strcpy(diretor[2].nome_diretor, "Diretor Jeremias");
    diretor[2].quant_filmes = 1;
    strcpy(diretor[2].filme.nome_filme, "Procurando OMEN");
    diretor[2].filme.ano = 2016;
    diretor[2].filme.duracao = 90;

    //Diretor 4
    strcpy(diretor[3].nome_diretor, "Diretor Julio Cesar");
    diretor[3].quant_filmes = 1;
    strcpy(diretor[3].filme.nome_filme, "A ponte de Roma como nova Cracolandia");
    diretor[3].filme.ano = 2015;
    diretor[3].filme.duracao = 140;

    //Diretor 5
    strcpy(diretor[4].nome_diretor, "Diretor Dielson");
    diretor[4].quant_filmes = 1;
    strcpy(diretor[4].filme.nome_filme, "DIDI em DIDISNEY LANDIDIA");
    diretor[4].filme.ano = 1990;
    diretor[4].filme.duracao = 127;

    printf("Digite o nome de um diretor para procurar seus filmes: ");
    fgets(procura, 20, stdin);

    procura[strlen(procura) - 1] = '\0';

    

    for (int count = 0; count < 5; count++)
    {
        result = strcmp(procura, diretor[count].nome_diretor);
      
        if (result == 0)
        {
            printf("O filme feito por: ");
            for (int contador = 0; contador < strlen(diretor[count].nome_diretor); contador++)
            {
                printf("%c", diretor[count].nome_diretor[contador]);
            }

            printf(" eh ");

            for (int contador = 0; contador < strlen(diretor[count].filme.nome_filme); contador++)
            {
                printf("%c", diretor[count].filme.nome_filme[contador]);
            }
        }   
    }
}
===================================================================================================
// 17. Definir a estrutura cuja representação gráfica é dada a seguir, definir os campos com ostipos
// básicos necessários e implementar o que se pede.
// O Cadastro é composto de:
// Nome 
// Endereço 
// Salário
//  Identidade 
// CPF 
// Estado Civil
//  Telefone 
// Idade 
// Sexo
//  O Endereço é composto de:
//  Rua 
// Bairro 
// Cidade
//  Estado 
// CEP
// a) Crie um vetor Cadastro com 5 elementos;
// b) Permita ao usuário entrar com dados para preencher esses 5 cadastros;
// c) Encontre a pessoa com maior idade entre os cadastrados;
// d) Encontre as pessoas do sexo masculino;
// e) Encontre as pessoas com sal ´ ario maior que 1000;
// f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo
// usuário.
#include <stdio.h>
#include <string.h>

typedef struct
{
    char rua[30];
    char bairro[30];
    char cidade[30];
    char estado[30];
    int CEP;
}Endereco;

typedef struct
{
    char nome[30];
    int salario;
    float identidade;
    float CPF;
    char estado_civil;
    float telefone;
    int idade;
    char sexo;
    Endereco endereco;
}Cadastro;


void
clean()
{
    fflush(stdin);
}

int
main()
{
    Cadastro pessoa[5];

    int maior = 0,
        parametro = 0,
        parametro2 = 0,
        parametro3 = 0,
        homem[5] = {-1, -1, -1, -1, -1},
        salario_alto[5] = {-1, -1, -1, -1, -1};

    float id = 0;

    for (int count = 0; count < 5; count++)
    {
        clean();
        printf("Digite seu nome: ");
        scanf("%30[^\n]", &pessoa[count].nome);

        printf("Digite seu salario: ");
        scanf("%d", &pessoa[count].salario);

        printf("Digite sua identidade: ");
        scanf("%f", &pessoa[count].identidade);

        printf("Digite seu CPF: ");
        scanf("%f", &pessoa[count].CPF);
        clean();
        printf("Digite seu estado civil (s)Solteiro (c)Casado: ");
        scanf("%c", &pessoa[count].estado_civil);

        printf("Digite seu telefone: ");
        scanf("%f", &pessoa[count].telefone);

        printf("Digite sua idade: ");
        scanf("%d", &pessoa[count].idade);

        clean();
        printf("Digite seu sexo(m/f): ");
        scanf("%c", &pessoa[count].sexo);

        clean();
        printf("Digite sua rua: ");
        scanf("%30[^\n]", &pessoa[count].endereco.rua);

        clean();
        printf("Digite seu bairro: ");
        scanf("%30[^\n]", &pessoa[count].endereco.bairro);

        clean();
        printf("Digite seu cidade: ");
        scanf("%30[^\n]", &pessoa[count].endereco.cidade);

        clean();
        printf("Digite seu estado: ");
        scanf("%30[^\n]", &pessoa[count].endereco.estado);

        printf("Digite seu CEP: ");
        scanf("%d", &pessoa[count].endereco.CEP);
    }

    //Encontrar os homens e a pessoa mais velha
    for (int count = 0; count < 5; count++)
    {
        if (pessoa[count].idade > maior)
        {
            maior = pessoa[count].idade;
            parametro = count;
        }

        if (pessoa[count].sexo == 'm')
        {
            homem[parametro2] = count;
            parametro2++;
        } 

        if (pessoa[count].salario > 1000)
        {
            salario_alto[parametro3] = count;
            parametro3++;
        }
    }
    //Encontrar a pessoa mais velha
    printf("A pessoa mais velha é a %s\n", pessoa[parametro].nome);

    //Encotnrar 
    for (int count = 0; count < 5; count++)
    {
        if (homem[count] != -1)
        {
            printf("Temos o homem: %s\n", pessoa[homem[count]].nome);
        }

        if (salario_alto[count] != -1)
        {
            printf("Temos a pessoa com salario acime de 1000: %s\n", pessoa[salario_alto[count]].nome);
        }
    }

    printf("Digite o valor da identidade que deseja buscar: ");
    scanf("%f", &id);

    for (int count = 0; count < 5; count++)
    {
        if (pessoa[count].identidade == id)
        {
            printf("A pessoa buscada é: %s", pessoa[count].nome);
        }
    }
    

    return 0;
}
===========================================================================================
// 18. Escreva um programa que receba dois structs do tipo "dma", cada um representando uma data válida,
// e calcule o número de dias que decorreram entre as duas datas;

typedef struct
{
    int 
        dia,
        mes,
        ano;
}dma;


void
main()
{
    dma data[2];

    int resultado = 0;
    
    
    printf("Digite o ano da primeira data: ");
    scanf("%d", &data[0].ano);

    printf("Digite o ano da segunda data: ");
    scanf("%d", &data[1].ano);


    printf("Digite o mes da primeira data: ");
    scanf("%d", &data[0].mes);

    printf("Digite o mes da segunda data: ");
    scanf("%d", &data[1].mes);
            


    printf("Digite o dia da primeira data: ");
    scanf("%d", &data[0].dia);

    printf("Digite o dia da segunda data: ");
    scanf("%d", &data[1].dia);

    resultado = data[0].dia - data[1].dia + ((data[0].mes * 30) - (data[1].mes * 30)) + ((data[0].ano * 365) - (data[1].ano * 365));

    if (resultado < 0)
    {
        resultado = resultado * (-1);
    }

    printf("O número de dias passados foi: %d", resultado);
}

