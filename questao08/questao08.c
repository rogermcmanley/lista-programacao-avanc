#include <stdio.h>

int main(void) {

  int vet[] = {4,9,13};
  int i;

  // Laço for responsável por imprimir na tela o que está armazenado no endereço (vet+i).
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
  // Laço for responsável por imprimir na tela qual é o endereço de (vet+i).
  for(i=0;i<3;i++){
   printf("%X ",vet+i);
  }
}
