#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

int main(void) {
 int n; 
 float *z;

 printf("Digite quantos valores deseja: ");
 scanf("%d", &n);
 z = malloc(n*sizeof(float));

for (int i = 0; i<n; i++){
   printf("digite um valor:");
   scanf("%f",&z[i]);
}

qsort(z,n,sizeof(float),compare);

printf("Ordem crescente: \n");
for (int d = 0; d<n; d++){
   printf("%.1f \n", z[d]);
}

free(z);

return 0;
} 
