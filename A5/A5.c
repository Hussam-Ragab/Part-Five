/*
 * C Function to store information (name, id and grade) for 10
	students in array of structures using pointers and another
	function to print all the structures using pointers.
 *
 */

#include <stdio.h>
#define SIZE	4
typedef struct{
	char Name[50];
	int ID;
	float Grade;
}Student_Info;

void Information_Student(Student_Info* Student);
void Print_Information_Student(Student_Info* Student);

int main(void){

	Student_Info Student[SIZE];
	Information_Student(Student);
	Print_Information_Student(Student);

	return 0;
}

void Information_Student(Student_Info* Student)
{

	int index=0;

	while(index < SIZE)
	{
		printf("Info of Student[%d] Student Name, ID and Grade \n",index);
		fflush(stdout);
		scanf("%s%d%f",Student->Name,&(Student->ID),&(Student->Grade));
		++index;
		++Student;
	}

}

void Print_Information_Student(Student_Info* Student)
{

	int index=0;

	while(index < SIZE)
	{
		printf("Student[%d]\nStudent Name: %s\nStudent ID: %d\nStudent Grade: %.1f\n",index,Student->Name,(Student->ID),(Student->Grade));
		++index;
		++Student;
	}





}

