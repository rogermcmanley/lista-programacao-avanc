#include <stdio.h>

int main(void) {
  int mat[4], *p, x;

  p = mat + 1; // v�lida, p vai receber o endere�o da posi��o 2 do vetor mat[];
  p = mat++; // inv�lida, 
  p = ++mat; // inv�lida, 
  x = (*mat)++; // v�lida, 

}
