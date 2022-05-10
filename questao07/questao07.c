#include <stdio.h>

int main(void) {
  int mat[4], *p, x;

  p = mat + 1; // válida, p vai receber o endereço da posição 2 do vetor mat[];
  p = mat++; // inválida, 
  p = ++mat; // inválida, 
  x = (*mat)++; // válida, 

}
