//
//  main.c
//  aluno-notas
//
//  Created by Guilherme Dinardi on 27/03/19.
//  Copyright © 2019 Guilherme Dinardi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // Declaração de Variaves
    float nota1, nota2, nota3, media;
    char  nome;
    
    // Entrada de Dados
    printf("\n Digite seu nome: ");
    scanf("%c",&nome);
    
    printf("\n Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    
    printf("\n Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    
    printf("\n Digite a sua terceira nota: ");
    scanf("%f", &nota3);
    
    // Declaração de Condicionais
    if ((nota1>nota2 ) && (nota1 > nota3)) {
        media = (nota1 * 3 + (nota2 * 2) + (nota3 * 2)) /7;
    } else {
        if ((nota2 > nota1) && (nota2 > nota3)) {
            media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 2)) /7;
        } else {
            media = ((nota1 * 2) + (nota2 * 2) + (nota3 * 3)) /7;
        }
    }
    // Saida de Dados
    printf("Nome: %c", nome);
    
    // Declaração de Condicionais media
    if (media >= 7.0) {
        printf("\n APROVADO!");
    } else{
        printf("\n REPROVADO! \n");
    }
    printf("\n");
    return 0;
}
