#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){

    int num;

    printf("Digite um numero de 1 a 5:\n");
    scanf("%i", &num);

    switch (num)
    {
    case 1:
        printf("Escolheu o numero um!\n");
        break;

    case 2:
        printf("Escolheu o numero dois!\n");
        break;

    case 3:
        printf("Escolheu o numero tres!\n");
        break;

    case 4:
        printf("Escolheu o numero quatro!\n");
        break;

    case 5:
        printf("Escolheu o numero cinco!\n");
        break;
    
    default:
        printf("O numero deve ser apenas de 1 a 5!\n");
        break;
    }


}