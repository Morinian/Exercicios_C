#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // // Exercicio 1
    // int contador = 0;
    // bool NomeCarac = false;

    // struct Pessoa {
    //   char nome[16];
    //   int idade;
    // };

    // struct Pessoa pessoa[3];

    // for (contador = 0; contador < 3; contador++) {

    //   NomeCarac = false;
    //   printf("Digite o nome: ");
    //   scanf("%s", pessoa[contador].nome);

    //   while (NomeCarac == false) {
    //     if (pessoa[contador].nome[15] == '\0') {
    //       NomeCarac = true;
    //     } else {
    //       for (int cont = 0; cont <= 15; cont++) {
    //         pessoa[contador].nome[cont] = '\0';
    //       }
    //       printf("Digite o nome: ");
    //       scanf("%s", pessoa[contador].nome);
    //     }
    //   }

    //   printf("Digite a idade: ");
    //   scanf("%d", &pessoa[contador].idade);
    // }

    // for (int cont = 0; cont < 3; cont++) {
    //   printf("Nome: %s idade: %d\n", pessoa[cont].nome, pessoa[cont].idade);
    // }

    // // Exercicio 2
    // struct Usuario {
    //   char login[20];
    //   char senha[20];
    // } 

    // Exercicio 3
    // bool terminar = false;
    // int cont = 0;
    // float media = 0;

    // struct Produto {
    //   char nomeLoja[16];
    //   char tel[9];
    //   float preco;
    // };
    // struct Produto Produto[100];
    // printf("Digite o 1 no nome para terminar a operação \n");

    // while (terminar != true) {
    //   printf("-------------------");
    //   printf("\nDigite o nome: ");
    //   scanf("%s", Produto[cont].nomeLoja);

    //   if (strcmp(Produto[cont].nomeLoja, "1") == 0)
    //     terminar = true;
    //   else {
    //     printf("\nDigite o telefone: ");
    //     scanf("%s", Produto[cont].tel);
    //     printf("\nDigite o preço: ");
    //     scanf("%f", &Produto[cont].preco);
    //     cont++;
    //   }
    // }

    // for (int i = 0; i < cont; i++) {
    //   media += Produto[i].preco;
    // }

    // media = media / cont;

    // for (int i = 0; i < cont; i++) {
    //   if (Produto[i].preco < media) {
    //     printf("A %s está a baixo do tell %s \n", Produto[i].nomeLoja,
    //            Produto[i].tel);
    //   }
    // }

}


