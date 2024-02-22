#include <stdio.h>

/*Funcion suma*/

float suma (float num1, float num2){
    return (num1+num2);
}

/*Funcion resta*/
float resta(float num1,float num2){
  return (num1-num2);
}

/*Funcion multiplicacion*/
float multiplicacion (float num1, float num2){
    return (num1*num2);
}

/*Funcion division*/
float division(float num1,float num2){
  if (num2 == 0){
    printf("Error division por cero");
  }
  else{
    return (num1/num2);
  }
}
int main (){

    float num1,num2;
    
    printf("Dame dos numeros");
    scanf ("%f", &num1);
    scanf("%f",&num2);
    
    printf("La suma es: %.2f", suma(num1, num2));
    printf("La resta es: %.2f",resta(num1, num2));
    printf("La multiplicacion es: %.2f", multiplicaion(num1, num2));
    printf("La division es: %.2f", division(num1, num2));
}
