#include <stdio.h>
#include <stdlib.h>


int main(){
    int a;
    double soma, media;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &a);

    double vetor[3];

    for (int i=0; i<3; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

	//soma = 0;
   // for (int i=0; i<n; i++) {
       // soma = soma + vetor[i];
   // }

   // media = soma / n;

	//printf("VALORES = ");

    //for (int i=0; i<n; i++) {
        //printf("%.1lf  ", vetor[i]);
    //}

   // printf("\nSOMA = %.2lf\n", soma);
	//printf("MEDIA = %.2lf\n", media);

    return 0;
}





