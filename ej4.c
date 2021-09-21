#include <stdio.h>
float fuerza(float F)
{
	printf ("Ingrese la fuerza:");
	scanf("%f",&F);
	return F;
}
float area(float A)
{
	printf ("Ingrese el area:");
	scanf("%f",&A);
	return A;
}
int main()
{
	float F,A,P;
	F=fuerza(F);
	A=area(A);
	P=F/A;
	printf("La presion sobre la superficie es: %.2fPa",P);
	return 0;
}
