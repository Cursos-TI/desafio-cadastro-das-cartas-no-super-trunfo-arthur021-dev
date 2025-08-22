#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    char estado[2], codigocarta[5], nomecidade[20];
    char estado2[2], codigocarta2[5], nomecidade2[20];
    float pontosturisticos, pontosturisticos2;
    float populacao;
    float populacao2;
    float areakm2, pib2;
    float areakm, pib;
    float divisao11, divisao12;
    float divisao21, divisao22;
    float superpoder, superpoder2;
    

    printf("Qual a letra do estado?: \n");
    scanf("%2s", estado);

    printf("Qual o código da carta?: \n");
    scanf("%5s", codigocarta);

    printf("Qual o nome da cidade?: \n");
    scanf("%20s", nomecidade);

    printf("Qual a população?: \n");
    scanf(" %f", &populacao);

    printf("Quantos pontos turísticos existem?: \n");
    scanf(" %f", &pontosturisticos);

    printf("Quantos KM area tem?: \n");
    scanf(" %f", &areakm);

    printf("Qual o pib do estado?: \n");
    scanf(" %f", &pib);

    divisao11 = populacao / areakm;
    divisao12 = populacao / pib;


    




    printf("Qual a letra do segundo estado?: \n");
    scanf("%2s", estado2);

    printf("Qual o código da segunda carta?: \n");
    scanf("%5s", codigocarta2);

    printf("Qual o nome da cidade?: \n");
    scanf("%20s", nomecidade2);

    printf("Qual a população?: \n");
    scanf(" %f", &populacao2);

    printf("Quantos pontos turísticos existem?: \n");
    scanf(" %f", &pontosturisticos2);

    printf("Quantos KM area tem?: \n");
    scanf(" %f", &areakm2);

    printf("Qual o pib do estado?: \n");
    scanf(" %f", &pib2);

    divisao21 = populacao2 / areakm2;
    divisao22 = populacao2 / pib2;





    printf("Qual tem a maior área: %d\n", areakm > areakm2);
    printf("Qual tem a maior população: %d\n", populacao > populacao2);
    printf("Qual tem o maior PIB: %d\n", pib > pib2);
    printf("Qual tem mais pontos turísticos: %d\n", pontosturisticos > pontosturisticos2);
    printf("Qual tem maior densidade populacional: %d\n", divisao11 < divisao21);

    superpoder = areakm + populacao + pib + pontosturisticos + (divisao11/1);
    superpoder2 = areakm2 + populacao2 + pib2 + pontosturisticos2 + (divisao21/1);

    printf("Qual tem mais super poder: %d\n", pontosturisticos > pontosturisticos2);


    



  
    return 0;

}





    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

