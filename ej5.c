#include <stdio.h>
int res1(int r1)
{
	printf ("Resistencia 1:"); scanf ("%i",&r1);
	return r1;
}
int res2(int r2)
{
	printf ("Resistencia 2:"); scanf ("%i",&r2);
	return r2;
}int res3(int r3)
{
	printf ("Resistencia 3:"); scanf ("%i",&r3);
	return r3;
}int res4(int r4)
{
	printf ("Resistencia 4:"); scanf ("%i",&r4);
	return r4;
}int res5(int r5)
{
	printf ("Resistencia 5:"); scanf ("%i",&r5);
	return r5;
}	
int main()
{
	int r1,r2,r3,r4,r5,rt=0;
	r1=res1(r1);
	r2=res2(r2);
	r3=res3(r3);
	r4=res4(r4);
	r5=res5(r5);
	rt=r1+r2+r3+r4+r5;
	printf("R1:%i R2:%i R3:%i R4:%i R5:%i RT:%i ",r1,r2,r3,r4,r5,rt);
    return 0;
}
	
