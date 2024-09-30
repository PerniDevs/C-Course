#include <stdio.h>

// Constantes: #define NOMBRE valor; --> constantes
#define PI 3.14;
#define EDAD 29;

// Variables TipoDato Nombre = valor; --> variables
float sueldo = 300;

int main(){
    //#define NOMBRE valor;-->constantes
    //TipoDato Nombre = valor; -->variables
    float sueldo = 25.456;
    float bono = 4.560;
    sueldo += bono; //sueldo = sueldo + bono
    printf("%f",sueldo);
    return 0;

}