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
  if (num2 != 0){
      return printf("\nLa division es:%.2f",(num1/num2));
  }
  else{
    printf("\nError division por cero");
    return 0;
  }
  
}

int main (){

    float num1,num2;
    
    printf("Dame dos numeros: \n");
    scanf ("%f", &num1);
    scanf("%f",&num2);
    
    printf("La suma es: %.2f",suma(num1, num2));
    printf("\nLa resta es: %.2f",resta(num1, num2));
    printf("\nLa multiplicacion es: %.2f",multiplicacion(num1, num2));
    division(num1, num2);

    return 0;
}
