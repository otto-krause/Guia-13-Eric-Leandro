
#include <stdlib.h>
int main ()
{
 int a[20];
 int i;
 int p=0;
 int n=0;

 int num1=0;
 for (i=1;i<21;i++)
 {
     printf ("Ingrese sueldo %i:",i);
     scanf ("%i",&a[i]);
     if (a[i]>2000)
 {
     p=p+1;
 }
 else
 {
      if (a[i] <2000 )
    {
        n=n+1;

    }

 }




 }
 printf ("Las personas que ganan mas de 2000 son %d y las que no son %d",p,n);

 system ("pause");
 return 0;
}
