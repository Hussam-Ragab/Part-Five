/*
 *  C Function to calculate the difference between two time periods using structures.
 */

#include <stdio.h>

typedef struct{

	int hour;
	int minute;
	int second;

}Period;

Period Diff_Time(Period T1, Period T2);

int main(void){

	Period Time1, Time2, Dif_Time;
	printf("enter first Time\n");
	fflush(stdout);
	scanf("%d%d%d",&Time1.hour,&Time1.minute,&Time1.second);
	printf("enter second Time\n");
	fflush(stdout);
	scanf("%d%d%d",&Time2.hour,&Time2.minute,&Time2.second);

	Dif_Time = Diff_Time(Time1,Time2);
	printf("%dh:%dm:%ds\n",Dif_Time.hour,Dif_Time.minute,Dif_Time.second);


	return 0;
}

Period Diff_Time(Period T1, Period T2)
{
	Period Diff;
	while((T2.second >= T1.second))
	{
		--T1.minute;
		T1.second += 60;
	}

	while((T2.minute >= T1.minute))
	{
		--T1.hour;
		T1.minute += 60;
	}

	Diff.hour = T1.hour - T2.hour;
	Diff.minute = T1.minute - T2.minute;
	Diff.second = T1.second - T2.second;

	while(Diff.second >= 60)
	{
		Diff.second -= 60;
		++Diff.minute;
	}
	while(Diff.minute >= 60)
	{
		Diff.minute -= 60;
		++Diff.hour;
	}

	return Diff;


}
