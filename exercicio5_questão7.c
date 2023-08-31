#include<stdio.h>

main(){
    float nota1, nota2, nota3, peso1 = 1, peso2 = 1, peso3 = 2, media_ponderada, nota_aprovacao = 7.0, resultado;
    
    printf("Digite a nota1: ");
    scanf("%f", &nota1);

    printf("\nDigite a nota2: ");
    scanf("%f", &nota2);

    printf("\nDigite a nota3: ");
    scanf("%f", &nota3);

    media_ponderada = nota1 * peso1 + nota2 * peso2 + nota3 * peso3 / (peso1 + peso2 + peso3);
    
    if(media_ponderada >= nota_aprovacao){
        printf("Aprovado.");
    }else{
        printf("Reprovado.");
    }
}