#include <stdio.h>
#include <stdlib.h>

float compare(const void *a, const void *b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

void ordenar (float *vetor, int tamanho,float (*comparar)(float *a, float *b)){

float aux = 0;
for (int z =0; z<tamanho; z++){
  for(int y=z+1; y<tamanho; y++){
      if(comparar(vetor+z,vetor+y)>0){
        aux = vetor[y];
        vetor[y]= vetor[z];
        vetor[z]=aux;
      }
    }
  }
}

int main(void) {
 int n; // quantidade de valores
 float *x; // ponteiro aponta para float

 printf("Digite quantos valores deseja: ");
 scanf("%d", &n);

 x = malloc(n*sizeof(float)); // construção do vetor

for (int i = 0; i<n; i++){
   printf("digite um valor:");
   scanf("%f",&x[i]);
}

ordenar(x,n,compare);

printf("VOrdem crescente: \n");
for (int d = 0; d<n; d++){
   printf("%.1f \n", x[d]);
}

free(x);

return 0;
} 
