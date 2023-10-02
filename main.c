#include <stdio.h>
#define Ex42

#ifdef Ex41



int main()
{

    /* 1 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um tera� as componentes de ordem impar
    e o outro tera� as componentes de ordem par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 9}, o programa
    deve gerar os vetores u = {3, 6, 1, 2, 7} e w = {5, 8, 4, 3, 9}. */

    int a[10];
    int b [5];
    int c [5];
    int i;
    int bi = 0;
    int ci = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o Valor do Indice %d: \n", i+1);
        scanf("%d", &a[i]);

        if( i % 2 == 0)
        {
           c [ci] = a [i];
           ci++;
        }
        else
        {
            b [bi] = a [i];
            bi++;
        }

    }

     printf ("O Vetor A e: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
     printf ("O vetor B Composto dos Indices Pares e: %d  %d  %d  %d  %d \n", b[0], b[1], b[2], b[3], b[4]);
     printf ("O vetor C Composto dos Indices Impares e: %d  %d  %d  %d  %d \n", c[0], c[1], c[2], c[3], c[4]);

}

#endif // Ex41


#ifdef Ex42

int main()
{
    /* 2 - Escreva um programa que receba um vetor de inteiros com tamanho 10 e o
    decomponha em dois outros vetores. Um tera� as componentes de valor impar
    e o outro tera� as componentes de valor par.
    Por exemplo, se o vetor dado for v = {3, 5, 6, 8, 1, 4, 2, 3, 7, 4} o
    programa deve gerar os vetores u = {3, 5, 1, 3, 7} e w = {6, 8, 4, 2, 4}.  */

    int a[10];
    int b [10];
    int c [10];
    int i;
    int bi = 0;
    int ci = 0;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o Valor do Indice %d: \n", i+1);
        scanf("%d", &a[i]);

        if( a[i] % 2 == 0)
        {
            c [ci] = a [i];
            ci++;

        }
        else
        {
            b [bi] = a [i];
            bi++;
        }


    }

    printf ("O Vetor A e: %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n", a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);

    for ( i = 0; i < ci; i++)
    {
        if ( i = 0)
        {
            printf("O Vetor C ( Pares ) e: %d", c [ci]);
        }
        else
        {
            if ( i = ci - 1)
            {
                printf (", %d.\n", c [ci]);
            }

            else
            {
                printf (", %d", c [ci]);
            }

        }
    }


    for ( i = 0; i < bi; i++)
    {
        if ( i = 0)
        {
            printf("O Vetor B ( Impares ) e: %d", b [bi]);
        }
        else
        {
            if ( i = bi - 1)
            {
                printf (", %d.\n", b [bi]);
            }
            else
            {
                printf (", %d", b [bi]);
            }

        }
    }

    printf("\nDigite X para sair  \n");
    char saida;
    while(saida != 'X' && saida != 'x')
    {
        scanf(" %c", &saida);

        if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }

    return 0;


}





#endif // Ex42

#ifdef Ex43

/*
Defina 2 vetores bidimensionais do tipo inteiro de 2x3. Escreva um programa
    que recebe os dados via teclado para esses 2 vetores. Usando o operador
    adicao "+", some os elementos de mesmo indice dos 2 vetores e guarde o
    resultado em um 3. vetor. Imprima na tela o indice, os valores e o resultado
    dos 6 elementos dos vetores.
*/


int main() {

 int given1[2][3];
 int given2[2][3];
 int resultado[2][3];
 int i = 0;
 int j = 0;

 printf("Atribuicao dos valores do primeiro vetor: \n");
   for ( i = 0; i < 2; i++) {

        printf("Estou na linha %d\n", i);

        j = 0;

        for ( j = 0; j < 3; j++) {
          printf("given1[%d][%d]\n", i, j);
          printf("\ndigite o valor para a linha %d e coluna %d: ", i, j);
          scanf("%d", &given1[i][j]);
          resultado[i][j] = given1[i][j];
        }
    }


    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
        printf("\no valor para a linha %d e coluna %d e: %d", i, j, given1[i][j]);
        }
    }

    printf("Atribuicao dos valores do segundo vetor: \n");
    for ( i = 0; i < 2; i++) {

        printf("Estou na linha %d\n", i);

        j = 0;

        for ( j = 0; j < 3; j++) {
          printf("given2[%d][%d]\n", i, j);
          printf("\ndigite o valor para a linha %d e coluna %d: ", i, j);
          scanf("%d", &given2[i][j]);
          resultado[i][j] += given2[i][j];
        }
    }


    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
        printf("\no valor para a linha %d e coluna %d e: %d", i, j, given2[i][j]);
        }
    }



       for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 3; j++) {
        printf("\no resultado da soma para a linha %d e coluna %d e: %d", i, j, resultado[i][j]);
        }
    }

          printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }


return 0;
}

#endif // Ex43



#ifdef Ex44
/*

4 - Receba via teclado 10 valores inteiros e ordene por ordem crescente assim
    que sao digitados. Guarde-os em um vetor. Mostre ao final os valores
    ordenados.

 */


 int main() {

     int vetor[10];
     int i, j;
     int aux = 0;

     printf("Digite os valores do vetor");

     for(i = 0; i < 10; i++) {
        printf("\nDigite o valor da %dª linha\n", i+1);
        scanf("%d", &vetor[i]);

        printf("O seu vetor e: [");
        printf(" %d ", vetor[i]);
        printf("]");

        for(j = i - 1; j > 0; j--) {
            if(i > 0) {
                if(vetor[i] < vetor[j]) {
                    aux = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = aux;
                }
            }
        }
     }


        printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }



 return 0;
 }





#endif // Ex44
