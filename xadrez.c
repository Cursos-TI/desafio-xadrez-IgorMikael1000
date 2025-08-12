#include <stdio.h>

int main() {
    
    //DECLARAÇÃO DE VARIÁVEIS
    int torre, bispo, rainha;

    //SOLICITA AO USUÁRIO O NUMERO DE CASAS PARA A TORRE ANDAR
    printf("Digite o número de casas para a torre andar: ");
    scanf("%d", &torre);

    //REALIZA O MOVIMENTO DA TORRE
    while(torre != 0){
        printf("Direita\n")
        torre--;
    }
    
    //SOLICITA AO USUÁRIO O NUMERO DE CASAS PARA O BISPO ANDAR
    printf("Digite o número de casas para o bispo andar: ");
    scanf("%d", &bispo);

    //REALIZA O MOVIMENTO DO BISPO
    do{
        printf("Cima, Direita\n");
        bispo--;

    } while(bispo != 0);

    //SOLICITA AO USUÁRIO O NUMERO DE CASAS PARA A RAINHA ANDAR
    printf("Digite o número de casas para a rainha andar: ");
    scanf("%d", &rainha);

    //REALIZA O MOVIMENTO DA RAINHA
    for(rainha; != 0; rainha--){
        printf("Esquerda\n");
    }

    return 0;
}
