#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>

/*

Autor: Grupo IV
Data: 27/11/2021

*/

//inicializar
int MaiorAlgarismo(int numero);


int main(int argc, char const *argv[]) 
{   
    //variaveis
    int numero = 0, maior = 0;

    //pedir numero
    printf("Numero: ");
    scanf("%d", &numero);

    //chamar função
    maior = MaiorAlgarismo(numero);

    printf("Do numero: %d, o maior algarismo é :%d", numero, maior);
    
    getchar();

    return 0;
}

int MaiorAlgarismo(int numero)
{

    int resto = 0, maior = 0;

    while (numero != 0)
    {   
        //obtem sempre o ultimo algarismo
        resto = numero % 10;

        //verifica se o algarismo é o maior
        if(resto > maior)
            maior = resto;

        numero /= 10;
    }
    
    return maior;

}