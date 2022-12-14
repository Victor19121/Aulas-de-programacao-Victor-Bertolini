// 1. Altura do Indivíduo
// Neste problema, você deverá ler 1 número que representa a altura de um indivíduo e julgar
// se ele é muito baixo, baixo, médio ou alto de acordo com os valores da tabela.
// Altura Descrição
// altura <= 1.50 muito baixo
// 1.50 < altura <= 1.60 baixo
// 1.60 < altura <= 1.80 mediano
// 1.80 < altura alto

#include <stdio.h>

void
main()
{
    float
        height = 0;

    printf("Enter the height in meters: ");
    scanf("%f", &height);

    printf("The person is: ");

    if (height >= 1.8)
    {
        printf("high");
    }
    else if (height >= 1.6)
    {
        printf("medium");
    }
    else if (height >= 1.5)
    {
        printf("short");
    }
    else 
    {
        printf("very short");
    }
} 
==================================================
2
================================================
// 3. Construa um programa em C usando switch/case para ler a primeira letra do estado civil de
// uma pessoa e mostrar uma mensagem para indicar um local para pessoa ir no final de
// semana. Considere: ‘c’ para casado, ‘s’ para solteiro, ‘v’ para viúvo e ‘d’ para divorciado. Para
// cada uma das entradas, as saídas devem ser:
// c – Indicação: Caramel Sweet & Salt
// s – Indicação: London Pub
// v – Indicação: XI Baile da Melhor Idade
// d – Indicação: Academia Smart Fit
#include <stdio.h>

void
main()
{
    char 
        type;

    printf("Digite a opção que você está: Casado, Solteiro, viúvo, divorciado");
    scanf("%c", &type);

    switch (type)       
    {
        case 'c':
            printf("Indicação: Caramel Sweet & Salt");
            break;

        case 's':
            printf("Indicação: London Pub");
            break;

        case 'v':
            printf("v – Indicação: XI Baile da Melhor Idade");
            break;

        case 'd':
            printf("IIndicação: Academia Smart Fit");
            break;
    
        default:
            break;
    }

}
==================================================
// 4. Faça um algoritmo utilizando os comando for, while e do..while que mostra uma contagem
// regressiva na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após
// a contagem.
// Exemplo de saída:
// << Contagem regressiva >>
// For: 10.. 9.. 8.. 7.. 6.. 5.. 4.. 3.. 2.. 1.. 0.. FIM!
// While: 10.. 9.. 8.. 7.. 6.. 5.. 4.. 3.. 2.. 1.. 0.. FIM!
// Do...While: 10.. 9.. 8.. 7.. 6.. 5.. 4.. 3.. 2.. 1.. 0.. FIM!
#include <stdio.h>

void
main()
{
    int
        count = 10;

    for (count = 10; count >= 0; count--)
        printf("%d\n", count);

    printf("FIM!");


    count = 10;
    while (count >= 0)
    {
        printf("%d\n", count);
        count--;
    }
    printf("FIM!");    


    count = 11;
    do
    {
        count--;
        printf("%d\n", count);
    } while (count >= 0);

    printf("FIM!");    
}
================================================
//5. Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
// Exemplo de saída: Para n=4 a saída deverá ser 1,3,5,7.
#include <stdio.h>

void
main()
{
    int 
        num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int count = 1; count < num * 2; count += 2)
        printf("%d\n", count); 
}
===================================================
#include <stdio.h>

void
main()
{
    int
        num1 = 0,   //numwero para teste 1 
        num2 = 0,   //numero para teste 2
        n = 0,      //quantos numeros o usuário quer visualizar
        parameter = 0;  //O parametro para finalizar o for em loop infinito


    //PPegando os numeros e atribuindo para as variáveis 
    printf("Digite a quantidade de numeros multiplos que deseja:\n");
    scanf("%d", &n);

    printf("Digite um numero:\n");
    scanf("%d", &num1);

    printf("Digite um numero:\n");
    scanf("%d", &num2);

    //Um loop for para pegar cada multiplo dos numeros previamente digitados em num1 e num2
    //OBS: loop infinito
    for(int counter = 0; counter < counter + 1; counter++)
    {
        //A condição para serem multiplos, que é ser multiplo de um ou de outro
        //Não é necessário colocar a opção de ser múltiplo de ambos com &&,
        //visto que se for dos 2, pelo "ou" lógico, então é Verdadeiro e entra no IF
        if((counter % num1 == 0) || (counter % num2 == 0))
        {
            //Printar na tela caso seja multiplo
            printf("A multiple is: %d\n", counter);
            //O parâmetro aumenta 1
            parameter++;

            //Quando o parâmetro atingir a equivalencia com N
            //ou seja, cada vez que existir um multiplo o parametro aumenta 1
            //quando parametro for igual ao número de multiplos que o usuário quer ver ele dá um break
            if (parameter == n)
                break;
        }
    }
}
=======================================================
// 7. Faça um algoritmo que leia um vetor de 10 posições. Mostre então os 3 menores valores do
// vetor.
#include <stdio.h>

void
main()
{
    int 
        array[10] = 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        higher = 0;
    
    for (int count = 0; count < 10; count++)
    {
        if (array[count] > higher)
            higher = array[count];
    }
}
====================================================
