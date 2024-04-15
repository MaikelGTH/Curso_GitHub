#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

//declaracion de variables
int n,r;
int max = 6;
int min = 1;

srand(time(NULL));

//entrada de datos

//printf("¿Quieres lanzar el dado? pulsa enter->>");

while(getchar() == '\n'){
n = (rand()%(max-min+1))+min;

printf("%d \n",n);

r = (rand()%(max-min+1))+min;
printf("%d \n",r);

}
return 0;

}