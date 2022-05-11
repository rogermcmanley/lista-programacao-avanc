#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a >  *(float*)b ) return 1;
  if ( *(float*)a == *(float*)b ) return 0;
 
}

int main(void) {
clock_t Ticks[2];
int n; // quantidade de valores
int i = 0, d = 0;
float *x;

Ticks[0] = clock(); // inicio

printf("Digite quantos valores deseja: ");
scanf("%d", &n);

x = malloc(n*sizeof(float));

for ( i = 0; i<n; i++){
   printf("digite o um valor: ");
   scanf("%f",&x[i]);
}

qsort(x,n,sizeof(float),compare);

printf("Ordem crescente: \n");
for (d = 0; d<n; d++){
   printf("%.1f \n", x[d]);
}

free(x);

Ticks[1] = clock();
double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
printf("Tempo de execução: %g ms.", Tempo);
getchar();

return 0;
}
