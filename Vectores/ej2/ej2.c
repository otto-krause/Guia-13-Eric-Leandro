#include <stdlib.h>
#include <stdio.h>

int main(){
int j=0;
int i;
int a[5];
int mayor= 0;
//Ingrese numeros
    for(i=0;i<6;i++)
    {
        printf ("Ingrese un numero: ");
        scanf("%i",&a[i]);
        //Suma de los numeros
        j=j+a[i];
    }
//para sacar el mayor
   for ( i =0; i <6; i++)
   {
       if (a[i]>mayor)
       {
           mayor=a[i];
       }
   }
    printf ("\n El promedio es %d ",j/5);
    printf ("\n El mayor de los numeros es %d ",mayor);

system ("pause");
return 0;


}
