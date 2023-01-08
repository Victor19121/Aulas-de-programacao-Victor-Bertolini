// 1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro,
// real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável
// usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
#include <stdio.h>

void
main()
{
    int
        numInt = 0,
        *intPointer = NULL;

    float
        numFloat = 0,
        *floatPointer = NULL;

    char 
        letter,
        *letterPointer = NULL;

    //Getting the information
    printf("Enter a number: \n");
    scanf("%d", &numInt);
    
    printf("Enter a broken number: \n");
    scanf("%f", &numFloat);

    printf("Enter a letter: \n");
    scanf(" %c", &letter);

    //Saying the values before
    printf("The digited numbers were: %d and %f. The letter was: %c", numInt, numFloat, letter);

    //LInking the pointers
    intPointer = &numInt;

    floatPointer = &numFloat;

    letterPointer = &letter;

    //Printing the values after the modification

    printf("\nThe modified numbers were: %d and %f. The letter was: %c\n", *intPointer * 2, *floatPointer * 2, *letterPointer + 2);

}
=============================================================================================================================
// 2. Escreva um programa que contenha duas variáveisinteiras. Compare seus endereços e exiba
// o maior endereço.
#include <stdio.h>

void
main()
{
    int 
        *num1 = NULL,
        *num2 = NULL;

    printf("First adress: %p %d\n", &num1, &num1);
    printf("Second adress: %p %d\n", &num2, &num2);
    
    if (&num1 > &num2)
    {   
        printf("The first variable adress is bigger!");
    }
    else
    {
        printf("The second variable adress is bigger!");
    }
}
=======================================================================================================================
// 3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado.
// Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
#include <stdio.h>

void
main()
{
    int 
        num1 = 0,
        num2 = 0;

    printf("Enter a value to first variable: \n");
    scanf("%d", &num1);

    printf("Enter a value to first variable: \n");
    scanf("%d", &num2);
    
    printf("First adress: %d. Second adress: %d\n", &num1, &num2);
    
    if (&num1 > &num2)
    {   
        printf("The first variable adress is bigger!");
    }
    else
    {
        printf("The second variable adress is bigger!");
    }

}
===================================================================================
// 4. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2
// variáveis e troque o seu conteúdo, i.e., esta função é chamada passando duas variáveis A e
// B, por exemplo, e após a execução da função, A conterá o valor de B e B terá o valor de A.
#include <stdio.h>

int 
change(int *num1, int *num2)
{
    //temporary variable
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void
main()
{
    int 
        num1 = 0,
        num2 = 0;

    printf("Enter a value to first variable: \n");
    scanf("%d", &num1);

    printf("Enter a value to second variable: \n");
    scanf("%d", &num2);

    printf("The first value is: %d, the second is: %d\n", num1, num2);

    change(&num1, &num2);

    printf("The first value is: %d, the second is: %d\n", num1, num2);
}
=============================================================================================================
// 5. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2
// valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda
// variável. Escreva o conteúdo das 2 variáveis na tela.
#include <stdio.h>

int 
bigger(int *num1, int *num2)
{
    //If the num2 is bigger i need to make a change
    int temp;
    if (*num2 > *num1)
    {
        //Changing the values
        temp = *num2;
        *num2 = *num1;
        *num1 = temp;
    }
}

void
main()
{
    //Variables
    int 
        num1 = 0,
        num2 = 0;

    //getting the numbers
    printf("Enter a value to first variable: \n");
    scanf("%d", &num1);

    printf("Enter a value to second variable: \n");
    scanf("%d", &num2);

    //A function to
    bigger(&num1, &num2);

    printf("The bigger number is: %d and the smaller is: %d", num1, num2);
}
=====================================================================================================
// 6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função
// que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro
// de A na própria variável A e o dobro de B na própria variável B.
#include <stdio.h>
int
sumdouble(int *num1, int *num2)
{
    *num1 = *num1 * 2;
    *num2 = *num2 * 2;

    return *num1 + *num2;
}

void
main()
{
    int 
        num1 = 0,
        num2 = 0,
        sum = 0;

    printf("Enter a value to first variable: \n");
    scanf("%d", &num1);

    printf("Enter a value to second variable: \n");
    scanf("%d", &num2);

    sum = sumdouble(&num1, &num2);

    printf("The sum was of\nA: %d\nB: %d\n and the sum is: %d\n", num1, num2, sum);
}
=============================================================================================================
