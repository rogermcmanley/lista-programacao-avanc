#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

void ordenar (float *vetor, int tamanho,int (*comparar)(float *a, float *b)){

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
clock_t Ticks[2];
int n; // quantidade de valores
float *x; // ponteiro que aponta para float

Ticks[0] = clock(); // inicio

printf("Digite quantos valores deseja: ");
scanf("%d", &n);

x = malloc(n*sizeof(float)); // construção do vetor

for (int i = 0; i<n; i++){
   printf("digite o um valor:");
   scanf("%f",&x[i]);
}

ordenar(x,n,compare);

printf("Ordem crescente: \n");
for (int d = 0; d<n; d++){
   printf("%f \n", x[d]);
}

free(x);

Ticks[1] = clock();
double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
printf("Tempo gasto: %g ms.", Tempo);
getchar();

return 0;
}
