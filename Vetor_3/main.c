#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int i;
    printf("Voce deve digitar treis numeros: \n");

    double vetor[3];
    

    for (i =0; i<3; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }
       printf("O Vetor digitado contem : [%.lf,%.lf,%.lf]\n", vetor[0],vetor[1],vetor[2]);


    return 0;
}
