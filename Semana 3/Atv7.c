/*
    Escreva um programa que receba 10 n�meros inteiros e os ordene em ordem crescente
*/

#include <stdio.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int numero[10], aux;

    for(int i = 0; i < 10; i++){
        printf("Informe um n�mero: ");
        scanf("%d", &numero[i]);
    }

//bubble sort
    for(int i = 0; i < 10; i++){
        for (int j = 0; j < 10-i-1; j++) {
            if(numero[j] > numero[j+1]) {
            aux = numero[j];
            numero[j] = numero[j+1];
            numero[j+1] = aux;
            }
        }        
    }
    
    for (int i = 0; i < 10; i++){
        printf(" %d ", numero[i]);
    }
    
    return 0;
}