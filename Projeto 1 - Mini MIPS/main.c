#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reader.h"

struct instrucao{
char inst_char[17], tipo_inst;
int opcode;
int rs;
int rt;
int rd;
int funct;
int imm;
int addr;
};

struct memoria_instrucao{
struct instrucao *mem_inst;
int tamanho;
};

struct dado{
char dado_char[8];
int dado;
};

struct memoria_dados{
struct instrucao *mem_dados;
int tamanho;
};


void main () {

    int choice=-1;
    char nome[50];
    FILE *memoria;

    do{
    printf("----MINI MIPS----\n");
    printf("1) Carregar Memória\n2) Imprimir Memória\n3) Imprimir Registradores\n4) Imprimir todo o simulador\n5) Salvar .asm\n6) Salvar .mem\n7) Executar Programa (run)\n8) Executa uma instrução (Step)\n9) Volta uma instrução (back)\n0) Sair\n-------------\nOpção: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
        printf("Diga o nome do arquivo (com a extensão .mem): ");
        scanf("%s", nome);
        memoria = carrega_memoria(nome);
        break;
        case 2:
        imprimir_memoria(memoria);
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        case 6:
        break;
        case 7:
        break;
        case 8:
        break;
        case 9:
        break;
        case 0:
        printf("Obrigado por utilizar!!\n");
        break;
    };
    }while (choice != 0);


    fclose(memoria);
}