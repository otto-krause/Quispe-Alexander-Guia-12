#include <stdio.h>
int num1(int n1)
{
	printf("Ingrese un lado en cm: ");
	scanf("%d",&n1);
	return n1;
}
int num2(int n2)
{
	printf("Ingrese un lado en cm: ");
	scanf("%d",&n2);
	return n2;
}
int main()
{
	int n1,n2,P,A;
	n1=num1(n1);
	n2=num2(n2);
	P=2*n1+2*n2;
	A=n1*n2;	
	printf("El perimetro es: %dcm",P ); printf(" Y el Area es: %dcm",A );
	return 0;
}
