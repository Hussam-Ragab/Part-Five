/*
 * C Program to store information (name, roll and marks) for a student using structure and display it.
 */

#include <stdio.h>
typedef struct{
	char Name[30];
	int Roll;
	float Mark;
}Student_Info;

int main(void){

	Student_Info Student;

	printf("enter student name\n");
	fflush(stdout);
	gets(Student.Name);
	printf("enter student roll\n");
	fflush(stdout);
	scanf("%d",&Student.Roll);
	printf("enter student mark\n");
	fflush(stdout);
	scanf("%f",&Student.Mark);

	printf("Student Name: %s\nStudent Roll: %d\nStudent Mark: %.1f",Student.Name,Student.Roll,Student.Mark);

	return 0;
}


