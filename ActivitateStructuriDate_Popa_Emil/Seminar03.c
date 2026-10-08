#include<stdio.h>
int main()
{
	printf("Introduceti un numar real:");
	float variabila = 0.0;
	scanf_s("%f", &variabila);
	printf("Ati intordus: %5.2f", variabila);
}