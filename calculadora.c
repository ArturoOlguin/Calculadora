#include <stdio.h>


float suma (float num1, float num2){
    return (num1+num2);
}
/*Funcion resta*/
float resta(float n1,float n2){
  return n1 - n2;
}

int main (){

float num1,num2;

printf("Dame dos numeros");
scanf ("%f", &num1);
scanf("%f",&num2);

printf("La suma es: %f", suma(num1, num2));
resta(num1, num2);
}
