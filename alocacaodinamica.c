#include <stdio.h>
#include <stdlib.h>

int* alocaVetor (int tamanho){
int *aux;

aux= (int*) malloc (tamanho *sizeof(int));

return aux;
}


int main(){

int *vetor,tamanho , cont;

printf ("Digite um tamanho para o vetor");
scanf("%d", &tamanho);

vetor = alocaVetor(tamanho);

for (cont=0; cont<tamanho; cont++){
    vetor [cont]= 90;
}

for (cont=0; cont<tamanho; cont++){
    printf ("%d\n", vetor [cont]);

}
free (vetor); //limpar memoria

return 0;

}
