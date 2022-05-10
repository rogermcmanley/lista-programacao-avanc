#include <stdio.h>

int main(void) {
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value; // é válido
scanf("%f", &aloha); // é válido
aloha = value; // é válido
printf("%f", aloha); // é válido
coisas[4][4] = aloha[3]; // é válido
coisas[5] = aloha; // é válido
pf = value; // é inválido
pf = aloha; // é inválido
}
