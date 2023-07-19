/*
 *  C function to add two complex numbers by passing two structure to a function and display the results.
 */

#include <stdio.h>

typedef struct{

	float real;
	float imag;

}Complex;

Complex ADD_Complex(Complex N1, Complex N2);

int main(void){

	Complex Num1,Num2, Result;

	printf("enter first complex number\n");
	fflush(stdout);
	scanf("%f%f",&Num1.real,&Num1.imag);
	printf("enter second complex number\n");
	fflush(stdout);
	scanf("%f%f",&Num2.real,&Num2.imag);

	Result = ADD_Complex(Num1,Num2);

	printf("%.1f + %.1fi",Result.real,Result.imag);

	return 0;
}

Complex ADD_Complex(Complex N1, Complex N2)
{
	Complex Sum;

	Sum.real = N1.real + N2.real;
	Sum.imag = N1.imag + N2.imag;

	return Sum;
}
