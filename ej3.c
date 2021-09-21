#include <stdio.h>
int cantH(float H)
{
	printf("ingrese cantidad de curriculum de hombres: ");
	scanf("%f",&H);
	return H;
}
int cantM(float M)
{
	printf("ingrese cantidad de curriculum de mujeres: ");
	scanf("%f",&M);
	return M;
}
int main()
{
	float M,H,PH,T,PM;
	H=cantH(H);
	M=cantM(M);
	T=H+M;
	PH=H*100/T;
	PM=100-PH;
	printf("El porcentaje de hombres es %.2f ",PH); printf(" y el de mujeres %.2f",PM);
	return 0;
}
