/*
 * C Program to add two distances (inch-feet) using structure and display the result.
 */


#include <stdio.h>

typedef struct{

	float feet, inch;

}Distance;


int main(void){

	Distance D1,D2,Sum;

	printf("enter first distance in feet\n");
	fflush(stdout);
	scanf("%f",&D1.feet);
	printf("enter first distance in inch\n");
	fflush(stdout);
	scanf("%f",&D1.inch);
	printf("enter second distance in feet\n");
	fflush(stdout);
	scanf("%f",&D2.feet);
	printf("enter second distance in inch\n");
	fflush(stdout);
	scanf("%f",&D2.inch);

	Sum.feet = D1.feet + D2.feet;
	Sum.inch = D1.inch + D2.inch;

	while(Sum.inch > 12)
	{
		Sum.inch -= 12;
		++Sum.feet;
	}

	printf("Sum of Distances in Feet = %.1f\nSum of Distances in Inch = %.1f\n",Sum.feet,Sum.inch);

	return 0;
}
