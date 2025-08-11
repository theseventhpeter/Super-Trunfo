#include <stdio.h>

int main(){  

char Estado = 'A';
char código[20] = "A01";
char cidade[20] = "Palmas";
int população = 323625;
float área = 277.621;
float PIB = 38.511;
int pontos = 30;

printf("o Estado é: %c\n", Estado);
printf("o código é: %s\n", código);
printf("a cidade é: %s\n", cidade);
printf("a população: %d\n", população);
printf("a área é: %.2f\n", área);
printf("o PIB é: %.2f\n", PIB);
printf("os pontos são: %d\n", pontos);
