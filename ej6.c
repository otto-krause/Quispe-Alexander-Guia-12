#include <stdio.h>
float octava(float n, float oct)
{
	printf("Ingrese un numero:");
	scanf("%f",&n);
	oct=n/8;
	return oct;
}
int main(){
	float n,oct;
	oct=octava(oct);
	printf("La octava parte es: %.2f",oct);
	return 0;
}
