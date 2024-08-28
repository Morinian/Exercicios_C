#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void) {

    //// Exercicio 1
    //float metros, deci, cem, mili;

    //printf("Digite o valor em metros: ");
    //scanf("%f", &metros);

    //deci = metros / 10;
    //cem = metros / 100;
    //mili = metros / 1000;

    //printf("Metros: %f \nDecimetros: %f \nCentimetros: %f \nMilimetros: %f ", metros, deci, cem, mili);

    //// Exercio 2
    //int a = 1;
    //int b = 1;
    //for (int cont = 0; cont < 9; cont++) {
    //    for (int cont2 = 0; cont < 10; cont++) {
    //        printf("%dx%d: %d \n", a, b, a * b);
    //        b++;
    //    }
    //    b = 1;
    //    a++;
    //}

    //// Exercicio 3
    //double Fah;
    //int Cel;

    //printf("Digite o valor em Fahrenheit: ");
    //scanf("%lf", &Fah);
    //Cel = (Fah - 32.0) * (5.0 / 9.0);

    //printf("Ovalor em Celsius: %d", Cel);

    //// Exercicios 4
    //int num;
    //printf("Digite o num: ");
    //scanf("%d", &num);
    //if (num % 2 == 0) {
    //    printf("É par");
    //}
    //else {
    //    printf("É impar");
    //}

    //// Exercicio 5
    //double Fah, Cel;
    //printf("Digite o valor em Fahrenheit: ");
    //scanf("%lf", &Fah);
    //Cel = (Fah - 32.0) * (5.0 / 9.0);

    //printf("O valor em Celsius: %lf", Cel);

    //// Exercicios 6
    //int veloMax, veloMaxMot;
    //printf("Velocidade maxima da avenida: ");
    //scanf("%d", &veloMax);

    //printf("Velocidade maxima do motorista: ");
    //scanf("%d", &veloMaxMot);

    //if (veloMaxMot > veloMax) {
    //    veloMax = veloMaxMot - veloMax;
    //    printf("Valor da multa será: %d", veloMax * 5);
    //}
    //else {
    //    printf("Não há multas");
    //}

    //// Exercicio 7
    //int mes, ano, anofinal;
    //printf("Escola o mês ");
    //scanf("%d", &mes);
    //printf("Escola o ano ");
    //scanf("%d", &ano);

    //switch (mes) {
    //case 1:
    //    printf("31");
    //    break;
    //    ;
    //case 2:
    //    anofinal = ano % 100;
    //    if (anofinal % 4 == 0) {
    //        printf("29  %d", anofinal);
    //    }
    //    else {
    //        printf("28 %d", anofinal);
    //    }
    //    break;
    //    ;
    //case 3:
    //    printf("31");
    //    break;
    //    ;
    //case 4:
    //    printf("30");
    //    break;
    //    ;
    //case 5:
    //    printf("31");
    //    break;
    //    ;
    //case 6:
    //    printf("30");
    //    break;
    //    ;
    //case 7:
    //    printf("31");
    //    break;
    //    ;
    //case 8:
    //    printf("31");
    //    break;
    //    ;
    //case 9:
    //    printf("30");
    //    break;
    //    ;
    //case 10:
    //    printf("31");
    //    break;
    //    ;
    //case 11:
    //    printf("30");
    //    break;
    //    ;
    //case 12:
    //    printf("31");
    //    break;
    //    ;
    //}

    //// Exercicio 8
    //int hora;
    //float valor;

    //printf("Digite a hora trabalhada ");
    //scanf("%d", &hora);
    //printf("Digite o valor da hora ");
    //scanf("%f", &valor);

    //if (hora > 40 & hora <= 60) {

    //}
    //else if (hora > 60) {

    //}
    //else {
    //    printf("Sem bonus, R$%f", valor);
    //}

    //// Exercicio 9
    //int num1 = 0, num2 = 1, result = 0;

    //for (int cont = 1; cont <= 15; cont++) {
    //    result = num1 + num2;
    //    printf("\n Seq%d: %d", cont, result);
    //    num1 = num2;
    //    num2 = result;
    //    result = 0;
    //}

    ////Exercicio 10
    //int soma = 0;

    //for (int num = 2; num <= 100; num++) {
    //    soma = 0;
    //    //Pegar os divisores 
    //    for (int div = 1; div < num; div++) {
    //        if (num % div == 0)
    //            soma += div;
    //    }

    //    if (num == soma)
    //        printf("\n %d é perfeito", num);

    //}

    ////Exercicio 11
    //int num;
    //bool primo = true;

    //printf("Escreva o numero: ");
    //scanf("%d", &num);

    //for (int i = 2; i < num; i++) {
    //    if (num % i == 0)
    //        primo = false;
    //}

    //if (primo == false)
    //    printf("Ele n é primo");
    //else
    //    printf("Ele é primo");

    ////Exercicio 12
    //int num, temp;
    //bool verifica = false;

    //printf("Insira o numero ");
    //scanf("%d", &num);

    //temp = num; //numero temporario

    //while (temp > 0) {
    //    if (temp % 10 == 3) {
    //        verifica = true;
    //    }
    //    temp = temp / 10;
    //}

    //if (verifica == true)
    //    printf("O numero %d tem 3", num);
    //else {
    //    printf("O numero %d não tem 3", num);
    //}

    ////Exercicio 13
    //    unsigned int num;
    //printf("Insira o numero ");
    //scanf("%d", &num);


}