#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a[6];
    int i;
    int Asc=0;
    int desc=0;

    printf ("Ingrese un listado de 5 numeros \n ");
    for (i=0;i<6;i++)
    {
        scanf ("%d",&a[i]);

    }
    //1 2 3 4 5 6
        for (i=0;i<5;i++)
            {
        if (a[i]<=a[i+1])
        {
            Asc++;
        }
            }
        // 6 5 4 3 2 1

for(i=0;i<5;i++){
        if  (a[i]>=a[i+1])
        {
            desc++;
        }
        }


if (Asc==5)
{
    printf ("Estan ingresados de forma ascendente");
}
else
    {

    if (desc==5)
    {
        printf ("Estan ingresados de forma descendente");

    }
    else {
          printf ("Estan ingresados de forma desordenada");
    }
    }

printf ("\n La suma entre el primero y el ultimo es %d",a[0]+a[5]);

    system ("pause");
    return 0;
}

