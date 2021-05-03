#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Objetivo: Elaborar um programa que armazene os dados de várias equações do Segundo Grau
//Entrada: Os coeficientes para calcular a equação
//Saída: As raízes das equações de Segundo Grau

// Estrutura da equação
typedef struct{
    int CoefA, CoefB, CoefC;
    float Media;
    float Delta;
    float DeltaRaiz;
    float Raiz1;
    float Raiz2;
}Equacao;


int main(){
    // Declarações
    Equacao SegundoGrau[100];
    int Quantidade;

    // Instruções
    printf("Informe o numero de equacoes que deseja realizar: ");
    scanf("%d", &Quantidade);
    printf("Digite os coeficientes (A, B e C) para calcularmos uma equacao do segundo grau\n");
    for(int i = 0; i < Quantidade; i++){
        printf("Digite o numero do coeficiente A: ");
        scanf("%d", &SegundoGrau[i].CoefA);
        printf("Digite o numero do coeficiente B: ");
        scanf("%d", &SegundoGrau[i].CoefB);
        printf("Digite o numero do coeficiente C: ");
        scanf("%d", &SegundoGrau[i].CoefC);

    
        for(int i = 0; i < Quantidade; i++){
            SegundoGrau[i].Delta = (SegundoGrau[i].CoefB * SegundoGrau[i].CoefB) - (4 * SegundoGrau[i].CoefA * SegundoGrau[i].CoefC);
            SegundoGrau[i].DeltaRaiz = sqrt(SegundoGrau[i].Delta);

            if(SegundoGrau[i].Delta >= 0){
                SegundoGrau[i].Raiz1 = (-SegundoGrau[i].CoefB + SegundoGrau[i].DeltaRaiz)/(2 * SegundoGrau[i].CoefA);
                SegundoGrau[i].Raiz2 = (-SegundoGrau[i].CoefB - SegundoGrau[i].DeltaRaiz)/(2 * SegundoGrau[i].CoefA);
                printf("As raizes da %d equacao e: %.2f e %.2f\n", i+1, SegundoGrau[i].Raiz1, SegundoGrau[i].Raiz2);
            }else{
                printf("Nao e possivel calcular o delta negativo da %d equacao\n", i+1);
            }
        }    
    }
    return 0;
}