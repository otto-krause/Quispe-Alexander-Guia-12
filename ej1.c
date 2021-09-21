#include <stdio.h>
int numeros(int num)
{
	printf ("Ingrese un numero:");
	scanf("%i",&num);
    return num;
}
int main()
{
  int n1,n2,num;
  n1=numeros(num);
  n2=numeros(num);
  printf("Los numeros son %i\n%i",n1,n2);
   return 0;
}
