#include <stdio.h>

int main(void) {
 
  int *y[4];
  int *y1;
  double *a[4];
  double *a1;
  char *x[4];
  char *x1;
  float *z[4];
  float *z1;

  x1 = &x;
  y1 = &y;
  z1 = &z;
  a1 = &a;

  printf("char(1 byte):\n\n");
  
  printf("endere�o= %X \n",x1+1);
  printf("endere�o= %X \n",x1+2);
  printf("endere�o= %X \n\n",x1+3);

  printf("int(2 bytes):\n\n");
  
  printf("endere�o= %X \n",y1+1);
  printf("endere�o= %X \n",y1+2);
  printf("endere�o= %X \n\n",y1+3);

  printf("float(4 bytes):\n\n");
  
  printf("endere�o= %X \n",z1+1);
  printf("endere�o= %X \n",z1+2);
  printf("endere�o= %X \n\n",z1+3);

  printf("double(6 bytes):\n\n");
  
  printf("endere�o= %X \n",a1+1);
  printf("endere�o= %X \n",a1+2);
  printf("endere�o= %X \n\n",a1+3);

  return 0;
  }
  
