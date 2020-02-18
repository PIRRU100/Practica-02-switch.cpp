#include <stdio.h>
#include <stdlib.h>

int main (){
float a,b,c;
int opt;
printf("1. SUMA\n2. RESTA\n3. MULTIPLICACION\n4. DIVSION");
printf("\n\ seleccione una opcion");
scanf("%d", &opt);
printf("\n\ introduce el primer operando");
scanf("%f", &a);
printf("\n\ introduce el segundo operando");
scanf("%f", &b);

switch (opt){
case 1:
    c=a+b;
    break;
case 2:
    c=a-b;
    break;
case 3:
    c=a*b;
    break;
case 4:
    while(b==0){
        printf("error, b debe de ser distinto de 0\n");
        printf("introduce el segundo operando:");
        scanf("%f", &b);
    }
    printf("\n la division es: %f", c=a/b);
    break;
case 5:
    printf("opcion invalida");
    c=0;
}
printf("El resultado es %f", c);
}
