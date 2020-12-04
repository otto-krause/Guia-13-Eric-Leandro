#include <stdlib.h>
#include <stdio.h>
//Falta función.
int main()
{
int j=0;
int i;
int a[5];
int mayor= 0;
//Ingrese numeros
    for(i=0;i<5;i++)// de 0 a 5 son 6 valores...
    {
        printf ("Ingrese un numero: ");
        scanf("%i",&a[i]);
        //Suma de los numeros
        j=j+a[i];
    }
//para sacar el mayor
   for ( i =0; i <5; i++)//idem cometario anterior
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
