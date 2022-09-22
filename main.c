/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/main.c to edit this template
 */

/* 
 * File:   main.c
 * Author: lamb
 *
 * Created on 22 de setembro de 2022, 13:24
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char senha[20]; int tamanho;
    printf("Digite a senha: ");
    //scanf("%s", nome);
    
    fgets(senha, 20, stdin);
    senha[strcspn(senha, "\n")] = 0;    
    //printf("%d", strcmp(senha, "abacate"));    
    //if (senha == "abacate"){
    if (strcmp(senha, "abacate") == 0){
        printf("Acesso autorizado");
    } else {
        printf("Acesso negado");
    }    
    return (EXIT_SUCCESS);
}

