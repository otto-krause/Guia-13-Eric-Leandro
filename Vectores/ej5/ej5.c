#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int a[20];
 int i;
 int j=0;
 int num1=0;
 for (i=1;i<21;i++)
 {
     printf ("Ingrese unidad vendida del vendedor %i:",i);
     scanf ("%i",&a[i]);
     //suma para el total de unidades vendidas
     j=j+a[i];

 if (a[i]>num1)
 {
     num1=a[i];
 }
 }

printf ("\nLas unidades vendidas en total son %d \n ",j);
printf ("\nEl vendedor con mayor venta diaria tiene %d",num1);
system ("pause");
return 0;
}

