#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    float value;
    printf("Digite o valor total do produto:\n");
    scanf("%f", &value);

    printf("===================\n");

    int payMethod;
    printf("Selecione o metodo de pagamendo:\n1 - A vista\n2 - Parcelamento 5x sem juros\n3 - Parcelamento 10x com juros\n");
    scanf("%i", &payMethod);

    float finalPay = 0;

    switch (payMethod){

    case 1:
        finalPay = (value * 0.9);
        printf("===================\n\nValor a vista com desconto: R$ %.2f\n", finalPay);
        break;

    case 2:
        finalPay = (value / 5);
        printf("===================\n\nValor parcelado em 5 vezes sem juros: 5 x R$ %.2f\n", finalPay);
        break;

    case 3:
        finalPay = ((value*1.2) / 10);
        printf("===================\n\nValor parcelado em 10 vezes com juros: 10 x R$ %.2f\n", finalPay);
        break;
    
    default:
        printf("Digite uma opcao valida!");
        break;
    }
}