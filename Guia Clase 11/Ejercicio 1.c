#include <stdlib.h>
#include <stdio.h>
void Numeros();
 int main ()
 {
     int num1,num2;
     Numeros(num1,num2);
     return 0;
 }
 void Numeros(int num1,int num2)
 {

     printf ("Ingrese un numero\n");
     scanf("%d",&num1);
      printf ("Ingrese otro numero\n");
     scanf("%d",&num2);
     system ("cls");
     printf ("Los numeros ingresados son \n%d  \n%d",num1,num2);

 }
