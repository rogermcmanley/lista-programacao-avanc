#include <stdio.h>

int main(void) {

  int vet[] = {4,9,13};
  int i;

  // La�o for respons�vel por imprimir na tela o que est� armazenado no endere�o (vet+i).
  for(i=0;i<3;i++){
    printf("%d ",*(vet+i));
  }
  // La�o for respons�vel por imprimir na tela qual � o endere�o de (vet+i).
  for(i=0;i<3;i++){
   printf("%X ",vet+i);
  }
}
