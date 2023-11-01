#include <stdio.h>
#include <string.h>
    int main(){
    char time_a[12][30];
    char time_b[12][30];
    char posicao1[11];
    char posicao2[11];
    float forca1, forca2;
    char nome_time1[30];
    char nome_time2[30];
    float calculo1 = 0, calculo2 = 0;

    scanf("%29[^\n]%*c", nome_time1);

    for(int i = 0;i<11;i++){
    scanf("%29[^;]; %c; %f%*c", time_a[i], &posicao1[i], &forca1);
    calculo1 += 8 * (posicao1[i] == 'G' ? forca1 : 0) + 10 * (posicao1[i] == 'L' ? forca1 : 0) + 5 * (posicao1[i] == 'Z' ? forca1 : 0) + 8 * (posicao1[i] == 'V' ? forca1 : 0) + 11 * (posicao1[i] == 'M' ? forca1 : 0) + 12 * (posicao1[i] == 'A' ? forca1 : 0);
    }

    scanf("%29[^\n]%*c", nome_time2);

    for(int i = 0;i<11;i++){
    scanf("%29[^;]; %c; %f%*c", time_b[i], &posicao2[i], &forca2);
    calculo2 += 8 * (posicao1[i] == 'G' ? forca2 : 0) + 10 * (posicao1[i] == 'L' ? forca2 : 0) + 5 * (posicao1[i] == 'Z' ? forca2 : 0) + 8 * (posicao1[i] == 'V' ? forca2 : 0) + 11 * (posicao1[i] == 'M' ? forca2 : 0) + 12 * (posicao1[i] == 'A' ? forca2 : 0);
    }

forca1= calculo1/100;
forca2= calculo2/100;

    printf("%s: %.2f de forca\n", nome_time1, forca1);
    printf("%s: %.2f de forca\n", nome_time2, forca2);

    if(forca1 > forca2){
    printf("%s eh mais forte\n", nome_time1);
    }

    else if(forca2 > forca1){
    printf("%s eh mais forte\n", nome_time2);
    }
    
        return 0;
    }
