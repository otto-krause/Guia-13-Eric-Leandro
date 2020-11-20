#include <stdlib.h>
#include <stdio.h>

int main(){
int j=0;
int i;
int a=0;
int b=0;
int max= 0;
int min=0;
//Ingrese numeros
printf ("\nIngrese un numero ");
scanf ("%d",&a);
printf ("\nIngrese otro numero ");
scanf ("%d",&b);

if(a>b)
{
    max=a; min=b;
}
else
{
    max=b; min=a;
}
for (i=min+1 ; i<=max-1; i++)
{

    printf ("%i,",i);
}
system ("pause");
return 0;

}


