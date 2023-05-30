#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//corrida: 600
//caminhada: 300
//natação: 500
//bicileta: 400
//calorias gastas por hora

int calcMin(int cal, int min){
    int result;
    result = (cal/60)*min;
    return result;
}

int main(){

    int exer;
    printf("Digite qual exercicio voce realizou:\n1 - Corrida\n2 - Caminhada\n3 - Natacao\n4 - Bicicleta\n");
    scanf("%i", &exer);

    int minutes;
    printf("Digite quantos minutos voce realizou o exercicio:\n");
    scanf("%i", &minutes);
    
    int cal = 0;
    float result = 0;

    switch (exer){

    case 1:
        cal = 600;
        result = calcMin(cal, minutes);
        printf("Voce gastou %.1f kcal!\n", result);
        break;

    case 2:
        cal = 300;
        result = calcMin(cal, minutes);
        printf("Voce gastou %.1f kcal!\n", result);
        break;

    case 3:
        cal = 500;
        result = calcMin(cal, minutes);
        printf("Voce gastou %.1f kcal!\n", result);
        break;

    case 4:
        cal = 400;
        result = calcMin(cal, minutes);
        printf("Voce gastou %.1f kcal!\n", result);
        break;

    default :
        printf("Digite um valor valido!\n");
        break;
    }
}