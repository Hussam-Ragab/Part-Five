/*
 *  Create Union type called family_name it shall have two
	members first_name and last_name. The two members are
	array of characters with same size 30. Try to write string in
	the first member first_name then print the second member
	last_name plus print the size of the union.
 */

#include <stdio.h>
#include <string.h>

typedef union{
	char First_Name[30];
	char Last_Name[30];

}Family_Name;

int main(void){

	Family_Name name;

	printf("enter first name\n");
	fflush(stdout);
	gets(name.First_Name);
	puts(name.Last_Name);
	printf("Size of Union = %d",sizeof(Family_Name));

	return 0;
}
