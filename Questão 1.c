#include <stdio.h>
    int main(){
    int valor[10];
    int tamanho = 10;

    for(int i=0; i<10;i++){
    scanf("%d",&valor[i]);
    
    }

    while(tamanho > 1){

    for(int i=0;i< tamanho;i++){
        printf("%d",valor[i]);

        if(i< tamanho - 1){
            printf(" ");
        }
    
    
    }

 printf("\n");

    for(int i=0;i < tamanho - 1;i++){
        valor[i] = valor[i] + valor[i + 1];
    }

tamanho--;

    }
        printf("%d\n",valor[0]);

        return 0;
    }