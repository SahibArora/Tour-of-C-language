// working with the structures...

#include<stdio.h>
#include<conio.h>

struct Student                 // creating a structure here through keyword struct...
{
	char name[20];				// now these two are the data members of this structure, we can access them with its objects..
	int marks;					
};

int main()
{     
	int i = 1;
	struct Student s[2];          // creating arrays of object of structure Student...
	for (i = 0; i < 2; i++)
	{
		printf("Enter %d Student's data-- \n",i+1);
		printf("%d Student's Name: ", i+1);
		scanf("%s",&s[i].name);                 // s[i].name   this is how we access the members of a structure with dot operator..
												// %s is used to read muliple characters at once...
		printf("%d Student's Marks: ", i+1);
		scanf("%d",&s[i].marks);
	}
	for (i = 0; i < 2; i++)
	{
		printf("%d Student's data is-- \n", i+1);
		printf("%d Student's Name is: %s \n", i+1,s[i].name);
		printf("%d Student's Marks is: %d \n", i+1, s[i].marks);
	}

	return 0;      
}