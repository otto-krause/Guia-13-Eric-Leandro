#include <stdlib.h>
#include <stdio.h>
//Falta funcion.


int main()
{
int j=0;
int i;
int a[5];
for (i = 0; i < 5; i++) //for(i=0;i<6;i++)de o a 5 son 6 valores...
{
    printf("Introduce un valor de la resistencia: ");
    scanf("%i", &a[i]);
    j = j + a[i];
    }
    for (i = 0; i < 5; i++) //for(i=0;i<6;i++)de o a 5 son 6 valores...
    {
        printf(" %i, ",a[i]) ;

    }
    printf ("\n La suma es %d ",j);

system ("pause");
return 0;


}
