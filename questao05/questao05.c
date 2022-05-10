int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }

 /* o que foi impresso:

i = 0
vet[0] = 1.1
*(f + 0) = 1.1
&vet[0] = 7D8F5120
(f + 0) = 7D8F5120

i = 1
vet[1] = 2.2
*(f + 1) = 2.2
&vet[1] = 7D8F5124
(f + 1) = 7D8F5124

i = 2
vet[2] = 3.3
*(f + 2) = 3.3
&vet[2] = 7D8F5128
(f + 2) = 7D8F5128

i = 3
vet[3] = 4.4
*(f + 3) = 4.4
&vet[3] = 7D8F512C
(f + 3) = 7D8F512C

i = 4
vet[4] = 5.5
*(f + 4) = 5.5
&vet[4] = 7D8F5130
(f + 4) = 7D8F5130
*/
}

