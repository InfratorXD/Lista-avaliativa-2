#include <stdio.h>
    int main(){
    int valor[10];
    int tamanho = 10;

    for(int i=0; i<10;i++){
    scanf("%d",&valor[i]);
    
    }

    while(tamanho > 1){

    for(int i=0;i< tamanho;i++){
        printf("%d ",valor[i]);
    
    
    }

 printf("\n");

    for(int i=0;i < tamanho - 1;i++){
        valor[i] = valor[i] + valor[i + 1];
    }

tamanho--;

    }
        printf("%d ",valor[0]);

        printf("\n");

        return 0;
    }