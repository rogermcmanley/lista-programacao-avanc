#include <stdio.h>

int main(void) {
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;

aloha[2] = value; // � v�lido
scanf("%f", &aloha); // � v�lido
aloha = value; // � v�lido
printf("%f", aloha); // � v�lido
coisas[4][4] = aloha[3]; // � v�lido
coisas[5] = aloha; // � v�lido
pf = value; // � inv�lido
pf = aloha; // � inv�lido
}
