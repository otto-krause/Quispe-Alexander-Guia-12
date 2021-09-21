#include <stdio.h>
int numero(int x)
{
	printf ("Ingrese un numero: "); 
	scanf  ("%d",&x);
    return x;
}
int main()
{
	int num1,num2,x;
	num1=numero(x);
	num2=numero(x);
	if (num1>num2){
		printf ("%d es mayor que %d",num1,num2);}
	else{
		if (num1<num2){
			printf ("%d es mayor que %d",num2,num1);}
		else{
			printf ("%d y %d son iguales",num1,num2);}
	}
	return 0;
}
