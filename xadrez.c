#include <stdio.h>

//RECURSIVIDADE PARA MOVIMENTO DA TORRE
void movimentoTorre (int t){
   if(t > 0){
       movimentoTorre(t - 1);
       printf("Direita\n");
   }
}

//RECURSIVIDADE PARA MOVIMENTO DO BISPO
void movimentoBispo (int b){

    int i, j;

    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 1; j++){
                printf("Direita\n");
        }
        printf("Cima\n")
    }

}

//RECURSIVIDADE PARA MOVIMENTO DA RAINHA
void movimentoRainha (int r){
    if(r > 0){
        movimentoRainha(r - 1);
        printf("Esquerda\n");
    }
}


int main() {
    
    //DECLARAÇÃO DE VARIÁVEIS
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    //REALIZA O MOVIMENTO DA TORRE
    movimentoTorre(torre);
    
    //REALIZA O MOVIMENTO DO BISPO
    movimentoBispo(bispo);

    //REALIZA O MOVIMENTO DA RAINHA
    movimentoRainha(rainha);
    
    //REALIZA O MOVIMENTO DO CAVALO
    for(int i = 1, j = 1; i <= 1 && j <= 1; i++, j++){
        for(int k = 1, l = 1; i <= 2 && j <= 2; i++, j++){
            printf("Cima\n");
        }
        printf("Direita\n")
    }

    return 0;
}
