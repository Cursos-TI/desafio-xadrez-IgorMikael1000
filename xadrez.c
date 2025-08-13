#include <stdio.h>

int main() {
    
    //DECLARAÇÃO DE VARIÁVEIS
    int torre = 1, bispo = 1, cavalo = 1;

    //REALIZA O MOVIMENTO DA TORRE
    while(torre <= 5){
        printf("Direita\n");
        torre++;
    }
    
    //REALIZA O MOVIMENTO DO BISPO
    do{
        printf("Cima, Direita\n");
        bispo++;

    } while(bispo <= 5);

    //REALIZA O MOVIMENTO DA RAINHA
    for(int rainha = 1; rainha <= 8; rainha++){
        printf("Esquerda\n");
    }
    
    //REALIZA O MOVIMENTO DO CAVALO
    while(cavalo == 1){

        for(cavalo = 1; cavalo <= 2; cavalo++){

            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    return 0;
}
