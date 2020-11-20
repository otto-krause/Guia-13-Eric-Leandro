#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int posicion[15];
    int i;

    for(i=0;i<15;i++){
        printf("Ingresar la nota del alumno %i: ",i+1);
        scanf("%d",&posicion[i]);
    }
    printf("\n");

    printf("Los alumnos donde la nota es mayor a 8 son:\n");
    for(i=0;i<15;i++){
        if (posicion[i]>8)
            printf(" %i,",i+1);
    }
system ("pause");
    return 0;
}
