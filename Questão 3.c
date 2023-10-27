#include <stdio.h>
#include <string.h>
    int main(){
    int A[4][4];
    int B[4][4];
    int matriz[4][4];
    char operacao[10];

    for(int i = 0;i < 4;i++){
    for(int j = 0;j< 4;j++){
    scanf("%d", &A[i][j]);
    }
}
    for(int i = 0;i < 4;i++){
    for(int j = 0;j < 4;j++){
    scanf("%d", &B[i][j]);
        }
    }

    scanf("%s", operacao);
    
    if (strcmp("soma", operacao) == 0){
    for(int i = 0;i < 4;i++){
    for(int j=0;j < 4;j++){
        matriz[i][j] = A[i][j] + B[i][j];
    }
    }
    }

    if (strcmp("sub", operacao) == 0){
    for(int i = 0;i < 4;i++){
    for(int j = 0;j < 4;j++){
        matriz[i][j] = A[i][j] - B[i][j];
    }
    }
    }

    if (strcmp("mult", operacao) == 0){
    for(int i = 0;i < 4;i++){
    for(int j=0;j < 4;j++){
        matriz[i][j] = 0;
    for(int mult = 0; mult < 4; mult++){
        matriz[i][j] += A[i][mult] * B[mult][j];
    }
    }
    }
    }

    for(int i = 0;i < 4;i++){
    for(int j = 0;j < 4;j++){
        printf("%2d", matriz[i][j]);
    }
    printf("\n");
    }
    
        return 0;
    }
