#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int a[30];
    int i;
    int j=0;

     for(i=1;i<31;i++)
    {
        printf ("Ingrese un nota del alumno %i: ",i);
        scanf("%i",&a[i]);
        //Suma de las notas
        j=j+a[i];
    }
    printf ("El promedio en general es %d",j/30);

    system ("pause");
    return 0;
}
